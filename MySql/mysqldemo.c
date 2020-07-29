/* Please READ
Compiling the MySQL client code is tricky. First of all you need to have GCC installed on your system. You have to set proper compilation flag and libraries to link. To do that, we’ll use mysql_config utility to get compiler options. “mysql_config –cflags” returns C Compiler flags to find include files and critical compiler flags and defines used when compiling the libmysqlclient library. And “mysql_config –libs” Libraries and options required to link with the MySQL client library.
*/
//gcc mysqldemo.c -o tester `mysql_config --cflags --libs`     <---- use it to compile
#include<stdio.h>
#include <mysql/mysql.h>
#include <stdlib.h>       // for exit()

//use below command to compile program
//gcc mysqldemo.c -o tester `mysql_config --cflags --libs`



int main()
{
	printf("MySql Demo in C programming\n");
	
	MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW row;
	
	char *server = "localhost";		// ip address is : "127.0.0.1"
	char *user = "root";
	char *password = "Current-Root-Password";
	char *database = "TESTDB";
	
	conn = mysql_init(NULL);
	
	//connect to database
	if (! mysql_real_connect(conn, server, user, password,database, 0, NULL, 0))
	{
		printf("Failed to coonect MySql server %s :Error %s\n",server, mysql_error(conn));
		return 0;
	}
	
	//execute sql query to fetch all tables names
	if(mysql_query(conn, "show tables"))
	{
		printf("Failed to execute query. Error: %s\n",mysql_error(conn));
		return 0;
	}
	
	res = mysql_use_result(conn);
	
	//output tables name
	int i = 0;
	printf("\nMySql Tables in mysb databases:\n\n");
	
	row = mysql_fetch_row(res);
	
	while(row != NULL)
	{
		printf("%s\n",row[0]);
		i++;
		row = mysql_fetch_row(res);
	}
	
	printf("\nTotal tables count is : %d\n",i);
	
	
	//free results ptr
	mysql_free_result(res);
	
	//execute sql query for show tables records
	if(mysql_query(conn, "select * from STUDENT"))
	{
		printf("Failed to execute query. Error: %s\n",mysql_error(conn));
		return 0;
	}
	
	res = mysql_store_result(conn);
	
	if(res == NULL)
	{
		printf("not able to access table\n");
		return 0;
	}
	
	int columns = mysql_num_fields(res);

	printf("Entries in table of STUDENT\n");
	while(row = mysql_fetch_row(res))
	{
		for(i = 0; i < columns; i++)
		{
			printf("%s ",row[i] ? row[i]: "NULL");
		}
		printf("\n");
	}
	
	mysql_free_result(res);
	mysql_close(conn);
	
	return 0;
}

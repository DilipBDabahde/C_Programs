#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#define MAXINODE 50

#define READ 1
#define WRITE 2

#define MAXFILESIZE 1024

#define REGULAR 1
#define SPECIAL 2

#define START 0
#define CURRENT 1
#define END 2

typedef struct superblock
 {
    int TotalInodes;
    int FreeInode;
 }SUPERBLOCK, *PSUPERBLOCK;

typedef struct inode
 {
   char FileName[50];
   int InodeNumber;
   int FileSize;
   int FileActualSize;
   int FileType;
   char *Buffer;
   int LinkCount;
   int ReferenceCount;
   int permission;
   struct inode *next;
 }INODE,*PINODE,**PPINODE;

 typedef struct filetable
 {
    int readoffset;
    int writeoffset;
    int count; 
    int mode;
    PINODE ptrinode;
 }FILETABLE,*PFILETABLE;

typedef struct ufdt
 { 
  PFILETABLE ptrfiletable;
 }UFDT;

 UFDT UFDTArr[MAXINODE];
 SUPERBLOCK SUPERBLOCKobj; 
 PINODE head=NULL;

   void man(char *name)                                   
  {
	if(name==NULL)return;
	if(strcasecmp(name,"create")==0)
	{
	   printf("Description:used to create new regular files\n");
	   printf("Usage:create file_name Permission\n");
	}
	 else if(strcasecmp(name,"read")==0)
	{
	  printf("Descriprion:used to read data from regular files\n");
	  printf("Usage:Read file name no of Bytes to read\n");
	}
	else if(strcasecmp(name,"write")==0)
      {
        printf("Description:used to write into regular files\n"); 
	  printf("Usage:write_filenaem\nafter this enter the data that we want ot write\n");
      }
	else if(strcasecmp(name,"ls")==0)
	{
	  printf("Description:used to list all info about files\n");
	  printf("Usage:ls\n");
	}
	 else if(strcasecmp(name,"stat")==0)
	{
	  printf("Description:used to display information of files \n ");
	  printf("Usage:stat file_name\n");
      }
      else if(strcasecmp(name,"fstat")==0)
	{
	  printf("Description:used to display info of files \n");
	  printf("Usage:stat files description\n");
	}
	else if(strcasecmp(name,"truncate")==0)
	{
	   printf("Descrription:used to remove data from files\n");
	   printf("Usage:truncatee file_name\n");
	}
	else if(strcasecmp(name,"open")==0)
	{
	   printf("Description:Used to open exitsting files\n");
	   printf("Usage:open File_name mode\n");
	}
	else if(strcasecmp(name,"close")==0)
	{
	  printf("Description:used to close opened files\n");
	  printf("Usage:close file_name\n");
	}
	else if(strcasecmp(name,"closeall")==0)
	{
		printf("Description:used to close all opened files\n");
		printf("Usage:closeall\n");
	}
	 else if(strcasecmp(name,"lseek")==0)
	{
	  printf("Description:Used to chage file offset\n");
	  printf("Usage:lseek file_Name changeinoffset Startpoint\n");
	}
	else if(strcasecmp(name,"rm")==0)
	{
	   printf("Description:used to delete the file\n");
	   printf("Usage:rm File_Name\n");
	}
	else 
	{
	   printf("ERROR:No manual entry avaialble.\n");
	}
}

  void DisplayHelp()
  {
	printf("ls:To list out all files\n");
	printf("clear:To clear console\n");
	printf("open:To open the files\n");
	printf("close:To close the files\n");
	printf("closeall:To close all opens the files\n");
	printf("read:To read all the contents\n");
	printf("write:To write content into the files\n");
	printf("exit:To terminate file System\n");
	printf("stat:To display info of files using name \n");
	printf("fstat:To display info of file using file description\n");
	printf("truncate:To remove all data from file\n");
	printf("rm:To delete the file");
 }

 int GetFDFromName(char *name)
  {
	int i=0;

	while(i<MAXINODE)
     {
		if(UFDTArr[i].ptrfiletable !=NULL)
	   {
	     if(strcasecmp((UFDTArr[i].ptrfiletable->ptrinode->FileName),name)==0)
           {
			break;
	     }
         } 
	            i++;
     }	
	
	if(i==50)
    {
	 return -1;
    }
	else
    {
	return i;
    }
 }

  PINODE Get_Inode(char* name)
 {
	  PINODE temp=head;
	  int i=0;
	  
	  if(name==NULL)
   {
	   return NULL;
   }
	while(temp!=NULL)
	{
	   if(strcmp(name,temp->FileName)==0)
	 {
	    break;
	 }
		temp=temp->next;
	}
	return temp;
 }

   void CreateDILB()
  {
   int i=1;
   PINODE newn=NULL;
   PINODE temp=head;

   while(i<=MAXINODE)
   {
       newn=(PINODE)malloc(sizeof(INODE));

       newn->LinkCount=newn->ReferenceCount=0;
       newn->FileType=newn->FileSize=0;
	 newn->Buffer=NULL;
	 newn->next=NULL;
	 newn->InodeNumber=i;
       if(temp==NULL)
       {
          head=newn;
	    temp=head;
       }
	 else
	 {
		temp->next=newn;
		temp=temp->next;
       }
	   i++; 
     }
   printf("DILB created Successfully\n");
  }

 void InitialiseSuperBlock()
 {
    int i=0;
    while(i<MAXINODE)
    {
       UFDTArr[i].ptrfiletable=NULL;
	 i++;
    }
       
     SUPERBLOCKobj.TotalInodes=MAXINODE;
     SUPERBLOCKobj.FreeInode=MAXINODE;
 }

 int CreateFile(char *name,int permission)
 {
		int i=0;
		PINODE temp=head;

		if((name==NULL)||(permission==0)||(permission>3))
	{
	  return -1;
	}

	if(SUPERBLOCKobj.FreeInode==0)
	{
	  return -2;
	}
	 (SUPERBLOCKobj.FreeInode)--;
	
	if(Get_Inode(name)!=NULL)
	{
	 	return -3;
	}
	  while(temp !=NULL)
	  {
		if(temp->FileType==0)
		break;
		temp=temp->next;
 	  }

	  while(i<MAXINODE)
	  {
		if(UFDTArr[i].ptrfiletable==NULL)
		break;
		i++;
	  }

      UFDTArr[i].ptrfiletable=(PFILETABLE)malloc(sizeof(FILETABLE));
	if(UFDTArr[i].ptrfiletable==NULL)
	{
	    return -4;
	}
	  UFDTArr[i].ptrfiletable->count=1;
	  UFDTArr[i].ptrfiletable->mode=permission;
	  UFDTArr[i].ptrfiletable->readoffset=0;
	  UFDTArr[i].ptrfiletable->writeoffset=0;

	  UFDTArr[i].ptrfiletable->ptrinode=temp;
	  strcasecmp(UFDTArr[i].ptrfiletable->ptrinode->FileName,name); //strcpy_s
	  UFDTArr[i].ptrfiletable->ptrinode->FileType=REGULAR;
	  UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount=1;
	  UFDTArr[i].ptrfiletable->ptrinode->LinkCount=1;
	  UFDTArr[i].ptrfiletable->ptrinode->FileSize=MAXFILESIZE;
	  UFDTArr[i].ptrfiletable->ptrinode->FileActualSize=0;
	  UFDTArr[i].ptrfiletable->ptrinode->permission=permission;
	  UFDTArr[i].ptrfiletable->ptrinode->Buffer=(char *)malloc(MAXFILESIZE);
	  memset(UFDTArr[i].ptrfiletable->ptrinode->Buffer,0,1024);
	
	 return i;
  }

int rm_File(char *name)
 {
	int fd=0;
	
	fd=GetFDFromName(name);  //hcheck this plzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz
	if(fd==-1)
   {
	return -1;
   }

    (UFDTArr[fd].ptrfiletable->ptrinode->LinkCount)--;

    if(UFDTArr[fd].ptrfiletable->ptrinode->LinkCount==0)
    {	
	  UFDTArr[fd].ptrfiletable->ptrinode->FileType=0;
	  free(UFDTArr[fd].ptrfiletable);
    }

	UFDTArr[fd].ptrfiletable=NULL;
	(SUPERBLOCKobj.FreeInode)++;
 }

int ReadFile(int fd,char *arr,int isize)
  {	
		int read_size=0;
	
		if(UFDTArr[fd].ptrfiletable==NULL)
	{
	  return -1;
	}

		if(UFDTArr[fd].ptrfiletable->mode !=READ && UFDTArr[fd].ptrfiletable->mode !=READ+WRITE)
	  {	
		return -2;
	  }
	
    if(UFDTArr[fd].ptrfiletable->ptrinode->permission != READ && UFDTArr[fd].ptrfiletable->ptrinode->permission !=READ+WRITE)
    {
	return -2;
    }	

 	if(UFDTArr[fd].ptrfiletable->readoffset==UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)
     {
		return -3;
	}

	if(UFDTArr[fd].ptrfiletable->ptrinode->FileType != REGULAR)
	{
	  return -4;
	}

	read_size=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)-(UFDTArr[fd].ptrfiletable->readoffset);
	if(read_size<isize)
	{
		strncpy(arr,(UFDTArr[fd].ptrfiletable->ptrinode->Buffer)+(UFDTArr[fd].ptrfiletable->readoffset),read_size);
		UFDTArr[fd].ptrfiletable->readoffset=UFDTArr[fd].ptrfiletable->readoffset+read_size;
	}
	else
	{
  	 		strncpy(arr,(UFDTArr[fd].ptrfiletable->ptrinode->Buffer)+(UFDTArr[fd].ptrfiletable->readoffset),isize);
			UFDTArr[fd].ptrfiletable->readoffset=UFDTArr[fd].ptrfiletable->readoffset+isize;
	}

	return isize;
  }
	
  int WriteFile(int fd, char *arr,int isize)
  {
	  if(((UFDTArr[fd].ptrfiletable->mode)!=WRITE) && ((UFDTArr[fd].ptrfiletable->mode)!=READ+WRITE))
        {
		return -1;
	  }
      
      if(((UFDTArr[fd].ptrfiletable->ptrinode->permission) !=WRITE) &&                                                 ((UFDTArr[fd].ptrfiletable->ptrinode->permission)!=READ+WRITE))
      {
	 return -1;
	}
	
	if((UFDTArr[fd].ptrfiletable->writeoffset)==MAXFILESIZE)
	{
	  return -2;
	}
	 if((UFDTArr[fd].ptrfiletable->ptrinode->FileType)!=REGULAR)
	{
	  return -3;
	}
	
	strncpy((UFDTArr[fd].ptrfiletable->ptrinode->Buffer)+(UFDTArr[fd].ptrfiletable->writeoffset),arr,isize);
	
      (UFDTArr[fd].ptrfiletable->writeoffset)=(UFDTArr[fd].ptrfiletable->writeoffset)+isize;
	
	(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+isize;

	return isize;
  }

 int OpenFile(char *name,int mode)
	{
	int i=0;
	PINODE temp=NULL;
	
	if(name==NULL || mode<=0)
	{
		return -1;
	}
	  temp=Get_Inode(name);
	  if(temp==NULL)
	  {
		return -2;
	  }
	   if(temp->permission<mode)
	{
	  return -3;
	}
	  while(i<MAXINODE)
	{
	   if(UFDTArr[i].ptrfiletable==NULL)
	   break;
		i++;
      }

	UFDTArr[i].ptrfiletable=(PFILETABLE)malloc(sizeof(FILETABLE));
	
	if(UFDTArr[i].ptrfiletable==NULL)
	{
		return -1;
	}
	 UFDTArr[i].ptrfiletable->count=1;
	 UFDTArr[i].ptrfiletable->mode=mode;
	 if(mode==READ+WRITE)
	{
		UFDTArr[i].ptrfiletable->readoffset=0;
		UFDTArr[i].ptrfiletable->writeoffset=0;
	}	
	else if(mode==READ)
	{
		UFDTArr[i].ptrfiletable->readoffset=0;
	}
	else if(mode==WRITE)
	{
	  	UFDTArr[i].ptrfiletable->writeoffset=0;
	}
	UFDTArr[i].ptrfiletable->ptrinode=temp;
	(UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount)++;

	return i;
  }

 void CloseFileByName(int fd)
  {
	UFDTArr[fd].ptrfiletable->readoffset=0;
	UFDTArr[fd].ptrfiletable->writeoffset=0;
	(UFDTArr[fd].ptrfiletable->ptrinode->ReferenceCount)--;
  }

int CloseFileByName1(char *name)
{
     int i=0;
	i=GetFDFromName(name); ///check plzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz
     if(i== -1)
  {
	return -1;
  }
	
	UFDTArr[i].ptrfiletable->readoffset=0;
	UFDTArr[i].ptrfiletable->writeoffset=0;
	(UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount)--;
   
   return 0;
}

  void CloseAllFile()
  {
	int i=0;
	while(i<MAXINODE)
	{
		if(UFDTArr[i].ptrfiletable !=NULL)
	  {
		  UFDTArr[i].ptrfiletable->readoffset=0;
		  UFDTArr[i].ptrfiletable->writeoffset=0;
		  (UFDTArr[i].ptrfiletable->ptrinode->ReferenceCount)--;
		  break;
        } 
		i++;
      }
   }

 int LseekFile(int fd,int size,int from)
 {
	if((fd<0) || (from>2)) return -1;
	if(UFDTArr[fd].ptrfiletable==NULL)return 1;

	if((UFDTArr[fd].ptrfiletable->mode==READ)||UFDTArr[fd].ptrfiletable->mode==READ+WRITE)
     {	
 		if(from==CURRENT)
	     {
     if(((UFDTArr[fd].ptrfiletable->readoffset)+size)>UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)
	{
	 return -1;
      }
		if(((UFDTArr[fd].ptrfiletable->readoffset)+size)<0)
   	{
	  return -1;
	}
		(UFDTArr[fd].ptrfiletable->readoffset)=(UFDTArr[fd].ptrfiletable->readoffset)+size;
           }
		else if(from==START)
		{
		   if(size>(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize))
	{    
	  return -1;
	}
		if(size<0)
	{
	 return -1;
	}
		(UFDTArr[fd].ptrfiletable->readoffset)=size;
           }
           else if(from==END)
	     {
			if((UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+size>MAXFILESIZE)
     {
		return -1;
     }
                  if(((UFDTArr[fd].ptrfiletable->readoffset)+size)<0)
      {            
	   return -1;
	}    
	 	      (UFDTArr[fd].ptrfiletable->readoffset)=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+size;
           }   
    }
    else if(UFDTArr[fd].ptrfiletable->mode==WRITE)
    {
		if(from==CURRENT)	
		{
			if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)>MAXFILESIZE)
	{	
		return -1;
	}
			if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)<0)
      {
		return -1;
      }
		 if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)>(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize))
		      (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)=(UFDTArr[fd].ptrfiletable->writeoffset)+size;
		(UFDTArr[fd].ptrfiletable->writeoffset)=(UFDTArr[fd].ptrfiletable->writeoffset)+size;
            }
		else if(from==START)
  		{
			if(size>MAXFILESIZE)
	{
		return -1;
	}
		    if(size<0)
	{
			return -1;
	}
		if(size>(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize))
		    (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)=size;
		    	(UFDTArr[fd].ptrfiletable->writeoffset)=(UFDTArr[fd].ptrfiletable->writeoffset)+size;
	      }
		else if(from==END)
		{	
		     if((UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+size>MAXFILESIZE)
       {		
	  return -1;
	 }
			if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)<0)
	{
		return -1;
	}
			(UFDTArr[fd].ptrfiletable->writeoffset)=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+size;
		}
    }  
 }

 void ls_file()
  {
	int i=0;
	PINODE temp=head;

      if(SUPERBLOCKobj.FreeInode==MAXINODE)
      {
	   printf("Error:There are no Files\n"); return ;
	}

 	printf("\n File Name\tInode number\tFile size\tLink count\n");
	printf("-------------------------------------------------");
	while(temp !=NULL)
  	{
	   if(temp->FileType !=0)
	   {
		printf("%s\t\t%d\t\t%d\t\t%d\n",temp->FileName,temp->InodeNumber,temp->FileActualSize,temp->LinkCount);
 	   }
	   temp=temp->next;
   }
	printf("--------------------------------------------");
 }

int fstat_file(int fd)
 {
	PINODE temp=head;
	int i=0;
 
  	if(fd<0)
    {
	return -1;
    }
	if(UFDTArr[fd].ptrfiletable==NULL)
	{
	return -2;
	}

	temp=UFDTArr[fd].ptrfiletable->ptrinode;

	printf("\n-----Statistical Information about file-----\n");
	printf("File name: %s\n",temp->FileName);
	printf("Inode Number: %d\n",temp->InodeNumber);
	printf("File size: %d\n",temp->FileSize);
	printf("FileActula size: %d\n",temp->FileActualSize);
	printf("Link count: %d\n",temp->LinkCount);
      printf("Referecne count:%d\n",temp->ReferenceCount);
    
      if(temp->permission==1)
		printf("File Permission:Read only\n");
	else if(temp->permission==2)
		printf("File Permission:write\n");
	else if(temp->permission==3)
		printf("File Permission:Read & Write\n");
	printf("---------------------------------\n\n");
	
	return 0;
  }

int stat_file(char *name)
 {
	PINODE temp=head;
	int i=0;
	
	if(name==NULL)
   {
	return -1;
   }
	
	while(temp!=NULL)
	{
	   if(strcmp(name,temp->FileName)==0)
		break;
	   temp=temp->next;
	}

 	if(temp=NULL)	return -2;

	printf("\n--------Staticaal Info about file------\n");
	printf("File Name: %s\n",temp->FileName);
	printf("Inode Number:%d\n",temp->InodeNumber);
	printf("File Size:%d\n",temp->FileSize);
	printf("Actual File Size:%d\n",temp->FileActualSize);
	printf("Link Count:%d\n",temp->LinkCount);
	printf("Reference count:%d",temp->ReferenceCount);

      if(temp->permission==1)
		printf("File Permission:Read only\n");
	else if(temp->permission==2)
		printf("File Permission Write\n");
	else if(temp->permission==3)
		printf("File Permission:Read & write\n");
	printf("----------------------------------\n\n");
	
	return 0;
}

int truncate_File(char *name)
 {
   int fd=GetFDFromName(name);//check it plzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz
	if(fd == -1)
  {
	return -1;
  }
	memset(UFDTArr[fd].ptrfiletable->ptrinode->Buffer,0,1024);
	UFDTArr[fd].ptrfiletable->readoffset=0;
	UFDTArr[fd].ptrfiletable->writeoffset=0;
	UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize=0;
 }

  int main()
  {
    char *ptr=NULL;
    int ret=0,fd=0,count=0;
    char command[4][80],str[80],arr[1024];
    InitialiseSuperBlock();
    CreateDILB();

  while(1)
    {
      fflush(stdin);
	strcasecmp(str,"");  
  	printf("\nMarvellous VFS :>");
      fgets(str,80,stdin);

      count=sscanf(str,"%s %s %s %s",command[0],command[1],command[2],command[3]);
      
     if(count==1)
   	{
		if(strcasecmp(command[0],"ls")==0)
		{
			ls_file();
		}
		else if(strcasecmp(command[0],"closeall")==0)
		{
		   CloseAllFile();
		   printf("All Files closed Successfully\n");continue;
		}
 		 else if(strcasecmp(command[0],"clear")==0)
		{
		    system("cls");
		    continue;
		}
		else if(strcasecmp(command[0],"help")==0)
		{
		     DisplayHelp(); continue;
		}
		else if(strcasecmp(command[0],"exit")==0)
		{
		      printf("Terminating the Marvellouse Virtual File Systemm\n");
			break;
		}
		else
		{
		printf("\nError:Command not fount !!\n"); continue;
            } 
     }
     else if(count==2)	
     {  
	 if(strcasecmp(command[0],"stat")==0)
        {
		ret=stat_file(command[1]);
		if(ret==-1)
		    printf("ERROR:Incorrect parameters\n");
		if(ret==-1)
		    printf("ERROR:There is no such file\n");
		continue;
	  }
	   else if(strcasecmp(command[0],"fstat")==0)
         { 
		  ret=fstat_file(atoi(command[1]));
		  if(ret==-1)
			printf("ERROR:Incorrect parameters\n");
		  if(ret==-2)
			printf("ERROR:There is no such files\n");
		  continue;
         }
	   else if(strcasecmp(command[0],"close")==0)
         {
		ret=CloseFileByName1(command[1]);
		if(ret==-1)
			printf("There is no such files\n");
		  continue;
	   } 
         else if(strcasecmp(command[0],"rm")==0)
	   {
		ret=rm_File(command[1]);
		if(ret==-1)
			printf("ERROR:There is no such file|n");
		continue;
	   }
	   else if(strcasecmp(command[0],"man")==0)
	   {
		man(command[1]);
         }
	   else if(strcasecmp(command[0],"write")==0)
	   {
		fd=GetFDFromName(command[1]);
		if(fd==-1)
		{
		  printf("Error:Incorrect parameters\n"); continue;
		}
		printf("Enter the data:\n");
		scanf("%[^\n]",arr);
	
		ret=strlen(arr);
		if(ret==0)
		{
		 	printf("Error:incorrect paramters\n"); continue;
 		} 
		ret=WriteFile(fd,arr,ret);
		if(ret==-1)
			printf("Error:Permission denied\n");
		if(ret==-2)
			printf("Error:There is no sufficien memory to write\n");
		if(ret==-3)
			printf("Error:It is not regular file\n");
         }     
	   else if(strcasecmp(command[0],"truncate")==0)
	   {
		  ret=truncate_File(command[1]);
		  if(ret==-1)
		      printf("Error:Incorrect parameter\n");
	   } 
	   else
	   {
		  printf("\nError:command not found !!!\n"); continue;
	   }
     } 
     else if(count==3)
     {
        if(strcasecmp(command[0],"create")==0)
	  {
	    ret=CreateFile(command[1],atoi(command[2]));
	    if(ret>=0)
		 printf("File is created successfully with file descriptor:%d\n",ret);
	    if(ret==-1)
		printf("Error:Incorrect parameters\n");
	   if(ret==-2)
		printf("Error:There is no inodes\n");
	   if(ret==-3)
		printf("Error:File Aleady exists\n");
	   if(ret==-4)
		printf("Error:Memory allocation failure\n");
		continue;
	 }
	  else if(strcasecmp(command[0],"open")==0)
       { 
		 ret=OpenFile(command[1],atoi(command[2]));
		 if(ret>=0)
			printf("File is opened successfully with file descriptor:%d\n",ret);
		 if(ret==-1)
		  	printf("Error:Incorect parameters\n");
		 if(ret==-2)
			printf("Error:File not present\n");
		 if(ret==-3)
			printf("Error:permission denied\n");
		continue;
	 }
	  else if(strcasecmp(command[0],"read")==0)
	 {
		fd=GetFDFromName(command[1]);
		if(fd==-1)
		{	
		   printf("Error:Incorrect parameters\n"); continue;
		}
		ptr=(char *)malloc(sizeof(atoi(command[2]))+1);
		if(ptr==NULL)
		{
		  	printf("Error:Memory allocation failure!!\n");continue;
		}
		ret=ReadFile(fd,ptr,atoi(command[2]));
		if(ret==-1)
			printf("Error:File not exiting\n");
		if(ret==-2)
			printf("Error:Permission denied\n");
		if(ret==-3)
			printf("Error:Reached at end of files\n");
		if(ret==-4)
			printf("Error:It is not regular fils\n");
		if(ret==0)
			printf("Error:File empty\n");
		if(ret>0)
		{
			write(2,ptr,ret);
		}	
		continue;
       }				
	 else
	 {
			printf("\nError:Command not found\n"); continue;
	 }
   }   	
   else if(count==4)
   {
 	   if(strcasecmp(command[0],"lseek")==0)
	  {
		fd=GetFDFromName(command[1]);
	      if(fd==-1)
		{
		  printf("Error:incoorect parameter\n"); continue;
		}
		ret=LseekFile(fd,atoi(command[2]),atoi(command[3]));
		if(ret==-1)
		{
			printf("Error:Unable to perform lseek\n");
		}
        }
	   else
         {
			printf("\nError:Command not found\n"); continue;
	   }
    } 
	else
	{
       printf("\nError:Command not found!!!\n"); continue;
      }
    }   printf("indise main");
   return 0;
}

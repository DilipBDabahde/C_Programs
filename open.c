#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int open (const char *name, int flags);
int open (const char *name, int flags, mode_t mode);

/*int fd;
fd = open ("/home/dilip/Chkmark.c", O_RDONLY);
if (fd == −1)
 error */


int fd;
fd = open ("/home/dilip/AnilUpdatesRessume.docx", O_WRONLY | O_TRUNC);
if (fd == −1)
/* error */

return 0;
}

#include <dirent.h> 
#include <stdio.h> 

int main(void) 
{
  DIR *d;                                                 //create a directory
  struct dirent *dir;
  d = opendir(".");                                       //open directory
  if (d) 
  {
    while ((dir = readdir(d)) != NULL)                    //Checking the directory is not null
    {
      printf("%s\n", dir->d_name);
    }
    closedir(d);
  }
  return(0);
}

/*OUTPUT

~/ $ gcc -o dir dir.c
~/ $ ./dir
.
client
.npm
client.c
dir.c
lost+found
Saamy.txt
..
size
copy.c
reverse.c
server
dir
size.c
.c9
sever
copy
.bash_history
server.c
.config
Aravindha.txt
a.out
reverse
~/ $ */

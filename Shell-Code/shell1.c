#include <stdio.h>
int main()
{
char *ptr[2];
ptr[0]="/bin/sh";
ptr[1]=NULL;
execve(ptr[0],ptr,ptr[1]);
return 0;
}

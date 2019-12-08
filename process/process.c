#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("home is : %s \n", (char*)getenv("HOME"));
    printf("user is: %s \n", (char*)getenv("USER"));
    printf("directory is: %s \n", (char*)getenv("PWD"));
}




#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    char *str = (char*)malloc(sizeof(char)*50);
    int i=0;
    int j = 0;

    for(i=1; i<argc; i++)
    {
        if(argv[i][0] == '-')
        {
            for(j=1; j < strlen(argv[i]); j++)
            {
                if(argv[i][j] == 'a')
                {
                    printf("list all kind of file \n");
                }
                else if(argv[i][j] == 's')
                {
                    printf("list size of file \n");
                }
                else
                {
                    printf("incorrect condition \n");
                }

            }
        }
    }
}
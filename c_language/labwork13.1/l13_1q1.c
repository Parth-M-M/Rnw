

#include <stdio.h>

int main()
{   FILE *read , *write ;
char str[50];
    read = fopen("read.txt", "r");
    write = fopen("write.txt", "a");
    if (NULL == read) 
    {
        printf("File can't be opened \n");
    }
    if (NULL == write)
    {
        printf("File can't be opened \n");
    }
    while (fgets(str, 50, read) != NULL) {
        fputs(str, write);
        fputs("\n", write);
    }
    printf("file transfer successfull \n");
    fclose(read);
    fclose(write);
    
    return 0;
}

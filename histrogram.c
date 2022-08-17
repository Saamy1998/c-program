#include <stdio.h>
#include <string.h>

int main()
{
    FILE* ptr;
    char ch,str[1000],p[50][100], str1[20], ptr1[50][100];;
     int count = 0, c = 0, i=0, j = 0, k, space = 0,a=0;
    ptr = fopen("Aravindha.txt", "r");

    if (NULL == ptr)
    {
        printf("file can't be opened \n");
    }
    while(ch != EOF)
    {
        ch = getc(ptr);

        str[i]=ch;
        //printf("%c", str[i]);
        i++;
    }
    fclose(ptr);
    //a=strlen(str);
    for (i = 0;i<strlen(str);i++)
    {
        if ((str[i] == ' '))
        {
            space++;
        }
    }

    for (i = 0, j = 0, k = 0;j < strlen(str);j++)
    {
        if ((str[j] == ' '))
        {
            p[i][k] = '\0';
            i++;
            k = 0;
        }
        else
             p[i][k++] = str[j];
    }
    k = 0;
    for (i = 0;i <= space;i++)
    {
        for (j = 0;j <= space;j++)
        {
            if (i == j)
            {
                strcpy(ptr1[k], p[i]);
                k++;
                count++;

                break;
            }
            else
            {
                if (strcmp(ptr1[j], p[i]) != 0)
                    continue;
                else
                    break;
            }
        }
    }

    for (i = 0;i < count;i++)
    {
        for (j = 0;j <= space;j++)
        {
            if (strcmp(ptr1[i], p[j]) == 0)
                c++;
        }
        printf("%s", ptr1[i]);
        for(k=strlen(ptr1[i]);k<=12;k++)
        {
            if(k<12)
            {
                printf(" ");
            }
            else if(k==12)
            {
                printf("|  ");
            }
        }
        for(k=0;k<=c;k++)
        {
            if(k<c)
            {
                 printf("* ");
            }
            else
            {
                printf("\n");
            }

        }
        c = 0;
    }
    printf("___________________________________\n");
    for(k=0;k<=12;k++)
        {
            if(k<12)
            {
                printf(" ");
            }
            else if(k==12)
            {
                printf("|  ");
            }
        }
     for(k=1;k<=10;k++)
        {
            printf("%d ",k);

        }
    //fclose(ptr);
    //printf("\n%d",a);
    return 0;
}

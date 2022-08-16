#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char another, choice;


    struct std
    {
        char name[40];
        int age;
        int rollno;
    };

    struct std s;

    char stdname[40];

    long int recsize;
    fp = fopen("std.txt","rb+");
    if(fp == NULL)
    {
        fp = fopen("std.txt","wb+");
        if(fp == NULL)
        {
            printf("Connot open file");
            exit(1);
        }
    }

    recsize = sizeof(s);

    while(1)
    {
        system("cls");
        printf("1. Add Record \n");
        printf("2. List Records \n");
        printf("3. Modify Records \n");
        printf("4. Exit \n");
        printf("Your Choice: ");
        fflush(stdin);
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END);
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name: ");
                scanf("%s",s.name);
                printf("\nEnter age: ");
                scanf("%d", &s.age);
                printf("\nEnter rollno: ");
                scanf("%d", &s.rollno);

                fwrite(&s,recsize,1,fp);

                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp);
            while(fread(&s,recsize,1,fp)==1)
            {
                printf("\n%s %d %d",s.name,s.age,s.rollno);
            }
            getch();
            break;

        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("Enter the student name to modify: ");
                scanf("%s", stdname);
                rewind(fp);
                while(fread(&s,recsize,1,fp)==1)
                {
                    if(strcmp(s.name,stdname) == 0)
                    {
                        printf("\nEnter new name,age and rollno: ");
                        scanf("%s%d%d",s.name,&s.age,&s.rollno);
                        fseek(fp,-recsize,SEEK_CUR);
                        fwrite(&s,recsize,1,fp);
                        break;
                    }
                }
                printf("\nModify another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            fclose(fp);
            exit(0);
        }
    }
    return 0;
}

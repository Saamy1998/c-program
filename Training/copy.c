/*Algorithm
Step 1: START
Step 2: Declare three files fp1,fp2 and fp3  and character.
Step 3: Open the file fp1,fp3 in read mode and fp2 in write mode.
Step 4: Check the file is existing or not .
Step 5: Copy the character form fp1 to fp2.
Step 6: Print the string in the file fp3 which is copied from fp1.
Step 7: STOP.*/


#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1,*fp2,*fp3;
    char ch;
    fp1=fopen("Aravindha.txt","r");                      // opening a file in read mode
    fp2=fopen("Saamy.txt","w");                          // opening a file in write mode
    fp3=fopen("Saamy.txt","r");                          // opening a file in read mode
    if(fp1==NULL)                                        // checking whether the file exists or not
    {
        printf("File Not Found");
        return 0;
    }
    if(fp2==NULL)                                        // checking whether the file exists or not
    {
        printf("File Not Found");
        return 0;
    }
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);                                  // copy character to fp2
        //printf("%c", ch);
    }
    rewind(fp2);
    while((ch=fgetc(fp3))!=EOF)
    {
        printf("%c", ch);                               // print the coiped file in write mode
    }
    printf("\n\n");
    printf("File is Successfully Copied");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}

/*OUTPUT
~/ $ gcc -o copy copy.c
~/ $ ./copy
Aravindha Saamy H 
This is a sample file to read and wirte a file and then to find the number of lines in this file After finishing the above process then find the following
1)Find number of empty lines in this file.
2)Find the duplicate words in the file.

File is Successfully Copied~/ $ */

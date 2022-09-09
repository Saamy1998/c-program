/*Algorithm
Step 1: START
Step 2: Declare a file pointer and two integer.
Step 3: Open the file in read mode.
Step 4: Check fthe file is existing or not.
Step 5: Use fseek() function to get the pointer to the end of the file
Step 6: Use ftell() function to get the position of the pointer.
Step 7: Chech WHILE condition for printing the string in reverse order.
Step 8: Print the character if the condition is true otherwise goto step 9.
Step 9: STOP.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int ft,i=0;
    fp=fopen("Aravindha.txt","r");     //open the file in read mode
    if(fp==NULL)
    {
        printf("File Not Found");
    }
    fseek(fp,0,SEEK_END);
    ft=ftell(fp);                      //Tells the position of the pointer
    while(i<ft)                        //While loop for reversing the string in the file and prints
    {
        i++;
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
    }
    fclose(fp);
    return 0;
}

/*OUTPUT

~/ $ gcc -o reverse reverse.c
~/ $ ./reverse
.elif eht ni sdrow etacilpud eht dniF)2
.elif siht ni senil ytpme fo rebmun dniF)1
gniwollof eht dnif neht ssecorp evoba eht gnihsinif retfA elif siht ni senil fo rebmun eht dnif ot neht dna elif a etriw dna daer ot elif elpmas a si sihT
 H ymaaS ahdnivarA~/ $ */

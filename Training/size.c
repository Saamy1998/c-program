/*Algorithm
Step 1: START
Step 2: Declare a character array.
Step 3: Get the file name in character array.
Step 4: Initialize and open file given by user in read mode.
step 5: Check IF file is existing,Is true goto step 6 otherwise print File not found and goto step 
Step 6: Move the pointer to the end
Step 7: Store the pointer value
Step 8: Print the file size
Step 9: END*/

#include <stdio.h>
int main() {
   char a[20] ;
   printf("Enter the file name= ");
   scanf("%s",a);
   FILE* fp = fopen(a,"r");                    // opening a file in read mode
   if(fp == NULL)
   {                                           // checking whether the file exists or not
      printf("File Not Found!\n");
   }
   fseek(fp, 0L, SEEK_END);
   long int i = ftell(fp);                              //counting the size of the file
   fclose(fp); 
   if(i != -1)
   printf("Size of the file %s is %ld bytes \n",a, i);  //printing the file size
   return 0;
}

/*OUTPUT

~/ $ gcc -o size size.c
~/ $ ./size
Enter the file name= Aravindha.txt
Size of the file Aravindha.txt is 256 bytes 
~/ $ */

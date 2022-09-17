/*Algorithm  for main
Step 1: START.
Step 2: Initialize two integer as len, max and two character array as line[MAXLINE] , longest[MAXLINE].(MAXLINE is define as 1000)
Step 3: Declare 0 to max.
Step 4: Check the WHLIE condition, call the function getline(char line[],int maxline) to declare len and  
        check len is greater than 0,it's true goto step 5 else goto step
Step 5: If len is greater than max goto step 6 else goto step 7.
Step 6: Assign len to max and call function copy(char to[],char from[]) and goto step 7.
Step 7: Check IF max is greater than 0 goto step 8 else step 9.
Step 8: Print the max length line.
Step 9: STOP.

Algorithm for getline(char s[],int lim).
Step 1: Initialize two integers c , i.
Step 2: Check FOR condition,i(0) is less than lim-1 and c(getchar()) is not equal to EOF and c is not equal to '\n'.
Step 3: If the above condition is true then assign c to s[i] and goto step 4.
Step 4: Check IF condition (c is equal to '\n'),is true then assign c to s[i] and count i, and goto step 5.
Step 5: Assign '\0' to s[i]. 
Step 6: Return the value i.
Step 7: STOP.

Algorithm for copy(char to[],char from[]
Step 1: START.
Step 2: Initialize i.
Step 3: Declare 0 to i.
Step 4: Check WHILE condition for copying the line.
Step 5: STOP.*/

 #include <stdio.h>
 #define MAXLINE 1000 /* maximum input line length */

 int getline(char line[], int maxline);
 void copy(char to[], char from[]);
 /* print the longest input line */
 int main()
 {
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0 && (len = getline(line, MAXLINE)) < 40 )              
    if (len > max)                              //Checks len is greater than max 
    {
      max = len;
      copy(longest, line);                        //Copies the line from line to longest
    }
    if (max > 0) /* there was a line */
    printf("\nLngest line is= %s", longest);      //Prints the longest line given
    return 0;
 }
 /* getline: read a line into s, return length */                            
 int getline(char s[],int lim)
 {
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)     //To get each line from user
    s[i] = c;
    if (c == '\n')
    {
      s[i] = c;
      ++i;
    }
    s[i] = '\0';
    return i;
 }
  /* copy: copy 'from' into 'to'; assume to is big enough */
 void copy(char to[], char from[])
 {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')           //Copies the line from line to longest
    ++i;
 }


/*OUTPUT
~/Ebook_Task/ $ gcc -o char char.c
~/Ebook_Task/ $ ./char
This is a sample
This is the longest line in this statement
C programming in character array
 
Lngest line is= This is the longest line in this statement*/

/*Algorithm
Step 1: START.
Step 2: Initialize two integer as strat and end
Step 3: Declare the start range of the number from user.
Step 4: Declare the end range of the number from user.
Step 5: Print the even numbers by function printEven(int, int)
Step 6: Print the odd numbers by the function printOdd(int, int)
Step 7: STOP.

Algorithm for printEven(int start, int end)
Step 1: START.
Step 2: Check IF start is greater then end.
Step 3: Return else Check IF the number is divisible by 2.
Step 4: If it is true then print the value.
Step 5: Recursively call to printEven to get next value
Step 6: STOP.

Algorithm for printOdd(int start, int end)
Step 1: START.
Step 2: Check IF start is greater then end.
Step 3: Return else Check IF the number is not divisible by 2.
Step 4: If it is true then print the value.
Step 5: Recursively call to printOdd to get next value
Step 6: STOP.*/

#include <stdio.h>

void printEven(int start, int end);                          // Function declaration
void printOdd(int start, int end);

int main()                              
{
    int start, end;

    printf("Enter the number to start: ");                  //Input lower limit from user
    scanf("%d", &start); 
    printf("Enter the number to end: ");                    //Input upper limit from user
    scanf("%d", &end);

    printf("\nEven numbers are-\n");                        // Prints the even number
    printEven(start, end);
    printf("\nOdd numbers are-\n");                         // Prints the odd number
    printOdd(start, end);
}

void printEven(int start, int end)                           // Recursive function to print even numbers in a given range.
{
    if (start > end)
        return;
    if (start % 2 == 0)                                     // Check the number is divisible by 2
        printf("%d\t", start);

    printEven(start+1, end);                                // Recursively call to printEven to get next value
}

void printOdd(int start, int end)                            //Recursive function to print odd numbers in a given range.
{
    if (start > end)
        return;
    if (start % 2 != 0)                                     // Check the number is not divisible by 2
        printf("%d\t", start);

    printOdd(start+1, end);                                 // Recursively call to printOdd to get next value
}

/*OUTPUT

~/Function/ $ gcc -o evenodd evenodd.c
~/Function/ $ ./evenodd
Enter the number to start: 5
Enter the number to end: 500

Even numbers are-
6       8       10      12      14      16      18      20      22      24      26      28      30      32      34      36      38      40      42      44      46    48
50      52      54      56      58      60      62      64      66      68      70      72      74      76      78      80      82      84      86      88    90       92
94      96      98      100     102     104     106     108     110     112     114     116     118     120     122     124     126     128     130   132      134     136
138     140     142     144     146     148     150     152     154     156     158     160     162     164     166     168     170     172   174      176     178     180
182     184     186     188     190     192     194     196     198     200     202     204     206     208     210     212     214   216      218     220     222     224
226     228     230     232     234     236     238     240     242     244     246     248     250     252     254     256   258      260     262     264     266     268
270     272     274     276     278     280     282     284     286     288     290     292     294     296     298   300      302     304     306     308     310     312
314     316     318     320     322     324     326     328     330     332     334     336     338     340   342      344     346     348     350     352     354     356
358     360     362     364     366     368     370     372     374     376     378     380     382   384      386     388     390     392     394     396     398     400
402     404     406     408     410     412     414     416     418     420     422     424   426      428     430     432     434     436     438     440     442     444
446     448     450     452     454     456     458     460     462     464     466   468      470     472     474     476     478     480     482     484     486     488
490     492     494     496     498     500
Odd numbers are-
5       7       9       11      13      15      17      19      21      23      25      27      29      31      33      35      37      39      41      43      45    47
49      51      53      55      57      59      61      63      65      67      69      71      73      75      77      79      81      83      85      87    89       91
93      95      97      99      101     103     105     107     109     111     113     115     117     119     121     123     125     127     129   131      133     135
137     139     141     143     145     147     149     151     153     155     157     159     161     163     165     167     169     171   173      175     177     179
181     183     185     187     189     191     193     195     197     199     201     203     205     207     209     211     213   215      217     219     221     223
225     227     229     231     233     235     237     239     241     243     245     247     249     251     253     255   257      259     261     263     265     267
269     271     273     275     277     279     281     283     285     287     289     291     293     295     297   299      301     303     305     307     309     311
313     315     317     319     321     323     325     327     329     331     333     335     337     339   341      343     345     347     349     351     353     355
357     359     361     363     365     367     369     371     373     375     377     379     381   383      385     387     389     391     393     395     397     399
401     403     405     407     409     411     413     415     417     419     421     423   425      427     429     431     433     435     437     439     441     443
445     447     449     451     453     455     457     459     461     463     465   467      469     471     473     475     477     479     481     483     485     487
489     491     493     495     497     499 */

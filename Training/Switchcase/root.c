/*Algorithm
Step 1: START.
Step 2: Initialize six integers and one double.
Step 3: Declare coefficients of quadratic equation and store it in variable say a, b and c.
Step 4: Find discriminant of given equation using formula (i.e. discriminant = (b * b) - (4 * a * c)).
Step 5: Switch(discriminant>0)
       a) case 1
            Discriminant is positive. Apply formula root1 = (-b + sqrt(discriminant)) / (2*a); to compute root1 and root2 = (-b - sqrt(discriminant)) / (2*a)
            Print the roots
            Break the case
       b) case 0
            Discriminant is either negative or zero. There exist one more condition to check.
            Switch(discrimnant<0)
               i) case 1
                  Apply formula  root1 = root2 = -b / (2 * a) and imaginary = sqrt(-discriminant) / (2 * a)
                  Print the roots
                  Break the case
               ii) case 0   
                  Apply formula root1 = root2 = -b / (2 * a)
                  Print the roots
                  Break the case  
Step 6: STOP.*/

#include <stdio.h>
#include <math.h>                                                                // Used for sqrt() 

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    double discriminant;
    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);                                         // Calculate discriminant  
    switch(discriminant > 0)                                                      // Compute roots of quadratic equation based on the nature of discriminant 
    {
      case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);                          // If discriminant is positive 
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots ares: %.2f and %.2f",
                    root1, root2);
            break;
        case 0:
            switch(discriminant < 0)                                             // If discriminant is not positive
            {
                case 1:
                    root1 = root2 = -b / (2 * a);                                 // If discriminant is negative 
                    imaginary = sqrt(-discriminant) / (2 * a);
                    printf("Roots are: %.2f + i%.2f and %.2f - i%.2f",
                            root1, imaginary, root2, imaginary);
                    break;
                case 0:
                    root1 = root2 = -b / (2 * a);                                // If discriminant is zero 
                    printf("Roots are: %.2f and %.2f", root1, root2);
                    break;
            }
    }

    return 0;
}

/*OUTPUt

~/Switchcase/ $ gcc -o root root.c -lm
~/Switchcase/ $ ./root
Enter values of a, b, c of quadratic equation (aX^2 + bX + c): 3
6
8
Roots are: -1.00 + i1.29 and -1.00 - i1.29~/Switchcase/ $ ./root
Enter values of a, b, c of quadratic equation (aX^2 + bX + c): 4
-7
5
Roots are: 0.88 + i0.70 and 0.88 - i0.70~/Switchcase/ $ ./root
Enter values of a, b, c of quadratic equation (aX^2 + bX + c): 4
23
8
Roots ares: -0.37 and -5.38~/Switchcase/ $ ./root
Enter values of a, b, c of quadratic equation (aX^2 + bX + c): 2
21
4
Roots ares: -0.19 and -10.31*/

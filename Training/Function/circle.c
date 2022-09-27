/*Algorithm
Step 1: START.
Step 2: Initialize four float values as radius, dia, circ and c.
Step 3: Declare the radius from user.
Step 4: Call getDiameter function and assign it to dia.
Step 5: Call getCircumference function and assign it to circ.
Step 6: Call getArea function and assign it to area
Step 7: Print the value of dia,circ and area.
Step 8: STOP.

/*Algorithm for getDiameter(double radius)
Step 1: START.
Step 2: Return 2*radius.
Step 3: STOP.

/*Algorithm for getCircumference(double radius)
Step 1: START.
Step 2: Return 2 * M_PI * radius(use math.h function for getting PI value(M_PI)).
Step 3: STOP.

/*Algorithm for getArea(double radius)
Step 1: START.
Step 2: Return M_PI * radius * radius(use math.h function for getting PI value(M_PI)).
Step 3: STOP.*/

#include <stdio.h>
#include <math.h>                               // Used for constant PI referred as M_PI

double getDiameter(double radius);             // Function declaration 
double getCircumference(double radius);
double getArea(double radius);

int main()
{
    float radius, dia, circ, area;
    printf("Enter radius of circle: ");         // Input radius of circle from user
    scanf("%f", &radius);
    dia  = getDiameter(radius);                // Call getDiameter function
    circ = getCircumference(radius);           // Call getCircumference function
    area = getArea(radius);                    // Call getArea function
    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);

    return 0;
}

double getDiameter(double radius)             // Calculate diameter of circle whose radius is given
{
    return (2 * radius);
}

double getCircumference(double radius)       // Calculate circumference of circle whose radius is given
{
    return (2 * M_PI * radius);              // M_PI = PI = 3.14 ...
}

double getArea(double radius)                // Find area of circle whose radius is given
{
    return (M_PI * radius * radius);         // M_PI = PI = 3.14 ...
}

/*OUTPUT

~/Function/ $ gcc -o circle circle.c
~/Function/ $ ./circle
Enter radius of circle: 10
Diameter of the circle = 20.00 units
Circumference of the circle = 62.83 units
Area of the circle = 314.16 sq. units~/Function/ $ ./circle
Enter radius of circle: 26
Diameter of the circle = 52.00 units
Circumference of the circle = 163.36 units
Area of the circle = 2123.72 sq. units*/

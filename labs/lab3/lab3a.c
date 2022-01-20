#include <stdio.h>
#include <math.h>
int main(void)
{
    // initializing variables and constants //

    const int noSides = 5, radius = 5;
    double angleRad, angleDeg, sidecSqu, sidec, periIn, periFt, powerCalc;



    // calculations //

    angleDeg = 360.0 / noSides;
    angleRad = angleDeg * (M_PI / 180.0);

    // printf("angleDeg = %.1f\nangleRad = %.2f\n", angleDeg, angleRad); // uncomment this line to test the output of the calculations above //

     /* I chose to condense the variables that represent side a and side b into one variable, because the sides in this case
     are referring to internal sides that are both equal to the radius, it doesn't make sense to use multiple variables to define the 
     values of both sides.*/

    powerCalc = pow(radius, 2) * 2;                                   // calculate the "a^2 + b^2" part of the "c^2 = a^2 + b^2 - 2ab cos(theta)" equation //
    sidecSqu = powerCalc - 2 * (pow(radius, 2) * cos(angleRad));     // calculate the "- 2ab cos(theta)" part of the "c^2 = a^2 + b^2 - 2ab cos(theta)" equation //
    sidec = sqrt(sidecSqu);                                         // calculate the square root of sidec^2 to fing the length of sidec //

    // printf("powerCalc = %.2f\nsidecSqu = %.2f\nsidec = %.2f", powerCalc, sidecSqu, sidec); // uncomment this line to test the output of the calculations above //

    periIn = noSides * sidec;
    periFt = periIn / 12;

    // printf("periIn = %.2f, periFt = %.2f", periIn, periFt); // uncomment this line to test the output of the calculations above //

    // printing results of calculations //

    printf("\nNumber of sides: %i\nRadius (in): %i\n\n", noSides, radius);
    printf("Angle is %.2f radians (%.1f degrees)\n", angleRad, angleDeg);
    printf("Side is %.2f inches\n", sidec);
    printf("Perimeter is %.2f inches or %.2f feet.\n\n", periIn, periFt);

    return 0;
}
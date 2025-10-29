
/* The trapezoidal rule is a method to calculate integrals
it divides the area below the curve into several trapezoids
Then the integral will be the sum of those trapezoids areas*/

/* Trapezoidal rule:

Integral = ((b-a)/2N) * ( f(x0) + 2* f(x1) + ... + 2* f(x_(n-1)) + f(xn))

*/

#include <stdio.h>
#include <math.h>


int main(){
   
    int i, n=12;

    // We define the first and last variables of the sum
    // x0=a=0 ; x12= b=pi/3
    
    float a=0.0, b_deg= 60.0; // first we define b in degrees and then we will change to radians
    float b_rad, area, mult_rad;

    // Conversion of b to radians
    b_rad= (M_PI* b_deg)/180.0;
    printf("b (pi/3) in radians: %f \n", b_rad); 
    
    // Sum tan(a)+tan(b)
    // tan() function: it needs an angle in radians, and will give a double number as result
    area=tan(a)+tan(b_rad);
    printf("initial area: f(x0)+f(x12)= %f \n", area);

    // Sum of rest of the terms: 2*(f(x1) + f(x2) + ...+ f(x11))
    // It calculates the area for each trapezoid, multiply by 2, and sums, the steps are each 5 degrees from 5 to 55 included
    for(i=5; i<60; i=i+5){
        area= area + 2*tan((M_PI*i)/180.0);
        printf("New area at x(%d) = %f \n", i/5, area);
    }
 
    //We can also calculate this same area with while loop

    /*
    i=5
    while (i<60){
      area= area+2*tan((M_PI*i)/180.0);
      if (i%2 == 0){
        printf("New area at x(%d) = %f \n", i/5, area);
      }
      i=i+5;  //This line is essential for the while to be able to stop
    }
    */


    //Multiply the area by ((b-a)/2N)=(pi/3)/2*12
    mult_rad=(M_PI * ( (b_deg-a)/ (2*n) ))/180.0;
    area=mult_rad*area;

    //Aproximated result (trapezoidal rule)
    printf("\nTrapezoidal result: %f \n", area);

    //Actual result
    printf("Real result: %f \n", log(2.0));

    return 0;
}






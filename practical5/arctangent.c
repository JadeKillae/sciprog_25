#include <stdio.h>
#include <math.h>

double arctanh_aprox(const double x, const double delta); //we dont want these variables to change, so we make them constant
double arctanh_real(const double x);

int main(){

    double delta, x;
    printf("Enter delta \n"); //Delta will determine the precision of the approximation, the smaller, the better is the result
    scanf("%lf", &delta);

    int length=1000;
    double tan_aprox[length];
    double tan_real[length];

    x=-0.9;
    int j=0; //array index - be careful with this variable in the while loop!

    while(x<=0.9 && j<length){  //it will calculate the aprox arctanh and compare it with the real one until they are similar enough
        tan_aprox[j]= arctanh_aprox(x, delta);
        tan_real[j]= arctanh_real(x);
        printf("Difference at %lf is %.10lf \n", x, fabs(tan_aprox[j]-tan_real[j]));
        j++;
        x=x+0.1;
    }

    return 0;
}

//Inverse hyperbolic tangent aproximation

double arctanh_aprox(const double x, const double delta){
    double arctan=0; //approximated
    double elem,val;
    int n=0;

    do{
        val=2*n+1;
        elem=pow(x,val)/val;
        arctan += elem; //Shortcut for arctan=arctan+elem
        n++;
    } while(fabs(elem) >= delta);

    return arctan;
}

//Real value of the arctanh

double arctanh_real(const double x){
    return ((log(1+x)-log(1-x))/2);
}
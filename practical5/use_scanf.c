#include <stdio.h>

int main(void) {
    int i; 
    double a;
    int nvariables;
     

    // Enter information from user
    printf("Enter an int and double\n");
    nvariables=scanf("%d %lf",&i,&a); //reading variables. nvariables will be 2, if correctly done
    if (nvariables!=2){
        printf ("problem with the input");
    }
    return 0;
}
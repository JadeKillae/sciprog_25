#include <stdio.h>
#include <stdlib.h>

//Function prototype
//Input arguments: Fn-1 and Fn-2
//Exit: Fn and Fn-1

void fibonacci(int *a, int *b);  //the inputs will be pointers

/* We are going to do passby reference: we are modifying the value 
of the variables inside a function different than main
*/

int main()
{
    int n, i;
    int f1=1, f0=0;

    //Get user to enter a number
    printf("Please enter a positive integer \n");
    scanf("%d", &n);  //we put it in the address of n
    //remember that if n is too high, the fibonacci sequence will reach values that is out of the limit of int storage capacity

    //Check if the number is positive
    if(n<1){
        printf("The number is not positive :( \n");
        exit(1);
    }
    
    printf("Fibonacci sequence is: \n");
    printf("%d, %d, ", f0, f1);

    for(i=2;i<=n;i++){
        fibonacci(&f1,&f0); //From this line on, we have changed the values of the variables
        printf("%d, ", f1);
        if ((i+1)%10 ==0)
            printf("\n");
    }

    return 0;
}

void fibonacci(int *a, int *b){
 
    int next;
    // a=Fn-1, b=Fn-2
    next=*a+*b; //we are using the VALUES of the input variables

    //Exit: *a=fn, *b=fn-1
    *b=*a;
    *a=next;

    //we have changed the values of the variables from its address, therefore we don't need to put any return command

}


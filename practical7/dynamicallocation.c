#include <stdio.h>
#include <stdlib.h>

//Allocate Array
int *allocatearray(int n){
    int *p;
    p=(int *) malloc(n*sizeof(int)); //with int* we specify what it returns
    return p;
}

//Fill with ones
//Since we pass by reference and not by value, it doesnt need a return command
void fillwithones(int *array, int n){  //we just need the adress and an integer that tells the dimension of the pointer
     int i;
     for(i=0; i<n; i++)
        array[i]=1;
}

//Print the array
void printarray(int *array, int n){
    int i;
    for(i=0; i<n; i++){
        printf("a[%d]: %d \n", i, array[i]);
    }
}

//Deallocate the array
void freearray(int *array){
    free(array);
}

//It is recommended to put the array pointing to NULL after the deallocation, either in main function, or in the freearray

int main(){
    int n, *a;

    printf("Size of the array: \n");
    scanf("%d", &n);

    a=allocatearray(n);
    fillwithones(a, n);
    printarray(a, n);
    freearray(a); 

    a=NULL;

}


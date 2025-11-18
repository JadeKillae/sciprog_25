#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h" //here we include the function that is written in another file

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    // TODO: Open the file 
    f = fopen(filename, "r");
    if (f==NULL){
        printf("can't open the file :( \n");
        exit(1);
    }


    int i;
    // TODO: Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 
    int **magicsquare = malloc(n*sizeof(int*));
    //if you need the rows to be consecutive in memory we have to use another method, not this one
    for(i=0; i<n; i++){
        magicsquare[i]=malloc(n*sizeof(int));
    }

    // TODO:inputting integer data into the matrix;
    int j;
    for(i=0; i<n; i++){
        for(j=0;j<n;j++){
            fscanf(f, "%d", &magicsquare[i][j]); //we indicate using pointers the adress where we want to save each element
        }
    }

    printf("this square %s magic. \n", isMagicSquare(magicsquare, n) ? "is":"is NOT" ); //SHORT CUT OF IF EXPRESSION: if the return is 1, do 'is', if not, do 'is not'

    // TODO: Freeing each row separately before freeing the array of pointers
    for (i=0; i<n; i++){
        free(magicsquare[i]); //we free the pointers, they were allocated in here
    }
    free(magicsquare);


    // TODO:Close the file
    fclose(f);

    return 0;
}  

//##!

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. lines: %d\n", count);
    fclose(fp); 
    return count;
}

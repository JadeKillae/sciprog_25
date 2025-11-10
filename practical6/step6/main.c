#include <stdio.h>

//Function prototype

void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main(){

    int n=5, p=3, q=4;  //matrices dimensions
    double A[n][p], B[p][q], C[n][q]; //our matrices
    int i,j,k;  //loop indices

    //Initialize A,B,C

    //The outer loop checks the rows and the inner loop checks columns
    for(i=0;i<n;i++)
        for(j=0;j<p;j++)
            A[i][j]=i+j;            
        

    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            B[i][j]=i-j;            
        

    for(i=0;i<n;i++)
        for(j=0;j<q;j++)
            C[i][j]=0.0;            
        
    

    //Perform matrix multiplication

    //If the loops only contain one line, we can work without brackets
    // for(i=0; i<n; i++)
      //  for (j=0; j<q;j++)
       //     for (k=0;k<p;k++)
         //       C[i][j]=C[i][j]+A[i][k]*B[k][j];
    
    matmult(n, p,q,A,B,C);



    //Print out matrices

    printf("\n This is matrix A \n\n");
    for(i=0; i<n;i++){
        for(j=0; j<p; j++){
            printf("%4.0f", A[i][j]);
        }
        printf("\n");
    }

    printf("\n This is matrix B \n\n");
    for(i=0; i<p;i++){
        for(j=0; j<q; j++){
            printf("%4.0f", B[i][j]);
        }
        printf("\n");
    }


    printf("\n This is matrix C \n\n");
    for(i=0; i<n;i++){
        for(j=0; j<q; j++){
            printf("%4.0f", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) { //double pointers because we are dealing with matrices, of dimension n

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;
    // TODO: Checking that every row and column add up to M
    for (i=0; i<n;i++){
        int rowsum=0, colsum=0;
        for (j=0; j<n; j++){
            rowsum += square[i][j]; //we go through rows
            colsum += square[j][i]; //we go through columns
        }
        if (rowsum != M || colsum!= M) return 0; //if the condition is not met even in just one row or column, we don't have a magic square
    }


    // TODO: Checking that the main and secondary
    // diagonals each add up to M

    int diagsum=0; //diagonals made with (0,0), (1,1), (2,2) (for a 3 dim matrix)
    int secdiagsum=0; // diagonal made with (0,2), (1,1), (2,0)
    for (i=0;i<n; i++){
        diagsum += square[i][i];
        secdiagsum += square[i][n-i-1];
    }


    // If passed all checks, it is a magic square
    return 1;
}


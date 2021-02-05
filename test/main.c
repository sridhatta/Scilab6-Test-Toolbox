#include "transpose.c"
#include<stdio.h>

int main() 
 { 
   int B[100][100],A[100][100],i,j;                //Declaration of the 2D Array (Matrix) and other loop variables
   int M=2;                                        //Intialisation of Row of the Matrix
   int N=3;                                        //Intialisation of Column of the Matrix
   A[0][0]=1;                                      //Intialisation of the values of the Matrix
   A[0][1]=2; 
   A[0][2]=3;  
   A[1][0]=4;
   A[1][1]=5;
   A[1][2]=6;	
   printf("The Original Matrix is: \n"); 
   for (i = 0; i < M; i++)                         //Displaying the Original Matrix
    { 
      for (j = 0; j < N; j++)
  	{ 
           printf("%d ", A[i][j]); 
        }
      printf("\n"); 
    } 
  
   transpose(M,N,A,B);                             //Transpose Function to perform Transpose on the A Matrix which stores Transposed A matrix in the B matrix                 
   printf("Transposed Matrix(Outside the Transpose Function): \n"); 
   for (i = 0; i < N; i++)                         //Displaying the Transposed Matrix
    { 
      for (j = 0; j < M; j++)
  	{ 
           printf("%d ", B[i][j]); 
        }
      printf("\n"); 
    } 
   return 0; 
 } 


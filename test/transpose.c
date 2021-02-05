#include "transpose.h"  //Header File
#include<stdio.h>               
void transpose(int M,int N,int A[][100],int B[][100])   //Transpose Function
 { 
   int i, j; 
   printf("Transposed Matrix(Inside the Function):\n");
   for(i = 0; i< N; i++)                                //Loop to get the Transposed Matrix(B) of A Matrix 
    {
      for(j = 0; j <M; j++)
        { 
           printf("%d ",A[j][i]); 
	   B[i][j]=A[j][i];
        }
      printf("\n");
    }
 } 
 

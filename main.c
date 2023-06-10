//Matrix Addition

#include <stdio.h>

int main(void){

 int A[100][100],B[100][100],C[100][100], i, j,numberOfRow,numberOfColumn;

 printf("Input your numberOfRow[i] and numberOfColumn[j] for A: ");
 scanf("%d %d", &numberOfRow, &numberOfColumn);

 //Scanning the A matrix
 printf("Enter elements for A matrix.\n");
 for(i=0;i<numberOfRow;i++){

   for(j=0;j<numberOfColumn;j++){

    printf("A[%d][%d] = ",i,j);
    scanf("%d", &A[i][j]);
   }
    }
 //Printing the A matrix
  printf("A = ");
  for(i=0;i<numberOfRow;i++){

     printf("\t");
   for(j=0;j<numberOfColumn;j++){

    printf("%d ", A[i][j]);

   }
   printf("\n");
  }

 printf("Input your numberOfRow[i] and numberOfColumn[j] of B: ");
 scanf("%d %d", &numberOfRow, &numberOfColumn);

 //Scanning the B matrix
 printf("Enter elements for B matrix.\n");
 for(i=0;i<numberOfRow;i++){

   for(j=0;j<numberOfColumn;j++){

    printf("B[%d][%d] = ",i,j);
    scanf("%d", &B[i][j]);
   }

    }
 //Printing the B matrix
  printf("B = ");
  for(i=0;i<numberOfRow;i++){

     printf("\t");
   for(j=0;j<numberOfColumn;j++){

    printf("%d ", B[i][j]);

   }
   printf("\n");
  }
  //Matrix Addition

  for(i=0;i<numberOfRow;i++){

   for(j=0;j<numberOfColumn;j++){

        C[i][j] = A[i][j] + B[i][j];
   }
}

 //Printing the C matrix
  printf("\nA+B= ");

  for(i=0;i<numberOfRow;i++){

     printf("\t");
   for(j=0;j<numberOfColumn;j++){

    printf("%d ", C[i][j]);

   }
   printf("\n");
  }

}

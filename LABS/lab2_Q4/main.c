#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("Ascending order:\n");
    int num =0;
   for (int i=1; i<=10; i++){
        for (int j=1; j<=10; j++){
            num =i*j;
            printf ("%d * %d= %d\n" , i,j,num);
        }
     printf("\n=========================================\n");
   }
   return 0;


}


#include<stdio.h>
void Print(int n){
   for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++)
	       printf("%d",i);
       printf("\n");
   }
}

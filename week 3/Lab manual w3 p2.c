#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[]={101,303,221,554,134,658};
   int search = 134;
   int i;

   for(i=0;i<=5;i++){
       if(a[i] == search){
           printf("Position = %d row\n",i);
           return 0;
       }
   }
   printf("product not available\n");
   return 0;
}

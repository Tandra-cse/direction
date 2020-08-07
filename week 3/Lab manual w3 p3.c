#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[]={10,11,12,13,14,15};
   int key=13;
   int i;
   for(i=0;i<=5;i++){
       if(a[i]==key){
           printf("Found at %d Position\n",i);
           return 0;
       }
   }
   printf("not found\n");
   return 0;
}

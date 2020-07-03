#include<stdio.h>

int main()
{


    int fibo[46],k,l;
    fibo[0] = 0;
    fibo[1] = 1;
    for(int l = 2; l <= 45; l++)
        fibo[l] = fibo[l - 1] + fibo[l - 2];
    scanf("%d",&k);
    printf("%d",fibo[k]);

    return 0;

}

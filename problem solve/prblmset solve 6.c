#include<stdio.h>

int main()
{

    int j;
    scanf("%d",&j);
    int fibo[j + 1];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= j; i++)
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 10;
    printf("%d\", fibo[j]);
    return 0;
}

//runtime complexity:O(n)

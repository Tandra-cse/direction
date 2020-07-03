#include<stdio.h>
int main()
{

    int  s, t,gcd, rem;
    scanf("%d %d",&s,&t);
    while(t!=0)
    {
        rem=s%t;
        s=t;
        t=rem;
    }
    gcd =s;
    printf("%d\n",gcd);
    return 0;
}


//run time complexity:O(logn)

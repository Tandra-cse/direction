#include<stdio.h>
int main()
{

    int  n, m,gcd, rem,lcm,n1,n2;
    scanf("%d %d",&n1,&n2);
    n=n1;
    m=n2;
    while(t!=0)
    {
        rem=n%m;
        n=m;
        m=rem;
    }
    gcd=n;

    lcm= ((n1*n2)/gcd);
    printf("%d\n",lcm);
    return 0;
}
//run time complexity :O(logn)

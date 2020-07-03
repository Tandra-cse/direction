#include<stdio.h>
int main()
{

    int  s, t,gcd, rem,lcm,n1,n2;
    scanf("%d %d",&n1,&n2);
    s=n1;
    t=n2;
    while(t!=0)
    {
        rem=s%t;
        s=t;
        t=rem;
    }
    gcd=s;

    lcm= ((n1*n2)/gcd);
    printf("%d\n",lcm);
    return 0;
}
//run time complexity :O(logn)

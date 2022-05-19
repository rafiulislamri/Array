#include<stdio.h>
int main ()
{
    int n,s[100],rem;
    printf ("Enter values: ");
    scanf ("%d",&n);
    while (n>0)
    {
        rem = n%10;
        if (s[rem] == 1)
        break;
        s[rem]=1;
        n=n/10;
    }
    if (n>0)
    printf("Repeated number: \nYes");
    else
    printf("Repeated number: \nNo");
    return 0;
}

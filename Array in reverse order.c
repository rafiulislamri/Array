#include <stdio.h>
int main ()
{
    int n;
    printf ("Size of the array: ");
    scanf ("%d",&n);
    int a[n], i ;
    for (i=0;i<n;i++)
    {
        printf("Enter a[%d] value: ",i);
        scanf ("%d",&a[i]);
    }
    printf ("\n");
    printf("\n Orginal Order:\n ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf ("\n");
    printf("\n Revrse Order:\n ");

      for (i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}

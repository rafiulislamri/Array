
    #include <stdio.h>
    int main()
    {

        int i, j, t, n, a[100];
        printf("Enter the value of N \n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (a[i] > a[j])
                {

                    t =  a[i];
                    a[i] = a[j];
                    a[j] = t;

                }

            }

        }

        printf("Ascending Order: \n");
        for (i = 0; i < n; ++i)
            {printf("%d ", a[i]);}
            printf("\nThe Second highest value is: %d",a[n-2]);
            ;

    }

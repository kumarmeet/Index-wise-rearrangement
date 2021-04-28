#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, flag = 1;
    scanf("%d", &n);
    int a[n], b[n], c[n];

    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);

        if(b[i] != b[i - 1] && b[i] < n)
        {
            for(j = b[i]; j < n; j++)
            {
                c[j] = a[i];
                break;
            }
        }
        else
        {
            printf("Duplicate index or more than index are not allowed!!!");
            flag = 0;
            break;
        }

    }

    if(flag == 1)
        for(i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }

    return 0;
}

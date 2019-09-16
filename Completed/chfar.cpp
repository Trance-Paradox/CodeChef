#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, k, T=0, *arr;
    bool out[1000];
    scanf("%d",&t);
    while (t--)
    {
        int i, count=0, j=0;
        scanf("%d %d", &n, &k);
        arr = (int *) malloc(sizeof(int) * n);
        for (i=0; i<n-1; i++)
            scanf("%d ",&arr[i]);
        scanf("%d",&arr[i]);
        for (i=0; i<n; i++)
            if (arr[i] == 1)
                count++;
        if (count >= n-k)
            out[T++]=1;
        else 
            out[T++]=0;

        free(arr);
    }
    for(int k=0; k<T; k++)
    {
        if(out[k])
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
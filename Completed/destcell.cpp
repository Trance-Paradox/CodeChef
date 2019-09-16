#include <stdio.h>
#include <cmath>

int main(){
    int t;
    scanf("%d", &t);

    while (t--){
        long n, m;
        scanf("%d %d", &n, &m);
        long max = n * m;
        printf("%d", max);
        for (long k = 2; k <= max; k++){
            long dest = ceil(max * 1.0 / k);

            for (long j = 0; j < max; j += k)
                dest = dest + ((((j % n) * m + j / n) % k) != 0);

            printf(" %d", dest);
        }
        printf("\n");
    }
}
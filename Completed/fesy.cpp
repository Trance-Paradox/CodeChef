#include <iostream>
#include <cmath>

#define cin std::cin
#define cout std::cout

int main()
{
    short fibo[] = {1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9, 4, 3, 7, 0, 7, 7, 4, 1, 5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 2, 7, 9, 6, 5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1, 0};
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
            cout << 0 << '\n';
        else
        {
            long count = 0;
            while (n /= 2)
                count++;
            long long num = pow(2, count);
            int ans = (int)(num % 60 - 2);
            cout << fibo[ans] << '\n';
        }
    }
}

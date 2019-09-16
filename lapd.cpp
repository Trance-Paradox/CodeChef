#include <iostream>
using std::cin;
using std::cout;

int main()
{    
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const long M = 1000000007;
    int t;
    cin >> t;
    while (t--)
    {
        long a, b, c, total = 0;
        cin >> a >> b >> c;
        a--;
        long max = (b < a * c) ? b : a * c;
        for (long i = 1; i < max + 1; i++)
        {
            long i2 = i * i, j = a, K = i2 / a + 1;

            while (j > 0 && (K = i2 / j + 1) < c)
            {
                total = (total + (c - K) * (j - i2 / K) % M) % M;
                j = i2 / K;
            }
        }
        cout << total << '\n';
    }
}
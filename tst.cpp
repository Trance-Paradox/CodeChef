#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    const long M = 1000000007;
    int t;
    cin >> t;
    while (t--)
    {
        long a, b, c, total = 0;
        cin >> a >> b >> c;
        if (a > c)
            std::swap(a, c);
        a--;
        auto max = (b < a * c) ? b : a * c;
        for (auto i = 1; i <= max; i++)
        {
            cout << total << ' ';
            long sum = 0, j = a, i2 = i * i, temp = (i2 / j + 1l);
            while ((temp < c) && (j > 0))
            {
                sum = (sum + (c - temp)) % M;
                j--;
                temp = i2 / j + 1l;
            }
            total = (total + sum) % M;
        }
        cout << total << '\n';
    }
}
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;

int main()
{
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
            long sum = 0, i2 = i * i, j = a;

            for (auto j = a; j > 0; j--)
            {
                long temp = i2 / j + 1l;
                if (temp < c)
                    sum = (sum + (c - temp)) % M;
                else
                    break;
                cout << temp << ' ' << j << "   ";
            }
            total = (total + sum) % M;
        }
        cout << total << '\n';
    }
}
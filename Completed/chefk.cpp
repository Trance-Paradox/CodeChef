#include <iostream>
using std::cin;
using std::cout;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        if (m < (n - 1) || m > (n * (n + 1)) / 2)
        {
            cout << -1 << '\n';
        }
        else if (n == 1 && m == 0)
        {
            cout << 0 << '\n';
        }
        else if (m == 1)
        {
            cout << 1 << '\n';
        }
        else if (m < (n + 2))
        {
            cout << 2 << '\n';
        }
        else if (m < (2 * n + 1))
        {
            cout << 3 << '\n';
        }
        else
        {
            long mn = (m - n) * 2;
            long ans = mn / n + (mn % n != 0) + 1;
            cout << ans << '\n';
        }
    }   
}
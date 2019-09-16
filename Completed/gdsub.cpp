#include <iostream>
#include <vector>
#include <map>
#include <numeric>

#define v std::vector
using std::cin;
using std::cout;
long M = 1000000007;

int main()
{
    std::map<int, long> primes;
    v<long> vec(100000, 0), row(100000, 0), temp(100000, 0);
    long n, k, ans = 1;
    cin >> n >> k;

    for (long i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (primes.count(temp))
            primes[temp]++;
        else
            primes.insert({temp, 1l});
    }

    if (k >= primes.size())
    {
        for (const auto &p : primes)
            ans = ((ans % M) * (1 + p.second)) % M;
        cout << ans;
    }
    else
    {
        long i = 0;
        for (const auto &p : primes)
        {
            vec[i]= p.second;
            row[i++] = p.second;
            ans += p.second;
        }

        for (auto i = 0; i < k - 1; i++)
        {
            for (auto j = 0; j < primes.size() - i; j++)
            {
                temp[j] = (vec[j] * std::accumulate(row.begin() + 1 + j, row.begin() + primes.size() - i, 0l)) % M;
                ans = (ans + temp[j]) % M;
            }
            row = temp;
        }
        cout << ans;
    }
}
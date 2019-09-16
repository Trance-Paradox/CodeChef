#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <deque>
#include <numeric>
#include <algorithm>

#define deq std::deque
using std::cin;
using std::cout;

int main()
{
    deq<long> primes;
    for (long i = 1; i < 6; i++)
        primes.push_back(i);

    deq<long> terms(primes.size(), 0);

    int n = primes.size();

    for (long i = 0; i < n; i++)
    {
        for (long j = 0; j < n; j++)
        {
            long sum = std::accumulate(primes.begin(), primes.begin() + j + 1, 0);
            cout << sum << ' ';
            terms[j] = terms[j] + (long)std::accumulate(primes.begin() + 1 + j, primes.end(), sum, std::multiplies<>());
            cout << (long)std::accumulate(primes.begin() + 1 + j, primes.end(), sum, std::multiplies<>()) << '\n';
        }
        std::rotate(primes.begin(), primes.begin() + 1, primes.end());
    }

    cout << terms[0] / 4 << ' ';
    for (int i = 1; i < terms.size(); i++)
        cout << terms[i] / (i + 1) << ' ';
}

            long sum = 0, i2 = i*i;
            for (auto j = a; j >= 1; j--)
            {
                long temp = i * i / j + 1l;
                if (temp < c)
                    sum = (sum + (c - temp)) % M;
                else
                    break;
            }

            long sum = 0, j = a, i2 = i*i, temp = (i2 / j + 1l);
            while (temp < c && j>0)
            {
                sum = (sum + (c - temp)) % M;
                j--;
                temp = i2 / j + 1l;
            }
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main()
{
    short fibo[] = {0, 1, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3};

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        int count = 0;
        while (n /= 2)
            count++;
        cout << fibo[count] << '\n';
    }
}
#include <iostream>
#include <map>

using std::cin;
using std::cout;

int main()
{
    short t;
    cin >> t;
    while (t--)
    {
        std::map<int, int> val;
        long N, k;
        unsigned long long ans = 1;
        cin >> N >> k;
        for (auto i = 0; i < N; i++)
        {
            long temp;
            cin >> temp;
            if (val.count(temp))
                val[temp]++;
            else
                val.insert({temp, 1});
        }
        
        if(k>N)
        {
            cout<<0<<'\n';
            continue;
        }
        
        auto itr = val.begin();
        while (k - (*itr).second > 0)
        {
            k = k - (*itr).second;
            itr++;
        }
        auto n = (*itr).second;
        if (k > n / 2)
            k = n - k;
        if (k == 0)
            cout << 1 <<'\n';
        else
        {
            for (auto i = n; i > (n - k); i--)
                ans = ans * i / (n-i+1);
            cout << ans << '\n';
        }
    }
}
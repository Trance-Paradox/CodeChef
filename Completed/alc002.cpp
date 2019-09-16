#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main()
{
    short t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        long n, k, temp;
        std::cin >> n >> k;
        std::vector<long> arr(n);

        for (auto &v : arr)
        {
            std::cin >> temp;
            v = temp;
        }
        if(k==2)
        {
            long sum = std::accumulate(arr.begin(), arr.end(), 0l);
            arr.clear();
            arr.push_back(sum);
        }
        else do
        {
            std::vector<long> ksum;
            auto ptr = arr.begin();
            
            for (; ptr <= (arr.end() - k); ptr += k)
                ksum.push_back(std::accumulate(ptr, ptr + k, 0l));

            ksum.insert(ksum.end(), ptr, arr.end());

            arr.swap(ksum);

        } while (arr.size() >= k);
        for (const auto &v : arr)
            std::cout << v << ' ';
        std::cout << '\n';
    }
}
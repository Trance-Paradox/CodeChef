#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
#include <functional>

#define v vector

using namespace std;

int toint(const char c) { return c - '0'; }

int MaximalSquare(v<string> arr)
{
    set<v<int>, greater<v<int>>> ls;

    v<int> row(arr[0].length());

    for (auto &i : arr)
    {
        transform(begin(i), end(i),
                  begin(row), toint);

        ls.insert(row);
    }

    vector<vector<int>> mat(ls.begin(), ls.end());

    v<int> z(arr[0].length(), 0);

    for (int c = 0; c < mat.size(); c++)
    {
        for (int r = c + 1; r < mat.size(); r++)
        {
            v<int> res(arr[0].length());

            cout << mat[r][c] << ' ' << mat[c][c]<<'\n';

            if (mat[r][c] == mat[c][c])
                transform(mat[r].begin(), mat[r].end(), mat[c].begin(), res.begin(), minus<int>());

            else if (mat[r][c] == -mat[c][c])
                transform(mat[r].begin(), mat[r].end(), mat[c].begin(), res.begin(), plus<int>());

            if (res != z)
                mat[r].swap(res);
        }
    }

    ls.clear();

    for (auto &i : mat)
    {
        for (auto &j : i)
            cout << j;

        cout << '\n';
    }

    return ls.size() * ls.size();
}

int main()
{
    string S;

    v<string> A = {"0111", "1101", "0111"};

    cout << MaximalSquare(A);
}
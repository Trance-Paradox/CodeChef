#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string arr;
    getline(cin, arr);
    long n;
    cin>>n;
    vector<long> ans(n);
    auto its = ans.begin();
    cout << arr;

}


/*  vector<long> ans(n);
    copy(ans.begin(), ans.end(),   std::ostream_iterator<long>(std::cout, " "));
    copy(istream_iterator<long>(cin), istream_iterator<long>(), back_inserter(ans));
    copy(ans.begin(), ans.end(),   std::ostream_iterator<long>(std::cout, " "));
*/
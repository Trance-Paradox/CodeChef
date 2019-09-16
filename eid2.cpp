#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    short T;
    cin>>T;
    short t=T;
    vector<short> ans;
    while(T--)
    {
        short temp;
        map<short, short> age;
        map<short, short> sum;
        vector<short> sage;
        vector<short> ssum;
        for(short i=0; i<3; i++)
        {
            cin>>temp;
            age.insert({temp,i});
        }
        for(short i=0; i<3; i++)
        {
            cin>>temp;
            sum.insert({temp,i});
        }
        
        for(const auto i : age)
	        sage.push_back(i.second);
        for(const auto i : sum)
	        ssum.push_back(i.second);

        if(ssum == sage)    ans.push_back(1);
        else    ans.push_back(0);
    }
    for(const auto i : ans)
    {
        if(i)
            cout<<"FAIR"<<'\n';
        else
            cout<<"NOT FAIR"<<'\n';
    }
    return 0;
}
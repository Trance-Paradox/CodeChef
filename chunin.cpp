    #include <iostream>
    #include <vector>
    #include <bits/stdc++.h> 

    using namespace std;

    int main()
    {
        short t;
        cin>>t;
        short T=t;
        int ans[t][2];
        
        while(t--)
        {
            long n;
            cin >> n;
            vector<long> pos;
            vector<long> neg;
            long temp, zero=0;

            for (int i=0; i<n; i++)
            {
                cin >> temp;
                if(temp>0)
                    pos.push_back(temp);
                else if(temp<0)
                    neg.push_back(temp);
                else
                    zero ++;
            }

            long sum_p = accumulate(pos.begin(), pos.end(), 0);
            long sum_n = accumulate(neg.begin(), neg.end(), 0);
            long max;
            if(sum_p > sum_n)
                max = pos.size() + zero;
            else if(sum_p < sum_n)
                max = neg.size() + zero;
            else if (sum_p == sum_n)
                max = zero + (pos.size() >= neg.size()) ? pos.size() : neg.size() ;
            ans[t][0] = max;
            ans[t][1] = (max == n) ? max : (n-max);
        }

        for(int i=T-1; i>=0; i--)
            cout << ans[i][0] << " " << ans[i][1] << endl;
    }
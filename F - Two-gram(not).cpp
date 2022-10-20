#include <bits/stdc++.h>

using namespace std;
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
const ll INF = 1e9 + 7;


int main() {
#ifdef onlineJudige
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string , int> mp;
    for(int i=0;i<n-1;i++)
    {
        string s1="";
        if(i==0)
        {
            //s1=s[i]+s[i+1];
            s1+=s[i];
            s1+=s[i+1];
            auto it=mp.find(s1);
            if(it==mp.end())
            {
                mp.insert({s1,1});
            }
            else
            {
                it->second=(it->second)+1;
            }
        }
        else if(i==n-1)
        {
            s1+=s[i-1];
            s1+=s[i];
            auto it=mp.find(s1);
            if(it==mp.end())
            {
                mp.insert({s1,1});
            }
            else
            {
                it->second=(it->second)+1;
            }
        }
        else
        {
            s1+=s[i];
            s1+=s[i+1];
            auto it=mp.find(s1);
            if(it==mp.end())
            {
                mp.insert({s1,1 });
            }
            else
            {
                it->second=(it->second)+1;
            }
        }
    }
    auto pr = std::max_element(mp.begin(), mp.end(), [](const auto &x, const auto &y) {
        return x.second < y.second;
    });
    cout<<pr->first<<endl;




};

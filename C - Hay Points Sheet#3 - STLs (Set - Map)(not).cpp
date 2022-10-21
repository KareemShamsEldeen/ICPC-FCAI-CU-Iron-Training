#include <bits/stdc++.h>

using namespace std;
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
const ll INF = 1e9 + 7;


int main() {
#ifdef onlineJudige
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


    ll n,m;
    cin>>n>>m;
    map<string , ll>mp;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        string s1;
        ll d;
        cin>>s1>>d;
        mp.insert({s1,d});
    }

    for(int j=0;j<m;j++)
    {
        string s1="";
        while(s1!=".")
        {
            cin>>s1;
            auto it = mp.find(s1);
            if(it != mp.end())
            {
                sum+=it->second;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }



};

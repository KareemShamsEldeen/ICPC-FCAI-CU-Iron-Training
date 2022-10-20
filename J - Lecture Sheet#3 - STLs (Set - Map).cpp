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

int n,m;
cin>>n>>m;
map<string,string> mp;
for(int i=0;i<m;i++)
{
    string s1;
    string s2;
    cin>>s1>>s2;
    mp.insert({s1,s2});
}
for(int i=0;i<n;i++)
{
    string s1;
    cin>>s1;
    auto it=mp.find(s1);
    if(it!=mp.end())
    {
        if((it->first).size()>(it->second).size())
        {
            cout<<it->second<<" ";
        }
        else if((it->first).size()<(it->second).size())
        {
            cout<<it->first<<" ";
        }
        else
        {
            cout<<it->first<<" ";
        }
    }


}
    cout<<endl;

}

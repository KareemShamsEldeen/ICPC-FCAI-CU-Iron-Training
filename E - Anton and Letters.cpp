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

    string s;
    set<char> s1;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='{' && s[i]!=' '&&s[i]!=',' && s[i]!='}')
        {
            if(s1.find(s[i])==s1.end()||!s1.empty())
            {
                s1.insert(s[i]);
            }
        }
    }
    cout<<s1.size()<<endl;



}

#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<cctype>
#include<cstring>
#include<map>
#include<unordered_map>
#include<set>
#include<climits>
#include<iomanip>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;


int main()
{
    vector<ll> v1;
    ll maxx=0;
    ll maxxx=0;
    ll n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            ll x;
            cin>>x;
            if(x>maxx){maxx=x;}
            v1.push_back(x);
            maxxx=maxx;
        }
        else if(t==2)
        {
            int pop1=v1.back();
            v1.pop_back();
            if(pop1==maxx){maxx=maxxx;}
        }
        else if(t==3)
        {
            cout<<maxx<<endl;
        }
    }
    return 0;
}

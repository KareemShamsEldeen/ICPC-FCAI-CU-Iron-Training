#include <bits/stdc++.h>
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
#include<deque>
#include<stack>
#include <iostream>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

int main() {
    ll n,q;
    cin>>n>>q;
    ll n1=n;
   ll q1=q;
    vector<ll> v1(n+1);
    vector<ll> v2(n+1);

for(ll i=0;i<n;i++)
{
    ll a;
    cin>>a;
    v1[i]=a;
}

    while(q1--)
    {
        ll t;
        cin>>t;
        ll i=0;
        for(i;i<n;i++)
        {
            if(t==v1[i])
            {
                cout<<i+1<<endl;
                break;
            }
        }
        v2[0]=v1[i];
        for(ll j=0, k=1;j<n;j++,k++)
        {
            if(j!=i)
            {
                v2[k]=v1[j];
            }
            else
            {
                k--;
            }
        }
//        for(int x=0;x<n;x++)
//        {
//            v1[x]=v2[x];
//        }
            v1=v2;
    }


    return 0;
}

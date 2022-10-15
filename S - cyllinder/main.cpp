#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
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
#include <iostream>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

int main() {

    ll q;
    cin>>q;
    queue<pair <ll,ll>> dq;
    while(q--)
    {
        ll n;
        cin>>n;

        if(n==1)
        {
            ll x,c;
            cin>>x>>c;

            pair <ll,ll> pair1;
            pair1=make_pair(c, x);
            dq.push(pair1);
        }
        else if(n==2)
        {
            ll c,a,sum=0;
            cin>>c;
            while(!dq.empty())
            {
                auto &u = dq.front();
                if (u.first >= c) {
                    u.first -= c;
                    sum += c * u.second;
                    if (!u.first)
                        dq.pop();
                    break;
                }
                else {//u.first < c
                    sum += u.first * u.second;
                    c -= u.first;
                    dq.pop();
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}

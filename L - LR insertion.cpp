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

    ll n;
    cin>>n;
    string s;
    cin>>s;
    deque<ll> q;
    q.push_back(n);
    for (ll i = n-1; i >=0 ;i--)
    {
        if(s[i]=='R')
        {
            q.push_front(i);
        }
        else
        {
            q.push_back(i);
        }

    }

    for (ll i = 0; i <=n; i++) {
        cout<<q[i]<<' ';
    }
    cout<<endl;
    return 0;
}

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

    stack<ll> s1;
    stack<ll> mx;
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
            s1.push(x);
            if (mx.empty() or (!mx.empty() and mx.top() <= x)) {
                mx.push(x);
            }
        }
        else if(t==2)
        {
            int pop1=s1.top();
            s1.pop();
            if(pop1==mx.top()){mx.pop();}
        }
        else if(t==3)
        {
            cout<<mx.top()<<endl;
        }
    }
    return 0;
    
}

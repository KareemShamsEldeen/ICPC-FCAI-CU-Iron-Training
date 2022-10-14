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
    queue<ll> q;
    ll t;
    cin>>t;
    while (t--)
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        ll n;
        cin >> n;
        if(n==1)
        {
            ll m;
            cin>>m;
            q.push(m);
        }
        else if(n==2)
        {
            if(!(q.empty()))
            {
                q.pop();
            }
        }
        else if(n==3)
        {
            if(!(q.empty()))
            {
                cout<<q.front() << "\n";
            }
            else
            {
                cout<<"Empty!" << "\n";
            }
        }




    }


    return 0;
}

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

//deque<ll> reverse(deque<ll> q1)
//{
//    deque<ll> q2;
//    while(!q1.empty())
//    {
//        q2.push_front(q1.front());
//        q1.pop_front();
//    }
//    return q2;
//}
int main() {
    deque<ll> q;
    ll t;
    ll count=0;
    cin>>t;
    while (t--)
    {
        string n;
        cin >> n;
        if(n=="back")
        {
            if(count==0 || count %2==0)
            {
                if(!(q.empty()))
                {
                   cout<<q.back()<<endl;
                   q.pop_back();
                }
                else
                {
                    cout<<"No job for Ada?\n";

                }
            }
            else
            {
                 if(!(q.empty()))
                {
                   cout<<q.front()<<endl;
                   q.pop_front();
                }
                else
                {
                    cout<<"No job for Ada?\n";

                }

            }


        }
        else if(n=="front")
        {
            if(count==0 || count %2==0)
            {
                if(!(q.empty()))
                {
                   cout<<q.front()<<endl;
                   q.pop_front();
                }
                else
                {
                    cout<<"No job for Ada?\n";

                }
            }
            else
            {
                if(!(q.empty()))
                {
                   cout<<q.back()<<endl;
                   q.pop_back();
                }
                else
                {
                    cout<<"No job for Ada?\n";

                }
            }
        }
        else if(n=="reverse")
        {
            count++;
        }
        else if(n=="push_back")
        {
            if(count==0 || count %2==0)
            {
                ll num;
                cin>>num;
                q.push_back(num);
            }
            else
            {
                ll num;
                cin>>num;
                q.push_front(num);
            }
        }
        else if(n=="toFront")
        {
            if(count==0 || count %2==0)
            {
                ll num;
                cin>>num;
                q.push_front(num);
            }
            else
            {
                ll num;
                cin>>num;
                q.push_back(num);
            }
        }
    }


    return 0;
}

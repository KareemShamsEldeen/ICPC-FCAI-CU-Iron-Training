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
    deque<ll> q;
    ll n,a;
    cin>>n;
    cin>>a;
    q.push_back(a);
    if(n==1)
    {
        cout<<a<<endl;
        return 0;
    }
    ll n1=n-1;
    //cout<<"--1--"<<endl;
    while(n1)
    {
        //cout<<"--2--"<<endl;
        cin>>a;
        q.push_back(a);
        n1--;
        //cout<<"--3--"<<endl;
        if(n1==0)
        {
            //cout<<"--4--"<<endl;
            break;
        }
            //cout<<"--5--"<<endl;
        cin>>a;
        q.push_front(a);
        n1--;
            //cout<<"--6--"<<endl;
        if(n1==0)
        {
                //cout<<"--7--"<<endl;
            break;
        }
           //cout<<"--8--"<<endl;
    }
    //cout<<"--9--"<<endl;
    if(n%2==0)
    {
        reverse(q.begin(),q.end());
    }
    for(ll i=0;i<n;i++)
    {
        cout<<q[i]<<' ';
    }
    cout<<endl;
    return 0;
}

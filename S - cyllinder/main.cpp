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

            pair <ll,ll>pair1;
            pair1=make_pair(c, x);
            dq.push_back(pair1);
        }
        else if(n==2)
        {
            ll c,a,sum=0;
            cin>>c;
            if(!dq.empty())
            {
                    ll t=0;
                    for(ll i=0; i<c; i++)
                    {
                        if(dq[0].second==c)
                        {
                            sum=dq[0].second*dq[0].first;
                            break;
                        }
                        else if(dq[t].second>0 && dq[t].second<c)
                        {
                            //dq[t].second-=1;
                            sum+=dq[t].first*dq[0].second;
                            c=c-dq[0].second;
                            dq.pop_front();

                        }
                        else if(dq[t].second>0 && dq[t].second>c)
                        {
                            //dq[t].second-=1;
                            sum+=dq[t].first*c;
                            dq[0].second=dq[0].second-c;
                            c=0;
                            break;

                        }
                        else if(dq[t].second==0)
                        {
                            dq.pop_front();
//                          dq[t].second-=1;
//                          sum+=dq[t].first;
                        }
                    }
            }

            cout<<sum<<endl;
        }
    }
    return 0;
}

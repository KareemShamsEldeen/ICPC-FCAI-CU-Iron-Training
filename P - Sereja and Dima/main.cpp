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
    int s;
    cin>>s;
    deque<int> q;

    for(int i=0;i<s;i++)
    {
        int n;
        cin>>n;
        q.push_back(n);
    }

    int sum1=0,sum2=0;

    while(!q.empty())
    {
        int m1=max(q.front(),q.back());
        sum1+=m1;
        if(m1==q.front())
        {
            q.pop_front();
            if(q.empty()){break;}
        }
        if(m1==q.back())
        {
            q.pop_back();
            if(q.empty()){break;}
        }
        int m2=max(q.front(),q.back());
        sum2+=m2;
        if(m2==q.front())
        {
            q.pop_front();
            if(q.empty()){break;}
        }
        if(m2==q.back())
        {
            q.pop_back();
            if(q.empty()){break;}
        }

    }
    cout<<sum1<<" "<<sum2<<endl;

    return 0;
}

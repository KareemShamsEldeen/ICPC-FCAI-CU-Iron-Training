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

int RB(string b)
{
    stack<char> s1;
    bool x=true;
    int counter=0;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='(')
        {
            s1.push(b[i]);
        }
        else if(b[i]==')')
        {
            if(!s1.empty())
            {
                s1.pop();
            }
            else
            {
                counter++;
            }
        }
    }

    return counter;
}

int main()
{
    int t;
    cin>>t;


    while(t--)
    {
        int moves=1;
        deque<char> q;
        int n;
        cin>>n;
        string b;
        cin>>b;
        cout<<RB(b)<<endl;
    }

    return 0;
}

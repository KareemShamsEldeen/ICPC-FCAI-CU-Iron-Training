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
    int sum=0;
    stack<char> s1;//()
    stack<char> s2;//[]
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
                sum+=1;
                s1.pop();
            }
            else{
                continue;
            }
        }
        else if(b[i]=='[')
        {
            s2.push(b[i]);
        }
        else if(b[i]==']')
        {
            if(!s2.empty())
            {
                sum+=1;
                s2.pop();
            }
            else{
                continue;
            }
        }
//        else if( s1.empty() || s2.empty())
//        {
//             continue;
//        }

    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string b;
        cin>>b;
        cout<<RB(b)<<endl;
    }

    return 0;
}

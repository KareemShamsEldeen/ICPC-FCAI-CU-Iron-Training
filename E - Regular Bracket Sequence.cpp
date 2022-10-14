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
    int sum=0;
    stack<char> s1;
    string b;
    cin>>b;

    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='(')
        {
            s1.push(b[i]);
        }
        if(b[i]==')' && !s1.empty())
        {
            if(s1.top()=='(' )
            {
                sum+=2;
                s1.pop();
            }
            else if(s1.empty())
            {
                continue;
            }
        }
        else
        {
             continue;
        }

    }
    cout<<sum<<endl;
    return 0;
}

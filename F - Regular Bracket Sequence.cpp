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

bool RB(string b)
{
    int sum=0;
    stack<char> s1;//()
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
            else{
                x=false;
                sum+=2;
                continue;

            }
        }
        else if(b[i]=='?')
        {
            counter++;
            continue;
        }
    }
    if(x==true && counter%2==0 )
    {
        return true;
    }
    else if(x==false && sum%2==0 && counter%2==0  && b[0]=='?' && b[b.size()-1]=='?')
    {
        return true;
    }
    else
    {
        return false;
    }


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool check=RB(s);
        if(check)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

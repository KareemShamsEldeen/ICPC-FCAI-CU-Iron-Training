#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i< s.size();i++)
    {
        if(s[i]=='A')
        {
            int l=0,r=0;
            for(int z=0;z<i;z++)
            {
                l += s[z]=='Q';
            }
            for(int z=i+1;z<s.size();z++)
            {
                r += s[z]=='Q';
            }
            ans+= (l*r);
        }
    }
    cout<<ans<<endl;
    return 0;
}

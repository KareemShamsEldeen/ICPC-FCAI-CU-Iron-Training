#include<bits/stdc++.h>
#include<string>
#include<cstring>
typedef long long int ll;
using namespace std;

int main()
{
    string s;
    char c1='A';
    char c2='B';
    cin>>s;
    if(s.size()<3)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=1;i<s.size();i+=2)
    {
        cout<<"1===="<<"//c1=="<<c1<<"//s[i-1]=="<<s[i]<<"//c2=="<<c2<<"///s[i]=="<<s[i+1]<<endl;
        if(c1==s[i-1]&&c2==s[i])
        {
            for(int z=i+1;z<s.size();z+=2)
            {
                cout<<"2===="<<"//c1=="<<c1<<"//s[z]=="<<s[z]<<"//c2=="<<c2<<"///s[z+1]=="<<s[z+1]<<endl;
                if(c1==s[z]&&c2==s[z+1])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }

        else if(c2==s[i]&&c1==s[i+1])
        {
            cout<<"3===="<<"//c2=="<<c2<<"//s[i]=="<<s[i]<<"//c1=="<<c1<<"///s[i+1]=="<<s[i+1]<<endl;
            for(int z=i+1;z<s.size();z+=2)
            {
                cout<<"4===="<<"//c1=="<<c1<<"//s[z]=="<<s[z]<<"//c2=="<<c2<<"///s[z+1]=="<<s[z+1]<<endl;
                if(c1==s[z]&&c2==s[z+1])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}



#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int x1=s.find("AB");
    int x2=s.find("BA",x1+2);
   int y1=s.find("BA");
   int y2=s.find("AB",y1+2);
   if((x1!=-1 && x2!=-1)  || (y1!=-1 && y2!=-1)){
    cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
    return 0;
}

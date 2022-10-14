#include <iostream>
#include<string>

using namespace std;
bool pali(string a)
{
    char* c=new char[a.size()];
    bool check=true;
    for(int i=0;i<a.size();i++)
    {
        c[i]=a[(a.size()-1)-i];
    }
    for(int i=0;i<a.size();i++)
    {
        if(c[i]!=a[i])
        {
            check=false;
            break;
        }
    }
     if (check)
         return true;
     else
        return false;
}

int main()
{
    int n;
    cin>>n;
    string str= to_string(n);
    if(pali(str))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        int count=0;
        for(int i=1;i<=str.size();i++)
        {
            if(str[i]=='0')
            {
                count++;
            }
        }
        for(int i=0;i<count;i++)
        {
            str='0'+str;
        }
        //cout<<"str="<<str<<endl;
        if(pali(str))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }


    }

    return 0;
}

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    string *arr=new string[n];
    int *arrc=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arrc[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        bool c=true;
        string s=arr[i];
        arrc[i]=1;
        for(int z=0; z<n; z++)
        {

            string s2;
            if(z!=i)
            {
                s2=arr[z];
            }
            if(s.length()==s2.length())
            {
                for(int j=0; j<s.length(); j++)
                {
                    char c1=s[j];
                    char c2=s2[j];
                    cout<<"c1="<<c1<<"///c2="<<c2<<endl;
                    for(int x=0; x<s.length(); x++)
                    {
                        if(s[x]==c1&&x!=j)
                        {
                            if(s2[x]!=c2)
                            {
                                c=false;
                                break;
                            }
                        }
                    }
                }
            }


        }
        if(c)
        {
            count++;
               cout<<count<<endl;
        }
    }
               cout<<count<<endl;

    return 0;
}

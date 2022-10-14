#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%3==0)
    {
        cout<<n/3<<endl;

    }
    else if(n<3)
    {
        cout<<0<<endl;
    }
    else
    {
        int count=0;
        while(n>=3)
        {
            count++;
            n-=3;
        }
         cout<<count<<endl;
    }

    return 0;
}

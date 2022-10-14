#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>=1000)
    {
        n=n-1000;
    }
    if(n>0)
    {
        cout<<1000-n;
    }
    else
    {
        cout<<n;
    }

    return 0;
}

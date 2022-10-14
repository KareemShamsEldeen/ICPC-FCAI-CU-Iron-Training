#include <iostream>

using namespace std;

int main()
{
    int n , r , i;
    cin>>n>>r;

    if(n<10)
    {
        int x= 100* (10-n);
        i=r+x;
        cout<<i;
    }
    else
    {
        cout<<r;
    }
    return 0;
}

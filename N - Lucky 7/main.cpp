#include <iostream>

using namespace std;

int main()
{
    int N,x;
    bool c=false;
    cin>>N;

    while(N!=0)
    {
        x=N%10;
        N=N/10;
        if(x==7)
        {
            c=true;
            break;
        }
    }
    if(c)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int s=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            int u=n-i*a-j*b;
            if(u<0 || u%c)
            {
                continue;
            }
            int k=(n-i*a-j*b)/c;
            s=max(s,i + j + k );

        }
    }
    cout<<s<<endl;


    return 0;
}

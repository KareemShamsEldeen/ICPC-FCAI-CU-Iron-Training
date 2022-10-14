#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;


    for(int i=0;i<=N;i++)
    {
        int j=0;
        for(j;j<N;j++)
        {
            if(i*j==N)
            {
                cout<<i<<" "<<j<<endl;
                break;
            }
            else
            {
                continue;
            }
        }
        if(i*j==N)
        {
            cout<<i<<" "<<j<<endl;
            break;
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    char A,B,C;
    cin>>A>>B>>C;

    if((A==B && B!=C)||(A==C && B!=C)||(B==C && B!=A))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
         cout<<"No"<<endl;
    }
    return 0;
}

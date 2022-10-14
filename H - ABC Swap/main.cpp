#include <iostream>

using namespace std;

int main()
{
    int A,B,C,X,Y,Z;
    cin>>X>>Y>>Z;
    A=Y;
    B=X;
    C=Z;

    int temp=A;
    A=C;
    C=temp;

    cout<<A<<" "<<B<<" "<<C;


    return 0;
}

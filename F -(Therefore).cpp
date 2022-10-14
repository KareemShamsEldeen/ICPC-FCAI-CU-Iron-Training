#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;



    if(n<10)
    {
        if(n == 2  || n == 4 || n == 5  || n == 7  || n == 9)
        {
            cout<<"hon";
        }
        else if( n == 0  || n == 1  || n == 6 || n == 8)
        {
            cout<<"pon";
        }
        else if(n == 3)
        {
            cout<<"bon";
        }
    }
    else
    {
        n=n%10;
        if(n == 2  || n == 4 || n == 5  || n == 7  || n == 9)
        {
            cout<<"hon";
        }
        else if( n == 0  || n == 1  || n == 6 || n == 8)
        {
            cout<<"pon";
        }
        else if(n == 3)
        {
            cout<<"bon";
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x,w;

    int k=0;
    cin>>x>>w;
    int count=0;
    while(k<=x)
    {
        if(k>=x)
        {
            break;
        }

        k=k+w;
        if(k<=x)
        count++;

    }
    cout << count << endl;
    return 0;
}

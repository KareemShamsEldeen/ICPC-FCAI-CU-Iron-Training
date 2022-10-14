#include <iostream>

using namespace std;

int main()
{
    int N,M,counter=0;

    cin>>N>>M;

    int e=2;
    int o=1;

    int *arr=new int[N+M];

    int i=0;
    for(i;i<N;i++)
    {
        arr[i]=e;
        e=e+2;
    }

    for(i;i<(N+M);i++)
    {
        arr[i]=o;
        o=o+2;
    }



    for(int x=0;x<N+M;x++)
    {

        for(int z=x;z<N+M;z++)
        {

            if(arr[x]!=arr[z])
            {
                   // cout<<endl<<"arr[x]+arr[z]="<<arr[x]<<"+"<<arr[z]<<"="<<arr[x]+arr[z]<<endl;
                if((arr[x]+arr[z]) % 2 == 0)
                {
                    counter++;
                }
            }
        }
    }
   cout<<counter;

    return 0;
}

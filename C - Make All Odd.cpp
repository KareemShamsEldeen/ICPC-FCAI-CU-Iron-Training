#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int *codd=new int[N];
    for(int i=0;i<N;i++)
    {
        int size,count=0;
        bool c=true;
        cin>>size;
        int *arr=new int[size];

        for(int j=0;j<size;j++)
        {
            cin>>arr[j];
        }

        for(int z=0;z<size;z++)
        {
            if(arr[z] % 2 == 0 && arr[z+1] % 2 != 0 )
            {
                arr[z]=arr[z]+arr[z+1];
                count++;
            }
            else if(arr[z] % 2 != 0 && arr[z+1] % 2 == 0 )
            {
                arr[z+1]=arr[z+1]+arr[z];
                count++;
            }
            else if(arr[z] % 2 != 0 && arr[z+1] % 2 != 0 )
            {
                continue;
            }
            else if(arr[z] % 2 == 0 && arr[z+1] % 2 == 0 )
            {
                c=false;
            }
        }

        if(c)
        {
            codd[i]=count;
        }
        else
        {
            codd[i]=-1;
        }

        delete []arr;

    }

    for(int i=0;i<N;i++)
    {
        cout<<codd[i]<<endl;
    }
    return 0;
}

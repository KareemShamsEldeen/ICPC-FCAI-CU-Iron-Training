#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,d,num;
    cin>>t;
    num=t;
    while(t--)
    {
        bool check=false;
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

        for(int i=1;i<n;i++)
        {
            if(arr[i]+arr[i-1] <= d)
            {
                check=true;
                break;
            }
        }
        if(arr[n-1] <= d || check)
        {
           cout<<"YES"<<endl;;
        }
        else
        {
           cout<<"NO"<<endl;
        }
    }


    return 0;
}

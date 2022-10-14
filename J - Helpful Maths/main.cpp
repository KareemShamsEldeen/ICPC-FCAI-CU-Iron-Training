#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char* c=new char[s.size()];
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
            c[count]=s[i];
            count++;
        }
    }

    sort(c,count+c);


    for (int i = 0;i < count;i++)
	{
		if (i == count - 1)
		{
            cout << c[i] << endl;
		}
        else
        {
            cout << c[i] << "+";
        }

	}

    return 0;
}

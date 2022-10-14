// B. Decode String CF.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<cctype>
#include<cstring>
#include<map>
#include<unordered_map>
#include<set>
#include<climits>
#include<iomanip>
#include<queue>
#include<stack>
using namespace std;


int main()
{
	int q;
	cin >> q;
	while (q--)
	{
		int n,count=0;
		cin >> n;
		int* arr1 = new int[n];
		int* arr2 = new int[n];
		string s;
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			 arr1[i]=s[i]-48;
		}
		if (n == 3)
		{
			//cout << "1"<<endl;
			for (int i = 0; i < n; i++)
			{
				if (arr1[i + 2] == 0)
				{
					int t = (arr1[i] * 10) + arr1[i + 1];
					arr2[count] = t;
					i += 2;
					count++;

				}
			}

		}
		else
		{

		
			for (int i = 0; i < n; i++)
			{			 
				if (arr1[i] == 0 )
				{
					continue;
				}
				else if (arr1[i + 2] == 0 && arr1[i + 3] != 0 && n>3)
				{
					int t = (arr1[i] * 10) + arr1[i + 1];
					arr2[count] = t;
					i += 2;
					count++;
					//4
					//1100
				}
				else if (arr1[i + 2] == 0 && arr1[i + 3] != 0)
				{
					int t = (arr1[i] * 10) + arr1[i + 1];
					arr2[count] = t;
					i += 2;
					count++;
				}
				else if (arr1[i + 2] == 0 && n-i==3 && n >=4)
				{
					int t = (arr1[i] * 10) + arr1[i + 1];
					arr2[count] = t;
					i += 2;
					count++;

				}
				else if (arr1[i + 2] == 0 && arr1[i + 3] == 0)
				{
					arr2[count] = arr1[i];
					count++;
				}

				else
				{
					arr2[count] = arr1[i];
					count++;
				}
			}
		}
		for (int i = 0; i < count; i++)
		{
			char c = arr2[i]+96;
			cout << c;
		}
		cout << endl;

	}
}


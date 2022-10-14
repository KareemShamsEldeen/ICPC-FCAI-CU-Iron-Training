// A. Two Elevators CF.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
#include <iostream>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long  a, b, c ,dif1;
		//3 2 1=>3/1//////1 2 3=>1/(3-2)+c,3 1 2=>3/(2-1)+2

		cin >> a >> b >> c;
		dif1 = abs(c - b)+c;//
		//dif2 = abs(abs(b - c) - 1);//2-5=3=====3-1=2
		if (a < dif1)
		{
			cout << 1 << endl;
		}
		else if (a >  dif1)
		{
			cout << 2 << endl;
		}
		else if (a==dif1)
		{
			cout << 3 << endl;
		}
	}
	
}

/*
20
1 1 2
1 1 3
1 1 4
1 1 5
1 1 6
1 1 7
1 1 8
1 1 9
1 1 10
1 2 1
1 2 3
1 2 4
1 2 5
1 2 6
1 2 7
1 2 8
1 2 9
1 2 10
1 3 1
1 3 2
*/
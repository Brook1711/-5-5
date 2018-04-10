#include<iostream>
#include <cstdlib>
#include<string>
#include<stack>

using namespace std;

int main()
{
	bool T = true;
	string s = "";
	getline(cin, s);
	stack<char> lab;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(' )
		{
			lab.push(s[i]);
		}
		else if (s[i] == ')')
		{
			if (lab.empty()|| lab.top() != '(')
				T = false;
			else
			{
				lab.pop();
			}

		}
	}
	if (!lab.empty())
		T = false;
	if (T)
		cout << "OK";
	else
		cout << "Error";
	//system("pause");
	return 0;
}
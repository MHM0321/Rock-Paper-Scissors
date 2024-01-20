#include<iostream>
using namespace std;
int main()
{
	char a = '\0', b = '\0';
	cout << "Enter r for rock, p for paper and s for scissors" << endl;
	cin >> a >> b;
	switch (a)
	{
	case 'r':
		if (b == 'p')
		{
			cout << "P2 wins !!!" << endl;
		}
		else if (b == 's')
		{
			cout << "P1 wins !!!" << endl;
		}
		else if (b == 'r')
		{
			cout << "Its a draw !" << endl;
		}
		else
		{
			cout << "Please choose from r,p or s" << endl;
		}
		break;
	case 'p':
		if (b == 'p')
		{
			cout << "Its a draw !" << endl;
		}
		else if (b == 's')
		{
			cout << "P2 wins !!!" << endl;
		}
		else if (b == 'r')
		{
			cout << "P1 wins !!!" << endl;
		}
		else
		{
			cout << "Please choose from r,p or s" << endl;
		}
		break;
	case 's':
		if (b == 'p')
		{
			cout << "P1 wins !!!" << endl;
		}
		else if (b == 's')
		{
			cout << "Its a draw !" << endl;
		}
		else if (b == 'r')
		{
			cout << "P2 wins !!!" << endl;
		}
		else
		{
			cout << "Please choose from r,p or s" << endl;
		}
		break;
	}
	system("pause");
	return 0;
}
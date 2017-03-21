#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	if (int(x) - x == 0)
	switch (int(x))
	{
		case 0 :
			cout << "black" << endl;
			break;
		case 1 :
			cout << "blue" << endl;
			break;
		case 2 :
			cout << "green" << endl;
			break;
		case 3 :
			cout << "cyan" << endl;
			break;
		case 4 :
			cout << "red" << endl;
			break;
		case 5 :
			cout << "magenta" << endl;
			break;
		case 6 :
			cout << "brown" << endl;
			break;
		case 7 :
			cout << "lightgray" << endl;
			break;
		case 8 :
			cout << "darkgray" << endl;
			break;
		case 9 :
			cout << "lightblue" << endl;
			break;
		case 10 :
			cout << "lightgreen" << endl;
			break;
		case 11 :
			cout << "lightcyan" << endl;
			break;
		case 12 :
			cout << "lightred" << endl;
			break;
		case 13 :
			cout << "lightmagenta" << endl;
			break;
		case 14 :
			cout << "yellow" << endl;
			break;
		case 15 :
			cout << "white" << endl;
			break;
	}
	return 0;
}

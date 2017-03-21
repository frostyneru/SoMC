#include <iostream>
using namespace std;
int main()
{
	float x,y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	if ((x*x+y*y) <=4)
		cout << true << endl;
	else
		cout << false << endl;
  	return 0;
}

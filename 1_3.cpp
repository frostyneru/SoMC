#include <iostream>
using namespace std;
int main()
{
	float x,y;
	bool k;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y; 
	k=(x<=0)&&(x>=-7)&&(y<=-2)&&(y>=-4);
	cout << k << endl;
}

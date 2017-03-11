#include <iostream>
using namespace std;
int main()
{
	float x,y,z,s;
     int i;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;
     cout << "x = " << x << " y = " << y << " z = " << z << "\v";
	s=(x+y+z)*(x+y+z);
	cout << "Answer : \v";
     cout << "S = " << s << "\v";
     for (i=0; i<12; i++)
          cout << "\b";
     cout << "********************" << endl;
}

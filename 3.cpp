#include <iostream>
using namespace std;
float g(float a, float b)
{
	float k;
	k=(a*a+b*b)/(a*a+2*a*b+3*b*b+4);
	return k;
}
int main()
{
	float s,t;
	cout << "s = ";
	cin >> s;
	cout << "t = ";
	cin >> t;
	cout << "g(1.2,s)+g(t,s)+g(2*s-1,s*t) = " << g(1.2,s)+g(t,s)+g(2*s-1,s*t) << endl;
}

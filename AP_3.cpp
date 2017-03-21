#include <iostream>
using namespace std;
float max2(float m, float n)
{
	return(m*n+m*m+n*n);
}
float max3(float m, float n, float k)
{
	return(m*n+m*n+n*k+m*m+n*n+k*k);
}
int main()
{
	float a,b,c,k;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	max2(a,a+b);
	k=(max2(a,a+b)+max3(a,b+c,a+b))/(1+max2(a*b,b*c)+max3(a+b*c,15,a*c));
	cout << k << endl;
	return 0;
}

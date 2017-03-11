#include <iostream>
using namespace std;
int main()
{
	int k = 0,m = 0,n = 0, l = 0 , z = 0;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m; 
     //l=n;
     //z=m;
     //cout << n << endl;
     //cout << m << endl;
	k=--n-m++;
     n++;
     m--;
	cout << "k = " << k << endl;
	m++<n-- ? (cout << "m++<n-- : true" << endl) : (cout << "m++<n-- : false" << endl);
     m--;
     n++;
     m++>n-- ? (cout << "m++>n-- : true" << endl) : (cout << "m++>n-- : false" << endl);
}

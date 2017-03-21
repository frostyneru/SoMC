#include <iostream>
using namespace std;
int main()
{
	int k,m,n;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m; 
	k=++m+--n;
	m--;
	n++;
	m++<n ? (cout << "m++<n : true" << endl) : (cout << "m++<n : false" << endl);
	m--;
	m++>n ? (cout << "m++>n : true" << endl) : (cout << "m++>n : false" << endl);
	return 0;
}

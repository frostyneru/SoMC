#include <iostream>
using namespace std;
int main()
{
	const unsigned int n = 1;
	const unsigned int m = 3;
	int a[m][n],b[m][m],c[m][n],i,j,l;
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	cout << endl;

	for (i=0; i<m; i++)
		for (j=0; j<m; j++)
		{
			cout << "b[" << i << "][" << j << "] = ";
			cin >> b[i][j];
		}
	cout << endl;

	cout << "a :" << endl;
	for (i=0; i<m; i++)
     	{
		for (j=0; j<n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
     	}
	cout << endl;

	cout << "b :" << endl;
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}

	for (i=0; i<m; i++) 
		for (j=0; j<n; j++)
			c[i][j]=0;

	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			for (l=0; l<m; l++)
				c[i][j]=c[i][j]+b[i][l]*a[l][j];

	cout << endl;
	cout << "c :" << endl;
	
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
struct Table
{
	int o,p;  //Количество строк,столбцов;
        int **k;
        int *n;
};
Table g(Table l)
     {
	int i;
        int **d = new int* [l.o];
	for (i=0; i<l.o; i++)
        d[i] = new int [l.p];
        l.k = d; 
        return(l);
     }
Table z(Table l)
{
     	for (int i=0; i<l.o; i++)
		for (int j=0; j<l.p; j++)
		{
               		l.k[i][j]=rand() % 100 +1;
		}
     	return(l);
}
Table sm(Table l,int a , int b)
{
     	int * d = new int [l.o];
     	l.n = d;
     	for (int i=0; i<l.o; i++)
	{
		for (int j=0; j<l.p; j++)
			if (l.k[i][j]>=a && l.k[i][j] <=b)
                		l.n[i]=l.n[i]+1;
	}
     	return (l);
}
int main()
{
	int i,j,a,b;
     	Table tb;
	cout << "x = ";
	cin >> tb.o;
     	cout << "y = ";
     	cin >> tb.p;
     	a = rand() % 100 + 1;
     	b = rand () % 100 + 1;
     	cout << a << endl;
     	cout << b << endl;
	cout << endl;
     	tb=g(tb);
     	tb=z(tb);
     	tb=sm(tb,a,b);
	for (i=0; i<tb.o; i++)
	{
		for (j=0; j<tb.p; j++)
			cout << tb.k[i][j] << " ";
		cout << " Z = " << tb.n[i] << endl;
	}
	cout << endl;
	return 0;
}

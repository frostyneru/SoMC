#include <iostream>
using namespace std;
struct Table
{
	int o,p;	//Количество строк,столбцов;
        int **k;	//Двумерный массив данных
	int *n;		//Одномерный массив для подсчета произведения элементов каждой строки сумма индексов которых нечетна
};
Table g(Table l)
{
	int i;
        int **d = new int* [l.o];
	for (i=0; i<l.o; i++)
        d[i] = new int [l.p];
        l.k = d; 
	for (int i=0; i<l.o; i++)
		for (int j=0; j<l.p; j++)
		{
               		l.k[i][j]=rand() % 100 +1;
		}
	return(l);
}
Table s(Table l)
{
	int * d = new int [l.o];
     	l.n = d;
	for (int i=0; i<l.o; i++)
		l.n[i]=1;
     	for (int i=0; i<l.o; i++)
	{
		for (int j=0; j<l.p; j++)
			if ((i+j) %2 != 0)
                		l.n[i]=l.n[i]*l.k[i][j];
	}
	return(l);
}
int main()
{
	//int i,j,a,b;
	Table tb;
	cout << "x = ";
	cin >> tb.o;
     	cout << "y = ";
	cin >> tb.p;
	tb=g(tb);	//Задание двумерного массива, его инициализация случайными элементами;
	tb=s(tb);	//Задание и инициализация одномерного массива, подсчет задачи;
	for (int i=0; i<tb.o; i++)
	{
		for (int j=0; j<tb.p; j++)
			cout << tb.k[i][j] << " ";
		cout << " Z = " << tb.n[i] << endl;
	}
	return 0;
}

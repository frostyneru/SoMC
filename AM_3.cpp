#include <iostream>
using namespace std;
int main()
{
	int const m = 15;		//Количество элементов в массиве;
	int a[m]; 			//a[m] - массив из m элементов; 
	int i = 0,k = 0,l = 0, max = 0;	//i - для счетчика, k - позиция максимального элемента, l - позиция первого положительного элемента; max - макс. элемент;

	for (i=0; i<m; i++)
	{
		cout << "Введите " << i+1 << " элемент ";
		cin >> a[i];		// Считывание элемента;
		if (k==0) 		// Если положение максимального элемента = 0, то объявляем первый элемент максимальным
		{
			k=i;
			max=a[i];
		}
		else if (k !=0 && a[i]>max)	// Если положение максимального элемента !=0, то проверяем больше ли он уже внесенного в переменную max;
		{
			k=i;
			max=a[i];
		}
		if (l==0 && a[i]>0)		//Если положение первого положительного элемента = 0, то вносим первое число > 0;
		{	
			cout << "true" << endl;
			l=i;
		}
	}
	a[k]=a[l];	// Максимальный заменяем на первый положительный;
	a[l]=max;	// Первый положительный заменяем на максимальный;
	for (i=0; i<m; i++)
		cout << "a[" << i << "] = " << a[i] << endl;	// Выводим измененный массив;
	return 0;
}

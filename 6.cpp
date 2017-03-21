#include <iostream>
#include <cstring>
#include <math.h>
#include <iomanip>
#include "f_n1.h"
#include "f_n2.h"
#include "f_m1.h"
using namespace std;
int main ()
{
	double a=0;
	int i;
	const int max_len(256);
	bool min=0;
	char pr[max_len], *p, *l, ch;
	cout << "Введите 16-ричное число : ";
	cin.getline(pr,max_len);
	ch='.';
	p=strchr(pr,ch);
	ch='-';
	l=strchr(pr,ch);
	if (pr[0] == '-')
		min=true;
	if (p-pr+1 != 0 && p-pr+1 < 256)
		{		
			a=a+function_n1(pr,p); //Целая часть числа если есть точка
			a=a+function_n2(pr,p-pr+1);	//Дробная часть числа если есть точка
		}
	else if (p-pr+1 > 256)
		a=a+function_m1(pr); //Целая часть числа если нет точки
	if (min==1)
		cout << '-' << setprecision(15) << a << endl;
	if (min==0)
		cout << setprecision(15) << a << endl;
  	return 0;
}

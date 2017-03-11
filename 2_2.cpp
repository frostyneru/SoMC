#include <iostream>
using namespace std;
int main()
{
	int a,i,s;
	s=0;
	do {
		cout << "a = ";
		cin >> a;
		i++;
		if (i % 2 != 0) {
			s=s+a;
		}
	} while (a!=0);
	cout << "Сумма нечетных элементов последовательности = " << s << endl;
}

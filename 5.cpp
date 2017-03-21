#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	float a;
	int i = 0,j = 0;
     	cout << "Введите количество чисел : ";
     	cin >> j;
     	float *d = new float [j];
	ofstream fout("F.txt", ios_base::trunc);
	while (i < j) 
	{
         	cin >> d[i];
		fout << d[i] << endl;
          	i+=1;
	}	
	fout.close();
	ofstream out("G.txt", ios_base::trunc);
	ifstream fin("F.txt", ios_base::in);
     	a=d[0];
     	d[0]=d[j-1];
     	d[j-1]=a;
     	i=0;
	while (i < j)
	{
		out << d[i] << endl;
          	i+=1;
	} 
	fin.close();
	out.close();
	return 0;
}

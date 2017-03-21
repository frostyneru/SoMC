#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout("F.txt", ios_base::trunc);
	fout << "1.5" << endl;
	fout << "123213.123123" << endl;
	fout << "3.14" << endl;
	fout << "2.71" << endl;
	fout.close();
	ifstream fin("F.txt", ios_base::in | ios_base::ate);
	float a,b,c;
	string str;
	const int N=1;
	int i;
     	i = fin.tellg(); // текущая позиция курсора
     	if (i == 0) cout << "File empty!\n"; // если файл пуст
     	else
     	{
        	char ch;
        	int flag = 0;
        	while (true) // находим начало последней строки
        	{
             		fin.seekg(-1, ios::cur); // курсор на одну позицию назад от текущей
             		i = fin.tellg(); // текущая позиция курсора
             		if (i == 0) break; // если дошли до начала файла, то строка одна
             		ch = fin.peek();  // читаем символ в позиции курсора         
             		if (ch == '\n' && flag != 0) // (для Mac OS: ch == '\r') если  символ новой строки
                                         // и он не последний символ в файле
             		{
                 		fin.seekg(N, ios::cur); // на начало последней строки
                 	break;
             		}
             	flag = 1;
          	}
          string str;
          getline(fin, str); // читаем последнюю строку
          cout << str << endl;
      	}
	return 0;
}

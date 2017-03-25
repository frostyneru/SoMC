#include <fstream>
#include <cstring>
#include <sys/stat.h>
using namespace std;
int main()
{
	int result = mkdir("/home/ivan/Рабочий стол/folder/",0777);
	int n=10;
	char ch [10];
	for (int i=0; i<n; i++)
	{

		char str[50]="/home/ivan/Рабочий стол/folder/";
		sprintf(ch, "%d", i+1);
		strcat(str,ch);
		strcat(str,".txt");

		fstream file(str, ios::out | ios::app);
		file << i+1 << endl;
		file.close();
	}
	return 0;
}

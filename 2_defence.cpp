#include <iostream>
using namespace std;
int main()
{
     char s[5]="\"1234";
     for (int i=0; i<5; i++)
     if ( (s[i]=='"'))
     cout << i << " ";
     cout << endl;
     for (int i=0; i<5; i++)
     cout << s[i] << endl;
     return 0;
}

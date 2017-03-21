#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float x;
	cin >> x;
	cout << "You enter:          Answer:\r\v         x = " << x << "           ln(" << x << ") = " << setprecision(3) << log(x) << "\v\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b log(" << x << ") = " << setprecision(4) << log10(x) << endl;
	return 0;
}

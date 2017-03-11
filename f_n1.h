double function_n1(char st[256], char *k)
{
	int i;
	float b;
	for (i=0; i<(k-st); i++)	//Целая часть числа
		switch(st[i])
		{
			case 'F': 
					b=b+15*exp(log(16)*(k-st-1-i));
					//cout << a << endl;
					break;
			case 'f': 
					b=b+15*exp(log(16)*(k-st-1-i));
					//cout << a << endl;
					break;
			case 'E': 
					b=b+14*exp(log(16)*(k-st-1-i));
					break;
			case 'e': 
					b=b+14*exp(log(16)*(k-st-1-i));
					break;
			case 'D': 
					b=b+13*exp(log(16)*(k-st-1-i));
					break;
			case 'd': 
					b=b+13*exp(log(16)*(k-st-1-i));
					break;
			case 'C': 
					b=b+12*exp(log(16)*(k-st-1-i));
					break;
			case 'c': 
					b=b+12*exp(log(16)*(k-st-1-i));
					break;
			case 'B': 
					b=b+11*exp(log(16)*(k-st-1-i));
					//cout << (p-pr-1-i) << endl;
					break;
			case 'b': 
					b=b+11*exp(log(16)*(k-st-1-i));
					//cout << (p-pr-1-i) << endl;
					break;
			case 'A': 
					b=b+10*exp(log(16)*(k-st-1-i));
					break;
			case 'a': 
					b=b+10*exp(log(16)*(k-st-1-i));
					break;
			case '9': 
					b=b+9*exp(log(16)*(k-st-1-i));
					break;
			case '8': 
					b=b+8*exp(log(16)*(k-st-1-i));
					break;
			case '7': 
					b=b+7*exp(log(16)*(k-st-1-i));
					break;
			case '6': 
					b=b+6*exp(log(16)*(k-st-1-i));
					break;
			case '5': 
					b=b+5*exp(log(16)*(k-st-1-i));
					break;
			case '4': 
					b=b+4*exp(log(16)*(k-st-1-i));
					break;
			case '3': 
					b=b+3*exp(log(16)*(k-st-1-i));
					break;
			case '2': 
					b=b+2*exp(log(16)*(k-st-1-i));
					break;
			case '1': 
					b=b+1*exp(log(16)*(k-st-1-i));
					break;
		}
		return(b);
}

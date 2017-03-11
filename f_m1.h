double function_m1(char st[256])
{
	int i;
	float b;
	for (i=0; i<strlen(st); i++)	//Целая часть числа
		switch(st[i])
		{
			case 'F': 
					b=b+15*exp(log(16)*(strlen(st)-i-1));
					//cout << b << endl;
					break;
			case 'f': 
					b=b+15*exp(log(16)*(strlen(st)-i-1));
					//cout << a << endl;
					break;
			case 'E': 
					b=b+14*exp(log(16)*(strlen(st)-i-1));
					break;
			case 'e': 
					b=b+14*exp(log(16)*(strlen(st)-i-1));
					break;
			case 'D': 
					b=b+13*exp(log(16)*(strlen(st)-i-1));
					break;
			case 'd': 
					b=b+13*exp(log(16)*(strlen(st)-i-1));
					break;
			case 'C': 
					b=b+12*exp(log(16)*(strlen(st)-i-1));
					break;
			case 'c': 
					b=b+12*exp(log(16)*(strlen(st)-i-1));
					break;
			case 'B': 
					b=b+11*exp(log(16)*(strlen(st)-i-1));
					//cout << (p-pr-1-i) << endl;
					break;
			case 'b': 
					b=b+11*exp(log(16)*(strlen(st)-i-1));
					//cout << (p-pr-1-i) << endl;
					break;
			case 'A': 
					b=b+10*exp(log(16)*(strlen(st)-i-1));
					break;
			case 'a': 
					b=b+10*exp(log(16)*(strlen(st)-i-1));
					break;
			case '9': 
					b=b+9*exp(log(16)*(strlen(st)-i-1));
					break;
			case '8': 
					b=b+8*exp(log(16)*(strlen(st)-i-1));
					break;
			case '7': 
					b=b+7*exp(log(16)*(strlen(st)-i-1));
					break;
			case '6': 
					b=b+6*exp(log(16)*(strlen(st)-i-1));
					break;
			case '5': 
					b=b+5*exp(log(16)*(strlen(st)-i-1));
					break;
			case '4': 
					b=b+4*exp(log(16)*(strlen(st)-i-1));
					break;
			case '3': 
					b=b+3*exp(log(16)*(strlen(st)-i-1));
					break;
			case '2': 
					b=b+2*exp(log(16)*(strlen(st)-i-1));
					break;
			case '1': 
					b=b+1*exp(log(16)*(strlen(st)-i-1));
					break;
		}
		return(b);
}

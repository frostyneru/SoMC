#include <iostream>
using namespace std;
int main()
{
	struct dvd_player	//Запись в с++ (аналог record в pascal);
	{
		string brand_name;	//Название
		string model_name;	//Модель
		int price;		//Цена
	};
	int const n=5; //Количество записей;
	dvd_player player;
	int i = 0,sum = 0;	//sum - общая цена
	for (i=1; i<=n; i++)
	{
		player.price=0;
		cout << "Введите название фирмы : ";
		cin >> player.brand_name;
		cout << "Введите название модели : ";
		cin >> player.model_name;
		cout << "Введите цену модели : ";
		cin >> player.price;
		sum=sum+player.price;
	}
	cout << "Общая сумма = " << sum << endl;
	return 0;
}

//Applied Mathematics

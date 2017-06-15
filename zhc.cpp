////////////////////////////////////////////////////////////////////////////////
//Библиотеки
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
////////////////////////////////////////////////////////////////////////////////
//Константы
const int pr=3;	//Количество элементов в 1 молекуле
//const int 
////////////////////////////////////////////////////////////////////////////////
//Работа с списком
struct Node
{
	char cell;
	Node *Next, *Prev;
};
class List
{
	//Указатели на адреса начала списка и его конца
	Node *Head,*Tail, *cur;
	//Указатели на следующий и предыдущий элемент
	Node *Next,*Prev;		
	public:
	//Инициализируем адреса как пустые
	List():Head(NULL),Tail(NULL){};
	//Функции для работы с списком :

	//Добавление нового элемента 
	void Add();
	void Addfrt(char &k);
	//Вывод списка с начала
	void Show_Start();
	//Удаление последнего элемента
	void Delete_end();
	//Первая молекула
	void first(List &lst_1, List &lst_2);
	//Вторая часть
	void second(List &lst_1, List &lst_2);
};
class iterator : public List
{
	friend Node;
	public:
	iterator(){};
	iterator& operator++()
	{
		Node*temp;
		return *this;
	}
};
void List::Add(void)
{
	Node *temp=new Node; //Выделение памяти под новый элемент структуры
	temp->Next=NULL;  //Указываем, что изначально по следующему адресу пусто
	int ip=0;
	ip=rand()%4;
	switch(ip)
	{
		case 0:
		{
			temp->cell ='A';
			break;
		}
		case 1:
		{
			temp->cell ='G';
			break;
		}
		case 2:
		{
			temp->cell ='C';
			break;
		}
		case 3:
		{
			temp->cell ='U';
			break;
		}
	}
	if (Head!=NULL) //Если список не пуст
	{
		temp->Prev=Tail; //Указываем адрес на предыдущий элемент в соотв. поле
		Tail->Next=temp; //Указываем адрес следующего за хвостом элемента
		Tail=temp; //Меняем адрес хвоста
	}
	else 
	{
		temp->Prev=NULL; //Предыдущий элемент указывает в пустоту
		Head=Tail=temp; //Голова=Хвост=тот элемент, что сейчас добавили
	}
}
void List::Show_Start(void)
{	
	printf("%s\n","RNA : ");
	Node *temp=Tail;
	//ВЫВОДИМ СПИСОК С НАЧАЛА
	temp=Head; //Временно указываем на адрес первого элемента
	while (temp!=NULL) //Пока не встретим пустое значение
		{
			//Выводить значение на экран
			cout << temp->cell << " ";
			//Смена адреса на адрес следующего элемента
			temp=temp->Next; 
		}
	cout << endl;
}
void List::Delete_end(void)
{
	if (Head!=NULL)
	{
		if (Prev!=NULL)
		{
			Node *temp=Tail;
			Tail=Tail->Prev;
			Tail->Next=NULL;
			delete temp;
		}
		else if (Prev==NULL)
		{
			Head->Next=NULL;
			Head=NULL;
			delete Head;	
		}
	}
}		
void List::Addfrt(char &k)
{
	Node *temp=new Node; //Выделение памяти под новый элемент структуры
	temp->Next=NULL;  //Указываем, что изначально по следующему адресу пусто
	temp->cell =k;
	if (Head!=NULL) //Если список не пуст
	{
		temp->Prev=Tail; //Указываем адрес на предыдущий элемент в соотв. поле
		Tail->Next=temp; //Указываем адрес следующего за хвостом элемента
		Tail=temp; //Меняем адрес хвоста
	}
	else 
	{
		temp->Prev=NULL; //Предыдущий элемент указывает в пустоту
		Head=Tail=temp; //Голова=Хвост=тот элемент, что сейчас добавили
	}
}
void List::first(List &lst_1,List &lst_2)
{
	Node *temp=Tail;
	//ВЫВОДИМ СПИСОК С НАЧАЛА
	temp=Head;
	int zn=0;
	if (pr-pr%2*2==0)
	{
		while (zn!=pr%2) //Пока не встретим пустое значение
			{
				lst_1.Addfrt(temp->cell);
				//Смена адреса на адрес следующего элемента
				temp=temp->Next;
				zn++; 
			}
	}
	else
	{
		while (zn!=pr%2+1) //Пока не встретим пустое значение
			{
				lst_1.Addfrt(temp->cell);
				//Смена адреса на адрес следующего элемента
				temp=temp->Next;
				zn++; 
			}
	}
	while (zn!=pr)
	{
		lst_2.Addfrt(temp->cell);
		//Смена адреса на адрес следующего элемента
		temp=temp->Next;
		zn++;
	}
	lst_1.Show_Start();
	lst_2.Show_Start();
}
void List::second(List &lst_1,List &lst_2)
{
	Node *temp=Tail;
	//ВЫВОДИМ СПИСОК С НАЧАЛА
	temp=Head;
	int zn=0;
	while (zn!=pr%2) //Пока не встретим пустое значение
		{
			lst_1.Addfrt(temp->cell);
			//Смена адреса на адрес следующего элемента
			temp=temp->Next;
			zn++; 
		}
	while (zn!=pr)
	{
		lst_2.Addfrt(temp->cell);
		//Смена адреса на адрес следующего элемента
		temp=temp->Next;
		zn++;
	}
	lst_1.Show_Start();
	lst_2.Show_Start();
}
////////////////////////////////////////////////////////////////////////////////
//Заполение списка
void startRNA(List &lst)
{
	for (int i=0; i<pr; i++)
		lst.Add();
}
//Меню
void showmenu(void)
{
	cout << "Menu : " << endl;
	cout << "0) Exit " << endl;
	cout << "1) Add Item" << endl;
	cout << "2) Delete the last Item in RNA" << endl;
	cout << "3) Crossing-over RNA" << endl;
	cout << "4) Copy the RNA" << endl;
	cout << "5) Show RNA" << endl;
}
////////////////////////////////////////////////////////////////////////////////
//Основная функция
int main(int argc, char **argv)
{
	//Инициализацию генератора случайных чисел
	srand(time(NULL));
	//Количество
	//Создаем список
	List test_1,test_2;
	List* lst;
	//Работа с молекулой
	int kRNA=0;
	cout << "Enter the amount of RNA" << endl;
	cin >> kRNA;
	if (kRNA>1)
	{
		lst = new List [kRNA];
		showmenu();
		for (int i=0; i<kRNA; i++)
			startRNA(lst[i]);
		int mn=0;
		cin >> mn;
		while (mn!=0) 
		{
			switch(mn)
			{
				case 1:
				{
					int i=0;
					cout << "Enter the number of the RNA" << endl;
					cin >> i;
					if (i>=0 && i<kRNA)
						lst[i].Add();
					else cout << "RNA not found" << endl;
					break;
				}
				case 2:
				{
					int i=0;
					cout << "Enter the number of the RNA" << endl;
					cin >> i;
					if (i>=0 && i<kRNA)
						lst[i].Delete_end();
					else cout << "RNA not found" << endl;
					break;
				}
				case 3:
				{
					int i=0;
					cout << "Enter the RNA number in which you want to take the first part" << endl;
					cin >> i;
					if (i>=0 && i<kRNA)
					{
						int j=0;
						cout << "Enter the RNA number in which you want to take the second part" << endl;
						cin >> j;
						if (i>=0 && i<kRNA)
						{
							lst[i].Show_Start();
							lst[j].Show_Start();
							lst[i].first(test_1,test_2);
							lst[j].second(test_1,test_2);
						}
						else cout << "RNA not found" << endl;
					}
					else cout << "RNA not found" << endl;
					break;
				}
				case 4:
				{
					int i=0;
					cout << "Enter the number of RNA that you want to copy" << endl;
					cin >> i;
					if (i>=0 && i<kRNA)
					{
						int j=0;
						cout << "Enter the number of RNA" << endl;
						cin >> j;
						if (i>=0 && i<kRNA)
							lst[j]=lst[i];
						else cout << "RNA not found" << endl;
					}
					else cout << "RNA not found" << endl;
					break;
				}
				case 5:
				{
					int i=0;
					cout << "Enter the number of the RNA that you want to see" << endl;
					cin >> i;
					if (i>=0 && i<kRNA)
						lst[i].Show_Start();
					else cout << "RNA not found" << endl;
					break;
				}
			}
			showmenu();
			mn=0;
			cin >> mn;
		}
		cout << mn << endl;
	}
	else cout << "The number is too small" << endl;
}

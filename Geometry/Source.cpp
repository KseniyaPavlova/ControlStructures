//Geometry
#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2

//define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3

//#define RHOMBUS
//#define PLUS_MINUS
//#define DOSKA


//#define RHOMBUS_1
//#define TERNARY
//#define TERNARY_1



void main()
{
	setlocale(LC_ALL, "");
	int n, a = 1;
	cout << "Введите число: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++) //этот for повторяет вывод строки из звездочек
	{
		for (int i = 0; i < n; i++)// этот For повторяет ввод звездочки, мы получаем строку из звездочек
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE1
	for (int i = 0; i < n; i++, a++) //этот for повторяет вывод строки из звездочек
	{
		for (int j = a; j <= n && j >= 1; j--)// этот For повторяет ввод звездочки, мы получаем строку из звездочек
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE1

#ifdef TRIANGLE2
	for (int i = 0; i < n; i++) //этот for повторяет вывод строки из звездочек
	{
		for (int j = i; j < n; j++)// этот For повторяет ввод звездочки, мы получаем строку из звездочек
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE2

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{

			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef RHOMBUS
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";
		/*	for (int j = 1; j <= 1; j++)*/cout << "/";
		for (int j = 1; j < i; j++)cout << "  ";
		/*	for (int j = 1; j <= 1; j++)*/cout << "\\";
		cout << endl;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)cout << " ";
		/*for (int j = 1; j <= 1; j++)*/cout << "\\";
		for (int j = i; j < n; j++)cout << "  ";
		/*for (int j = 1; j <= 1; j++)*/cout << "/";
		cout << endl;
	}
#endif // RHOMBUS

#ifdef PLUS_MINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (i % 2 == 0)
			{
				if (j % 2 != 0)cout << "- ";
				else /*if (j % 2 == 0)*/cout << "+ ";
			}
			else
			{
				if (j % 2 != 0)cout << "+ ";
				else /*if (j % 2 == 0)*/cout << "- ";
			}
		cout << endl;
	}
#endif // PLUS_MINUS

#ifdef DOSKA
	//В данном коде размер квадрата фиксированный - 5х5
	//Чтобы размер одного квадрата зависел от введенного числа, нужно в циклах for, в условии "j < 5" значение "5" заменить на "n"
	for (int i = 0; i < n; i++) //этот for повторяет вывод строки 
	{
		if (i % 2 == 0) // проверяется условие на кратность строки
		{
			for (int j = 0; j < 5; j++) // счетчик из 5 итераций, который выводит "* " или " "
			{
				for (int j = 0; j < n; j++) //этот For повторяет ввод символов в строку (1 символ состоит из пяти "* " или "  ")
				{
					if (j % 2 == 0) for (int j = 0; j < 5; j++) cout << "* ";// проверяется условие на кратность символа, а затем счетчик из 5 итераций выводит "* "
					else if (j % 2 != 0) for (int j = 0; j < 5; j++) cout << "  ";// проверяется условие на кратность символа, а затем счетчик из 5 итераций выводит " "
				}
				cout << endl;
			}
		}
		else if (i % 2 != 0)
		{
			for (int j = 0; j < 5; j++)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0) for (int j = 0; j < 5; j++) cout << "  ";
					else if (j % 2 != 0) for (int j = 0; j < 5; j++) cout << "* ";
				}
				cout << endl;
			}
		}
	}
#endif // DOSKA  

#ifdef RHOMBUS_1
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++) cout << "  ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++) cout << " ";
		cout << "/";
		cout << endl;
	}
#endif // RHOMBUS_1

#ifdef TERNARY
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}

		cout << endl;
	}
#endif // TERNARY

#ifdef TERNARY_1
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= n; j++)
			cout << (j == n ? "\n" : (i + j) % 2 == 0 ? "+ " : "- ");
	cout << endl;
#endif // TERNARY_1



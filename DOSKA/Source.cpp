#include<iostream>
using namespace std;

//#define ASCII
//#define DOSKA
//#define CHESS
#define CHESS_1

//#define VERTIKALNAYA_LINIYA (char) 179
//#define GORIZONTALNAYA_LINIYA (char) 196
//#define VERKHNIY_PY (char)191 
//#define NIZHNIY_PY (char)217
//#define VERKHNIY_LY (char)218
//#define NIZHNIY_LY (char)192
//#define BELYY_KVADRAT (char)219
//#define CHERNIY_KVADRAT (char)255

//#define UPPER_LEFT_ANGLE	char (218)
//#define UPPER_RIGHT_ANGLE	char (191)
//#define DOWN_LEFT_ANGLE		char (192)
//#define DOWN_RIGHT_ANGLE	char (217)
//#define HORIZONTAL_LINE		char (196) << (char)196
//#define VERTICAL_LINE		char (179)
//#define WHITE_BOX			"\xDB\xDB"
//#define BLACK_BOX			"  "
//#define WHITE_BOX			char (219) << (char)219
// \x - ��������� �������� ASCII - ������ � ��������� ���������
// ����� \� ����������� ���� ����������������� ��� ������� (��� - ���)

#define VERTICAL_LINE			(char) 186
#define HORIZONTAL_LINE			(char) 205
#define VERKHNIY_PY				(char) 187
#define NIZHNIY_PY				(char) 188
#define VERKHNIY_LY				(char) 201
#define NIZHNIY_LY				(char) 200
#define WHITE_BOX				"\xDB\xDB"
#define BLACK_BOX				"  "

void main()
{
#ifdef ASCII
	for (int i = 0; i < 256; i++) cout << i << " " << (char)i << "\n\n";
#endif // ASCII	

#ifdef DOSKA
	int n;
	cout << "������� �����: "; cin >> n; cout << endl;
	n += 1;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << VERKHNIY_LY;
			else if (i == 0 && j == n)cout << VERKHNIY_PY;
			else if (i == n && j == 0)cout << NIZHNIY_LY;
			else if (i == n && j == n)cout << NIZHNIY_PY;
			else if (i == 0 || i == n)cout << GORIZONTALNAYA_LINIYA;
			else if (j == 0 || j == n)cout << VERTIKALNAYA_LINIYA;
			else cout << ((i + j) % 2 == 0 ? BELYY_KVADRAT : CHERNIY_KVADRAT);
		}
		cout << endl;
	}
	cout << endl;
#endif // DOSKA

#ifdef CHESS
	int n;
	cout << "������� ������ ������: "; cin >> n;
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			/*cout << "* ";*/
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
			//else i % 2 == j % 2 ? cout << WHITE_BOX : cout << "  ";
			//else (i + j) % 2 == 0 ? cout << WHITE_BOX : cout << "  ";
		}
		cout << endl;
	}
#endif // CHESS

#ifdef CHESS_1
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ ��������� �����: "; cin >> n; cout << endl;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n * 10 + 1; i++)
	{
		if (i == 0) cout << VERKHNIY_LY;
		else if (i == n * 10 + 1) cout << VERKHNIY_PY;
		else if (i < n * 10 + 1) cout << HORIZONTAL_LINE;
	}
	cout << endl;
	for (int i = 0; i < n; i++) //���� for ��������� ����� ������ 
	{
		if (i % 2 == 0) // ����������� ������� �� ��������� ������
		{
			for (int j = 0; j < 5; j++) // ������� �� 5 ��������, ������� ������� WHITE_BOX ��� BLACK_BOX
			{
				for (int j = 0; j < n; j++) //���� For ��������� ���� �������� � ������ (1 ������ ������� �� ���� WHITE_BOX ��� BLACK_BOX)
				{
					if (j == 0 || j == n) cout << VERTICAL_LINE;
					if (j % 2 == 0) for (int j = 0; j < 5; j++) cout << WHITE_BOX;// ����������� ������� �� ��������� �������, � ����� ������� �� 5 �������� ������� WHITE_BOX
					else if (j % 2 != 0) for (int j = 0; j < 5; j++) cout << BLACK_BOX;// ����������� ������� �� ��������� �������, � ����� ������� �� 5 �������� ������� BLACK_BOX
				}
				if (j < 5) cout << VERTICAL_LINE; cout << endl;
			}
		}
		else if (i % 2 != 0)
		{
			for (int j = 0; j < 5; j++)
			{
				for (int j = 0; j < n; j++)
				{
					if (j == 0 || j == n)cout << VERTICAL_LINE;
					if (j % 2 == 0) for (int j = 0; j < 5; j++) cout << BLACK_BOX;
					else if (j % 2 != 0) for (int j = 0; j < 5; j++) cout << WHITE_BOX;
				}
				if (j < 5) cout << VERTICAL_LINE; cout << endl;
			}
		}
	}
	for (int i = 0; i <= n * 10 + 1; i++)
	{
		if (i == 0) cout << NIZHNIY_LY;
		else if (i == n * 10 + 1) cout << NIZHNIY_PY;
		else if (i < n * 10 + 1) cout << HORIZONTAL_LINE;
	}
cout << endl;
#endif // CHESS_1
}

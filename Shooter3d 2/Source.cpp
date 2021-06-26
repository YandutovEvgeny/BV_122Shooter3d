#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"
#define Escape      27
#define UP_ARROW    72
#define DOWN_ARROW  80
#define LEFT_ARROW  75
#define RIGHT_ARROW 77
void main()
{
	setlocale(LC_ALL, "ru");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << tab << key << endl;
		/*if (key == 'w' || key == 'W' || key == UP_ARROW)
		{
			cout << "Вперёд" << endl;
		}
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)
		{
			cout << "Вправо" << endl;
		}
		else if (key == ' ')
		{
			cout << "Прыжок" << endl;
		}
		else if (key == 13)
		{
			cout << "Огонь" << endl;
		}
		else if (key == Escape)
		{
			cout << "Exit" << endl;
		}
		else
		{
			if(key !=-32)cout << "Error" << endl;
		}*/
		switch (key)
		{
		case 'w': 
		case 'W': 
		case UP_ARROW: cout << "Вперёд" << endl; break;
		case 's': 
		case 'S': 
		case DOWN_ARROW: cout << "Назад" << endl; break;
		case 'a': 
		case 'A': 
		case LEFT_ARROW: cout << "Влево" << endl; break;
		case 'd': 
		case 'D': 
		case RIGHT_ARROW: cout << "Вправо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case 13: cout << "Огонь" << endl; break;
		case Escape: cout << "Exit" << endl; break;
		case -32: break;
		default: cout << "Error" << endl;
		}
	} while (key !=Escape);

}
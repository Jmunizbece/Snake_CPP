#include <iostream>
using namespace std;

bool gameover;
const int width = 20;
const int height = 20;
int x, y, fruitx, fruity, score;
enum eDirection( STOP = 0, LEFT, RIGHT, UP, DOWN);
eDirection dir;

void Setup()
{
	gameover = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitx = rand() % width;
	fruity = rand() % height;
	score = 0;
}

void Draw()
{
	system("cls"); //system("clear");
	for (int i = 0; i < width; i++)
	{
		cout << "#" << endl;
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
			{
				cout << "#";
			}
			else
			{
				cout << " ";
			}
			if (j == width - 1)
			{
				cout << "#";
			}
		}
	}
	for (int i = 0; i < width; i++)
	{
		cout << "#" << endl;
	}
}

void Input()
{

}

void Logic()
{

}

int main()
{
	Setup(); 
	while (!gameover)
	{
		Draw(); 
		Input(); 
		Logic();
	}
	return 0; 
}
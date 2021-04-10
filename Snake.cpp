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
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
//오픈소스 프로젝트

void draw(int a[7][7])
{
    for (int i = 0; i < 7; i++)
    {
		for (int j = 0; j < 7; j++)
		{
			if (a[i][j] == 0)
				printf("■"); //길
			else if (a[i][j] == 1)
				printf("※"); //벽
			else if (a[i][j] == 2)
				printf("●"); //목적지
            else if (a[i][j] == 3)
                printf("ㅗ"); //목적지
           
        }
        printf("\n");
    }
}

int main()
{
    int map[7][7] = { {0,0,0,0,0,0,0},
        {0,1,0,0,1,1,1},
        {0,1,0,0,0,0,0},
        {1,1,0,1,0,0,0},
        {0,0,0,1,0,1,0},
        {0,1,0,1,0,1,0},
        {0,1,0,0,0,1,0} };

    int hide[7][7] = { {0,0,0,0,0,0,0},
        {0,1,0,0,1,1,1},
        {0,1,0,0,0,0,0},
        {1,1,0,1,0,0,0},
        {0,0,0,1,0,1,0},
        {0,1,0,1,0,1,0},
        {0,1,0,0,0,1,0} };

    srand((unsigned)time(NULL));

    int a, b; //출
    int c, d; //도
   //출발지
	while (1)
	{
		a = rand() % 7;
		b = rand() % 7;

		if (map[a][b] == 0)
		{
			map[a][b] = 3;
			break;
		}
		else if (map[a][b] == 1);

    }
	//목적지
	while (1)
	{
		c = rand() % 7;
		d = rand() % 7;

		if (map[c][d] == 0)
		{
			map[c][d] = 2;
			break;
		}
		else if (map[c][d] == 1);
		else if (map[c][d] == 3); //출발지와 중복 방지
	}
	draw(map);

}
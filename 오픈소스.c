#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
//���¼ҽ� ������Ʈ

void draw(int a[7][7])
{
    for (int i = 0; i < 7; i++)
    {
		for (int j = 0; j < 7; j++)
		{
			if (a[i][j] == 0)
				printf("��"); //��
			else if (a[i][j] == 1)
				printf("��"); //��
			else if (a[i][j] == 2)
				printf("��"); //������
            else if (a[i][j] == 3)
                printf("��"); //������
           
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

    int a, b; //��
    int c, d; //��
   //�����
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
	//������
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
		else if (map[c][d] == 3); //������� �ߺ� ����
	}
	draw(map);

}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
//���¼ҽ� ������Ʈ

//�Լ� ����
void draw(int arr[7][7]);
int print_menu(void);
void set(int (*arr)[7]);
void reset(int (*arr)[7]);

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

	int n;
	while (1)
	{
		n = print_menu();

		if (n == 0) {
			printf("�ý����� �����մϴ�\n"); break;
		}

		switch (n) {
		case 1: set(map);break;
		case 2:;break;
		case 3: reset(map);break;
		default: printf("�߸��� �Է��Դϴ�. 0~3���ڸ� �����ּ���\n\n");
		}

	}
}
//�Լ� ����

int print_menu(void) {

	int n;

	printf("1.������� �������� �����մϴ�\n");
	printf("2.\n"); //�ִܰŸ����
	printf("3.\n"); //���� 
	printf("0.����\n");
	printf(">��ȣ ����: ");
	scanf_s("%d", &n);

	printf("\n");

	return n;
}


void draw(int arr[7][7])
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (arr[i][j] == 0)
				printf("��"); //��
			else if (arr[i][j] == 1)
				printf("��"); //��
			else if (arr[i][j] == 2)
				printf("��"); //������
			else if (arr[i][j] == 3)
				printf("��"); //�����
			else
				printf("����\n");  //���� ������ else��

		}
		printf("\n");
	}
}


//���,������ ���� �Լ�
void set(int (*arr)[7]) {

	int a, b; //��� ����
	int c, d; //���� ����


   //�����
	while (1)
	{
		a = rand() % 7;
		b = rand() % 7;

		if (arr[a][b] == 0)     //�������� 1���� �����̹Ƿ� arr[c]���� �ϳ���??how?
		{
			arr[a][b] = 3;
			break;
		}
		else if (arr[a][b] == 1);

	}
	//������
	while (1)
	{
		c = rand() % 7;
		d = rand() % 7;

		if (arr[c][d] == 0)
		{
			arr[c][d] = 2;
			break;
		}
		else if (arr[c][d] == 1);
		else if (arr[c][d] == 3); //������� �ߺ� ����
	}
	draw(arr);
}
//�ִܰŸ� ��� �Լ�

//���� ��Ű�� �Լ�
void reset(int (*arr)[7])
{
	int map_reset[7][7] = { {0,0,0,0,0,0,0},
	   {0,1,0,0,1,1,1},
	   {0,1,0,0,0,0,0},
	   {1,1,0,1,0,0,0},
	   {0,0,0,1,0,1,0},
	   {0,1,0,1,0,1,0},
	   {0,1,0,0,0,1,0} };
	
	int i, j;
	for (j = 0;j < 7;j++) {
		for (i = 0;i < 7;i++)
		{
			arr[j][i] = map_reset[j][i];
		}
	}
	printf("������ ���µǾ����ϴ�!\n");
	printf("1���� ����, �ʱ�ȭ�� ������ Ȯ�����ּ���!\n");
}

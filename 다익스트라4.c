#include <stdio.h>
#include <stdlib.h>
#define INF 99
//�Լ� ���� ���ͽ�Ʈ�� �־����  7x7�� �õ�
const int num = 7; //make 7x7 
int d[9];
//int arr[num][num]; //�迭�� ũ�� ������ ���Ҷ� �����Ҵ� ����ؼ�
int** arr;
int row, column; // row column index

void func() {
	int i, j;

	
	for (row = 0; row < num; row++) {
		for (column = 0; column < num; column++) {
			arr[row][column] = 0; //�ʱ� ��ġ

			for (i = 0; i < num; i++)
			{

				for (j = 0; j < num; j++) {
					

					if ((i == row + 1) || (j == column + 1))
					{
						//1��° case
						if ((i == row + 1) && (j != column + 1))
						{
							if (j == column) //j�������� i�� 1����
								arr[i][j] = 1;
							else
								arr[i][j] = INF;
						}
						//2��° case
						else if ((j == column + 1) && (i != row + 1))
						{
							if (i == row) //i�������� j�� 1����
								arr[i][j] = 1;
							else
								arr[i][j] = INF;
						}
						//3��° case
						else
						{
							arr[i][j] = INF;
						}
					}
					else {
						if (!((i == row) && (j == column)))
							arr[i][j] = INF;
					}


					//������ > i==row-1 �̶� j==column-1�� ���ؾ�

					if ((row >= 1) || (column >= 1))    //row, column �� 1�̻��̾�� ���� ���� ��
					{
						if ((i == row - 1) || (j == column - 1))       //row-1�� ���� , column-1�� ���� ���� ��
						{
							//1��° case
							if ((i == row - 1) && (j != column - 1))
							{
								if (j == column)
									arr[i][j] = 1;
								else
									arr[i][j] = INF;
							}
							//2��° case
							else if ((j == column - 1) && (i != row - 1))
							{
								if (i == row)
									arr[i][j] = 1;
								else
									arr[i][j] = INF;
							}
							//3��° case
							else
							{
								arr[i][j] = INF;
							}
						}
					}


					printf("%5d", arr[i][j]);
				}

				printf("\n");
			}
			//int z = 3 * i + j; //3x3�϶� 1������ ��ġ 
			for (i = 0; i < num; i++)
			{
				for (j = 0; j < num; j++)
				{
					d[num* i + j] = arr[i][j];
					printf("d[%d]:%2d ", num * i + j, d[num * i + j]);
				}
				
			}
			printf("\n");

		}
	}
	/*
	for (i = 0; i < num*num; i++) { // 0 ~ n^2 ����

		printf("%3d", d[i]);  //�� ������ d[9] ����
	}
	*/
}

int main(void) {

	arr = (int**)malloc(sizeof(int *) * num);
	
	for (int i = 0; i < num; i++)
		{
			arr[i] =(int*)malloc(sizeof(int) * num);
		}
	
	
	func();

	for (int i = 0; i < num; i++)
	{
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}
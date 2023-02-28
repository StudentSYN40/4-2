#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int mas[7];
	printf("Количество элементов : 7\n");

	for(int i=0;i<7;i++)
	{
		printf("Введите %i число : ",i+1);
		scanf("%i", &mas[i]);
	}
	
	for(int i=0;i<7;i++)
	{
		printf("%i ",mas[i]);
	}
}
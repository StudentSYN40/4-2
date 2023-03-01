#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n;
	int *mas = new int[n];
	printf("Введите количество элементов : ");
	scanf("%i", &n);
	
	for(int i=0;i<n;i++)
	{
		printf("Введите %i число : ",i+1);
		scanf("%i", &mas[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%i ",mas[i]);
	}
	
	delete[] mas;
}

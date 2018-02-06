#include <stdio.h>
#include <stdlib.h>

void clear()
{
printf("\033[2J");							/* Czyści ekran */
printf("\033[0;0f"); 						/* Ustawia kursor w lewym, górnym rogu */
}

//rekurencyjnie
unsigned int fib_r(int n) 
{
	if (n <= 1) 
	{
		return n;
	} 
	else 
	{
		return fib_r(n - 1) + fib_r(n - 2);
	}
}

//literacyjnie
unsigned int fib_l(int n)
{
	int a = 0;
	int b = 1;
	int c;
	
	for(int i = 0; i < n; ++i)
	{
		c = a+b;
		a = b;
		b = c;
	}
	return a;
}
	
int main() 
{
clear();
	int n;
	char pytanie;

	do
	{
	printf("Podaj liczbę dla której zostanie wyliczony ciąg : ");
	scanf("%d",&n); 
	//printf("Liczba Fibonaciego to %d\n", fib_r(n));
	printf("Liczba Fibonaciego to %d\n", fib_l(n));
	printf("Czy chesz dalej generować kolejne liczby ciągu ? T/N ");
	scanf(" %c", &pytanie);
	}
	while( pytanie == 'T' || pytanie == 't');
	return 0;
}

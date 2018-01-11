#include <stdio.h>
#include <stdlib.h>

void clear()
{
printf("\033[2J");							/* Czyści ekran */
printf("\033[0;0f"); 						/* Ustawia kursor w lewym, górnym rogu */
}

int nwd(int a, int b) 
{
	int c;
    while (b != 0)
    {
		c=a%b;
		a=b;
		b=c;
	}
    return a;
}

void pokaz_nwd(int a, int b)
{
	if(a||b)	// jeśli obie cyfry są lub jedna z nich jest różna od zera...
		printf("%d\n",nwd(abs(a),abs(b)));
	else		// .. jeśli obie cyfry są równe 0
		printf("nie mozna wyznaczyc wspolnego dzielnika\n");
}

int main()
{
    int a, b;
	clear();
	
	printf("Obliczanie NWD - najwiekszego wspolnego dzielnika\n");

	printf("Podaj pierwsza liczbe: ");
	scanf("%d", &a);
	printf("   Podaj druga liczbe: ");
	scanf("%d", &b);
	printf("\n         NWD(%d,%d) = ", a, b);
	pokaz_nwd(a,b);
	printf("\n");
    return 0;
}

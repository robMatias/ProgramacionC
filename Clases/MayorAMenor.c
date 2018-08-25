#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int aux;

	printf("introduce el primer numero\n");
	scanf("%d", &a);
	printf("introduce el segundo numero\n");
	scanf("%d", &b);
	printf("introduce eltercer numero\n");
	scanf("%d", &c);

	if (b > a)
	{
		aux=a;
		a = b;
		b = aux;
	}

	if (c > a)
	{
		aux = a;
		a = c;
		c = aux;
	}


	if (c > b)
	{
		aux = b;
		b = c;
		c = aux;
	}

	printf("Numero mayor = %d\n", a);
	printf("Numero medio = %d\n", b);
	printf("Numero menor = %d\n", c);
	return 0;
}
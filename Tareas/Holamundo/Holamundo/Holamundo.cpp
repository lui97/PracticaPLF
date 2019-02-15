
#include <conio.h>
#include <stdio.h>


int main()
{
	
	char opcion;
	int n1, n2;

	do
	{
		printf("\n   >>> MENU CALCULADORA <<<");
		printf("\n   1.Sumar dos numeros.", 163);
		printf("\n   2. Restar dos numeros.", 163);
		printf("\n   3. Multiplicar dos numeros.", 163);
		printf("\n   4. Dividir dos numeros.", 163);
		printf("\n   5. Salir.\n");

		/* Filtramos la opciC3n elegida por el usuario */
		do
		{
			printf("\n   Introduzca opciocn (1-5): ", 162);
			fflush(stdin);
			scanf_s("%c", &opcion);

		} while (opcion < '1' || opcion > '5');
		

		switch (opcion)
		{
			// 1: Sumar 
		case '1': printf("\n   Introduzca primer numero: ");
			scanf_s("%d", &n1);
			printf("\n   Introduzca segundo sumando: ");
			scanf_s("%d", &n2);
			printf("\n   %d + %d = %d\n", n1, n2, n1 + n2);
			break;

			//2: Restar 
		case '2': printf("\n   Introduzca primer numero: ");
			scanf_s("%d", &n1);
			printf("\n   Introduzca segundo numero: ");
			scanf_s("%d", &n2);
			printf("\n   %d - %d = %d\n", n1, n2, n1 - n2);
			break;

			//3: Multiplicar
		case '3': printf("\n   Introduzca primer numero: ");
			scanf_s("%d", &n1);
			printf("\n   Introduzca segundo numero: ");
			scanf_s("%d", &n2);
			printf("\n   %d * %d = %d\n", n1, n2, n1 * n2);
			break;

			/* OpciC3n 4: DivisiC3n entera */
		case '4': printf("\n   Introduzca numero a divir: ");
			scanf_s("%d", &n1);
			printf("\n   Introduzca divisor: ");
			scanf_s("%d", &n2);
			if (n2 != 0)
				printf("\n   %d div %d = %d ( Resto = %d )\n", n1, n2, n1 / n2, n1 % n2);
			else
				printf("\n   ERROR: No se puede dividir entre cero.\n");
		}

	} while (opcion != '5');

	return 0;

}
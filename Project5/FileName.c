#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define      D       2.32166 
#define      M       1.852 
#define      S       1.609
#define      R       1.475
#define      SR       7.468
#define      G       7.4126
int dym, c1, c2;
float result1, result2, result3, result4, result5, result6;
void raschet()
{
	setlocale(LC_ALL, "RUS");
	puts("¬ведите значение дл€ расчета");
	scanf_s("%d", &dym);
	result1 = D * dym;
	result2 = M * dym;
	result3 = S * dym;
	result4 = R * dym;
	result5 = SR * dym;
	result6 = G * dym;
	printf(" %d дюймов Ц это %.1f см\n", dym, result1);
	printf(" %d морских миль Ц это %.1f км\n", dym, result2);
	printf(" %d сухопутных миль Ц это %.1f км\n", dym, result3);
	printf(" %d римских миль Ц это %.1f км\n", dym, result4);
	printf(" %d староруссих миль Ц это %.1f км\n", dym, result5);
	printf(" %d географических миль Ц это %.1f км\n", dym, result6);
}
void tabl()
{
	setlocale(LC_ALL, "RUS");
	puts("¬ведите два числа");
	scanf_s("%d", &c1);
	scanf_s("%d", &c2);
	printf(" _______________________________________________ \n");
	printf("|      a*b      |      a+b      |      a-b      |\n");
	printf(" ----------------------------------------------- \n");
	printf("|%7d*%7d|%7d+%7d|%7d-%7d|\n",c1,c2, c1, c2, c1, c2);
	printf(" ----------------------------------------------- \n");
	printf("|%8d       |%8d       |%8d       |\n", c1*c2, c1+c2, c1-c2);
}
void main()
{
	//raschet();
	tabl();
}
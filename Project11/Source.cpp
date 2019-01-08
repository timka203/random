#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
void task12()
{
	int a[100] = { 0 };
	int s, i;
	for (i = 0; i < 100; i++)
	{
		s = -100 + rand() % 999;
		a[i] = s;

	}
	for (i = 0; i < 100; i++)
	{
		if ((a[i] % 2) == 0)
			printf("%d\n", a[i]);
	}
	printf("\n----------------\n");
	for (i = 0; i < 100; i++)
	{
		if ((a[i] % 2) != 0)
			printf("%d\n", a[i]);
	}
	printf("\n----------------\n");


}
void task11()
{
	int a[100] = { 0 };
	int s, i;
	for (i = 0; i < 100; i++)
	{
		s = -100 + rand() % 999;
		a[i] = s;
	
	}
	for (i = 0; i < 100; i++)
	{
		if (a[i] > 0)
			printf("%d\n", a[i]);
	}
	printf("\n----------------\n");
	for (i = 0; i < 100; i++)
	{
		if (a[i] < 100)
			printf("%d\n", a[i]);
	}printf("\n----------------\n");
	for (i = 0; i < 100; i++)
	{
		if ((a[i]%2) == 0)
			printf("%d\n", a[i]);
	}
	printf("\n----------------\n");
}
void task10()
{
	int a[28] = { 0 };
	int s, i;
	int m = 10000;
	int sum = 0;
	for (i = 0; i < 30; i++)
	{
		s = 0 + rand() % 999;
		a[i] = s;
		sum = sum + a[i];
	}
	if (sum > m)
		printf("error");
	else printf("okay");
}
void task9()
{
	int a[28] = { 0 };
	int s, i, middle;
	int sum = 0;
	for (i = 0; i < 12; i++)
	{
		s = 0 + rand() % 20;
		a[i] = s;
		sum = sum + a[i];
		middle = sum / 28;
	}
	middle = sum / 28;
	printf("%d\n%d\n",sum, middle);
}
void task8()
{
	int a[12] = { 0 };
	int s, i;
	int sum = 0;
	for (i = 0; i < 12; i++)
	{
		s = 0 + rand() % 200;
		a[i] = s;
		sum = sum + a[i];
	}printf("%d\n",sum);





}
void task7()
{
	int a[12] = { 0 };
	int s, i;
	int A = 12;
	for (i = 0; i < 12; i++)
	{
		s = 0 + rand() % 200;
		a[i] = s;
	}printf("_______________\n");
	for (i = 0; i < 12; i++)
	{
		a[i] = a[i]*2;
		printf("%d\n", a[i]);
	}printf("_______________\n");
	for (i = 0; i < 12; i++)
	{
		
		a[i] =a[i]-A;
		printf("%d\n", a[i]);
	}
	printf("_______________\n");
	for (i = 0; i < 12; i++)
	{

		a[i] = a[i] /a[1];
		printf("%d\n", a[i]);
	}

}
void task6()
{
	int a[120] = { 0 };
	int s, i,h,j,y,r,o,t;
	for (i = 0; i < 119; i++)
	{
		s = 0 + rand() % 200;
		a[i] = s;
	}
	printf("какое действие (1 или 2)");
	scanf_s("%d",&h);
	switch (h)
	{
	case 1: {do {
		printf("ввидите первое число\n");
		scanf_s("%d", &o);
		int e = sqrt(a[o]);
		printf("%d\n", e);
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &t);
	} while (t == 2);
	}
		break;
	case 2: {
		printf("ввидите первое число\n");
		scanf_s("%d", &y);
		printf("вывидите второе число\n");
		scanf_s("%d", &j);
		r = (a[j] + a[y]) / 2;
		printf("%d\n", r);
		break;
	}
	default:
		break;
	}
}

void task5()
	{
	int a[120] = { 0 };
	int s, i;
	for (i = 0; i < 119; i++)
	{
		s = 0 + rand() % 200;
		a[i] = s;
	}
	for (i; i > 0; i--)
	{
		printf("%d  %d\n", i, a[i]);
	}
	}

void task4()
{
	int a[120] = { 0 };
	int s, i,t;
	for (i = 0; i < 119; i++)
	{
		s = 0 + rand() % 200;
		a[i] = s;
	}
	do {
		printf(" ввидите число\n");
		scanf_s("%d", &i);
		if (i > 119)
			printf("error");
		printf("\n%d\n", a[i]);
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &t);
	} while (t == 1);
	
}
void task3()
{
	int a[12] = { 0 };
	int s, i;
	for (i = 0; i < 12; i++)
	{
		s = 163 + rand() % 27;
		a[i] = s;
	}
	printf("________\n");
	for (i = 0; i < 12; i++)
		printf("%d\n", a[i]);


}
void task2()
{
	int a[10] = { 0 };
	int g = 10;
	int i = 0;
	for (i = 0; i < g; i++) {
		printf(" ¬видите число");
		scanf_s("%d", &a[i]);
	}
	printf("________");
	for (i = 0; i < g; i++)
		printf("%d\n", a[i]);
}
void task1()
{
	int a[8] = { 37,0,50,46,34,46,0,13 };
	int g = 8;
	for (int i = 0; i < g; i++)
		printf("%d\n", a[i]);
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task ");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		case 6: task6(); break;
		case 7: task7(); break;
		case 8: task8(); break;
		case 9: task9(); break;
		case 10: task10(); break;
		case 11: task11(); break;
		case 12: task12(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}

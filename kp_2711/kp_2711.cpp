#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

struct monitor
{
	char name[20];
	char surname[20];
	char cathegory[20];
	char data[20];
};



int main()
{

	system("chcp 1251");
	setlocale(LC_ALL, "Rus");
	monitor x;
	int n = 1;
	printf("Ввести имя - 1\nВвести фамилию - 2\nВвести категорию - 3\nВвести дату - 4\nВывод данных - 5\n");
	while (n != 0)
	{
		scanf("%d", &n);
		switch (n)
		{
		case(1):
			printf("Введите Имя:\n");
			scanf("%s", &x.name);
			break;
		case(2):
			printf("Введите Фамилию:\n");
			scanf("%s", &x.surname);
			break;
		case(3):
			printf("Введите категорию\n");
			scanf("%s", &x.cathegory);
			break;
		case(4):
			printf("Введите дату\n");
			scanf("%s", &x.data);
			break;
		case(5):
			printf("Имя: %s\nФамилия: %s\nКатегория: %s\nДата: %s\n", x.name, x.surname, x.cathegory, x.data);
			break;
		}
	}

}
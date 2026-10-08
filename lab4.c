#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int task1();
int task1a();
int task1b();
int task1c();
int task2();
int task3();

int main()
{
    setlocale(LC_CTYPE, ".UTF8");
    task1();
    task1a();
    task1b();
    task1c();
    task2();
    task3();
    return 322;
}

int task1()
{
    printf("Задача 1\n");
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    printf("Исходные значения:\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %e\n", d);
    printf("\nВведите новые значения\n");
    printf("Введите символ: ");
    scanf(" %c", &c);
    printf("Введите целое число: ");
    scanf("%d", &i);
    printf("Введите вещественное число (float): ");
    scanf("%f", &f);
    printf("Введите вещественное число (double): ");
    scanf("%lf", &d);
    printf("\nВведённые значения:\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %e\n", d);
    return 3222;
}

int task1a()
{
    printf("\nЗадача 1a\n");
    float a;
    printf("Введите вещественное число для разделения: ");
    scanf("%f", &a);
    int b = (int)a;
    float c = a - b;
    printf("Целая часть: %d\n", b);
    printf("Дробная часть: %f\n", c);
    return 32222;
}

int task1b()
{
    printf("\nЗадача 1б\n");
    char a;
    printf("Введите символ: ");
    scanf(" %c", &a);
    printf("Шестнадцатеричный код: %x\n", (unsigned char)a);
    printf("Десятичный код: %d\n", (unsigned char)a);
    return 322222;
}

int task1c()
{
    printf("\nЗадача 1в\n");
    int a;
    printf("Введите целое число i: ");
    scanf("%d", &a);
    printf("1/i (целочисленное деление, усечение): %d\n", 1 / a);
    printf("1.0/i (вещественное деление): %f\n", 1.0 / a);
    return 3222222;
}

int task2()
{
    printf("\nЗадача 2\n");
    int a = 11, b = 3;
    int x;
    float y;
    double z;
    x = a / b;
    y = a / b;
    z = a / b;
    printf("Неявное преобразование:\n");
    printf("x (int)    = %d\n", x);
    printf("y (float)  = %f\n", y);
    printf("z (double) = %e\n", z);
    printf("Пояснение: a / b даёт целый результат 3, который затем преобразуется к типу переменной.\n");
    printf("\nЯвное преобразование:\n");
    printf("(float)a / b  = %f\n", (float)a / b);
    printf("(double)a / b = %e\n", (double)a / b);
    printf("(float)(a / b) = %f\n", (float)(a / b));
    printf("(double)(a / b) = %e\n", (double)(a / b));
    printf("Пояснение: (float)a / b — сначала a приводится к float, затем деление вещественное.\n");
    printf("(float)(a / b) — сначала целочисленное деление, затем результат приводится к float.\n");
    return 32222222;
}

int task3()
{
    printf("\nЗадание 3\n");
    int n;
    printf("Введите трёхзначное целое число: ");
    scanf("%d", &n);
    int a = n % 10;
    int b = n / 100;
    int c = (n / 100) + ((n / 10) % 10) + (n % 10);
    int d = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
    printf("Последняя цифра: %d\n", a);
    printf("Первая цифра: %d\n", b);
    printf("Сумма цифр: %d\n", c);
    printf("Число наоборот: %d\n", d);
    return 322222222;
}

// Prog8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float a, b = 0, res = 0;
    char x = 'а';

    while (1)
    {
        if (x == 'з')
            break;
        printf("Выберите желаемую операцию:\n\
с) сложение     в) вычитание\n\
у) умножение    д) деление\n\
з) завершение\n");
        scanf_s("%c", &x, sizeof(x));

        switch (x)
        {
            case 'с':
                printf("Введите первое число: ");
       
                while (scanf_s("%f", &a) != 1)
                {
                    while ((x = getchar()) != '\n')
                        putchar(x);
                        printf(" не является числом. Введите число, такое как 2.5, -1.78Е8 или 3: ");
                }

                printf("Введите второе число: ");

                while (scanf_s("%f", &b) != 1)
                {
                    while ((x = getchar()) != '\n')
                        putchar(x);
                        printf(" не является числом. Введите число, такое как 2.5, -1.78Е8 или 3: ");
                }
             
                res = (a + b);
                printf("%.1f + %.1f = %.1f\n", a, b, res);
           
                while (getchar() != '\n')
                    continue;
                break;

//---------------------------------------------------------------------------------------------------- 

            case 'в':
                printf("Введите первое число: ");
           
                while (scanf_s("%f", &a) != 1)
                {
                    while ((x = getchar()) != '\n')
                        putchar(x);
                        printf(" не является числом. Введите число, такое как 2.5, -1.78Е8 или 3: ");
                }

                printf("Введите второе число: ");

                while (scanf_s("%f", &b) != 1)
                {
                    while ((x = getchar()) != '\n')
                        putchar(x);
                        printf(" не является числом. Введите число, такое как 2.5, -1.78Е8 или 3: ");
                }

                res = (a - b);
                printf("%.1f - %.1f = %.1f\n", a, b, res);

                while (getchar() != '\n')
                    continue;
                break;

//----------------------------------------------------------------------------------------------------

            case 'у':
                printf("Введите первое число: ");
            
                while (scanf_s("%f", &a) != 1)
                {
                    while ((x = getchar()) != '\n')
                        putchar(x);
                        printf(" не является числом. Введите число, такое как 2.5, -1.78Е8 или 3: ");
                }

                printf("Введите второе число: ");

                while (scanf_s("%f", &b) != 1)
                {
                    while ((x = getchar()) != '\n')
                        putchar(x);
                        printf(" не является числом. Введите число, такое как 2.5, -1.78Е8 или 3: ");
                }

                res = (a * b);
                printf("%.1f * %.1f = %.1f\n", a, b, res);

                while (getchar() != '\n')
                    continue;
                break;

//----------------------------------------------------------------------------------------------------

            case 'д':
                printf("Введите первое число: ");
            
                while (scanf_s("%f", &a) != 1)
                {
                    while ((x = getchar()) != '\n')
                        putchar(x);
                        printf(" не является числом. Введите число, такое как 2.5, -1.78Е8 или 3: ");
                }

                printf("Введите второе число: ");

                while (scanf_s("%f", &b) != 1)
                {               
                    while ((x = getchar()) != '\n')
                        putchar(x);
                        printf(" не является числом. Введите число, такое как 2.5, -1.78Е8 или 3: ");
                }

                if (b == 0)
                {
                    printf("Введите число, отличное от 0: ");
                    scanf_s("%f", &b);
                }
           
                res = (a / b);
                printf("%.1f / %.1f = %.1f\n", a, b, res);

                while (getchar() != '\n')
                    continue;
                break;

//----------------------------------------------------------------------------------------------------

            case 'з':
                break;
            default:
                printf("Вы ввели неверные данные. Доступно с)-д)\n");

            while (getchar() != '\n')
                continue;
        }
    }
	return 0;
}


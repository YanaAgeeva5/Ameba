#include "lab.h"

int main()
{
    int d;
    int x;

    do
    {
        printf("  Введите номер лабы ");
        scanf ("%d",&x);
        switch(x)
        {
        case 1:
            printf("Основное(O) или доп задание(D)");
            scanf("%d",&d);
            if(d=getchar()=='O') //getchar - функция ввода, которая считывает один символ из стандартного ввода (stdin). Вызывается гетчар, вводится символ и попадает в буфер стандартного ввода stdin, затем гетчар считывает этот символ
            {
                lab1();
            }
            else
            {
                lab1d();
            }
            break;

        case 2:
            printf("Основное(O) или доп задание(D)");
            scanf("%d",&d);
            if(d=getchar()=='O')
            {
                lab2();
            }
            else
            {
                lab2d();
            }
            break;

        case 3:
            printf("Основное(O) или доп задание(D)");
            scanf("%d",&d);
            if(d=getchar()=='O')
            {
                lab3();
            }
            else
            {
                printf("Такого нет");;
            }
            break;

        case 4:
            printf("Основное(O) или доп задание(D)");
            scanf("%d",&d);
            if(d=getchar()=='O')
            {
                lab4();
            }
            else
            {
                lab4d();
            }
            break;

        case 5:
            printf("Основное(O) или доп задание(D)");
            scanf("%d",&d);
            if(d=getchar()=='O')
            {
                lab5();
            }
            else
            {
                lab5d();
            }
            break;

        case 6:
            printf("Основное(O) или доп задание(D)");
            scanf("%d",&d);
            if(d=getchar()=='O')
            {
                lab6();
            }
            else
            {
                lab6d();
            }
            break;

        default:
            printf("Такой лабы нет");
        }
    } while(x>=1 && x<=6);
    return 0;
}
#include "lab.h"

#define YES 1
#define NO 0
#define MAX_LENGTH 1000
#define NO 0

int R(float f1, float f2, int i) {
    return ((f1+f2)*i);
}
int shish(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); // || - логический оператор или. shish - функция, которая проверяет, является ли символ буквой, сравнивая его с диапазонами символов для заглавных и строчных букв.
}
int omaigaddanila(char c) {
    c = c | 32; // Приводим к нижнему регистру 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
// Функция для удаления слов, начинающихся с гласной буквы
void tichtocrazy(char *str) {
    char result[MAX_LENGTH] = {0}; // Массив для хранения результата
    int i = 0, j = 0;
    int inWord = 0; // Флаг для отслеживания нахождения внутри слова
    int wordStart = 0; // Начало текущего слова

    while (str[i] != '0') {
        // Если текущий символ - пробел или конец строки
        if (str[i] == ' ' || str[i + 1] == '0') {
            if (inWord) { 
                // Проверяем последнее слово, если это конец строки
                if (str[i + 1] == '0') {
                    if (!omaigaddanila(str[wordStart])) { // Проверка последнего слова
                        for (int k = wordStart; k <= i; k++) {
                            result[j++] = str[k]; // Копируем слово в результат
                        }
                    }
                } else {
                    if (!omaigaddanila(str[wordStart])) { // Проверка текущего слова
                        for (int k = wordStart; k < i; k++) {
                            result[j++] = str[k]; 
                        }
                        result[j++] = ' '; // Добавляем пробел в результат
                    }
                }
                inWord = 0; // Выходим из слова
            }
        } else {
            if (!inWord) { // Если мы не внутри слова
                inWord = 1; // Вошли в слово
                wordStart = i; // Запоминаем начало слова
            }
        }
        i++;
    }

    // Удаляем последний пробел, если он есть
    if (j > 0 && result[j - 1] == ' ') {
        j--;
    }

    result[j] = '0'; // Завершаем строку нулевым символом

    // Копируем результат обратно в исходную строку
    for (i = 0; result[i] != '0'; i++) {
        str[i] = result[i];
    }
    str[i] = NO; 
}
void lab1()

{
   
    
float L, v1, v2;
int t;
printf("Из пункта А в пункт Б, выехала машина со скорость v1 км/ч. Навстречу ей выехал мотоциклист со скоростью v2 км/ч. На каком расстоянии находятся пункты А и Б, если машина и мотоциклист встретились через t часов?\n");
printf("v1 = ");
scanf("%f", &v1);
printf("v2 = ");
scanf("%f", &v2);
printf("t = ");
scanf("%d", &t);
L=(v1+v2)*t;
printf("Расстояние между A и B : %f\n", L);

}
void lab1d()
{

    float v1=0, v2=0;
    int t=0;
    printf("Из пункта А в пункт Б, выехала машина со скорость v1 км/ч. Навстречу ей выехал мотоциклист со скоростью v2 км/ч. На каком расстоянии находятся пункты А и Б, если машина и мотоциклист встретились через t часов?\n");
    printf("Задание: Реализовать функцию L, которая возвращает целое число Применимые аргументы такие же как и в оригинальном задании\n");
    printf("v1 = ");
    scanf("%f", &v1);
    printf("v2 = ");
    scanf("%f", &v2);
    printf("t = ");
    scanf("%d", &t);
    int L=0;
    L = R(v1, v2, t);
    printf("расстояние между А и Б: %d\n", L);
}
void lab2()
{
    
float s,a,b,c;
int i, N, sign;
printf("Вычислить сумму первых N элементов ряда: 1-2/2+3/4-4/8...\n");
printf("N=");
scanf("%d",&N);

sign=1;
s=0;
i=0;
c=1;
b=1;
a=c/b;

while(N>i)
{
s=s+a*sign;
sign=-sign;
c=c+1;
b=b*2;
a=c/b;
i=i+1;
}

printf("n=%d, s=%f\n", i,s);
}
void lab2d()
{
   
float s,a,b,c;
int n, sign, t;
 printf("Вычислить сумму первых N элементов ряда: 1-2/2+3/4-4/8...\n\n");
 printf(" вместо цикла вайла цикл фор, выход из цикла если i mod 7 = 0 с помощью оператора брейк\n ");
scanf("%d",&n);

sign=1;
s=0;
t=0;
c=1;
b=1;
a=c/b;

for (int i=0; i<n; i++)
{
    printf("iter:%d\n",i);
    a=c/b;
    s=s+a*sign;
    sign=-sign;
    c=c+1;
    b=b*2;

    if ((i!=0)&&(i%(7)==0))
   break;
}

printf("s=%f\n",s);

}
void lab3()
{
   
 
    int c; 
    int flag = NO; 
    int cnt = 0; 
    char first_char = '0'; 
    char second_char = '0'; 
    int letter_count = 0; 
 printf("В потоке символов сосчитать число слов, у которых первые две буквы совпадают, по завершении ввода введите +.\n");

    while ((c = getchar()) != '+') {
        if (c == ' ' || c == '\n' || c == '.' || c == ',') {
            if (flag == YES && letter_count >= 2) {
             
                if (first_char == second_char) {
                    cnt++;
                }
            }
            flag = NO; 
            letter_count = 0; 
            first_char = '0'; 
            second_char = '0'; 
        } else {
            if (flag == NO) {
                first_char = c;
                letter_count++;
                flag = YES; 
            } else if (letter_count == 1) {
                second_char = c;
                letter_count++;
            } else {
             letter_count++;
            }
        }
    }
    if (flag == YES && letter_count >= 2) {
        if (first_char == second_char) {
            cnt++;
        }
    }
    printf("Number of words with the same first two letters = %d\n", cnt);

}
void lab4()
{
    printf("Тема лабы:В символьной строке удалить все слова, начинающиеся с гласной буквы.\n");
  
 {
    char str[MAX_LENGTH];
 while ((str == getchar()) != '+') {
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin); // Читаем строку с пробелами

    // Удаляем символ новой строки, если он есть
    for (int i = 0; str[i] != '0'; i++) {
        if (str[i] == '\n') {
            str[i] = '0';
            break;
        }
    }

    tichtocrazy(str); // Удаляем слова, начинающиеся с гласной

    printf("Строка без слов, начинающихся с гласной: %s\n", str);
    break;
}
}
}
void lab4d()
{
    printf(" Тема лабы");
    printf(" Задание");
}
void lab5()
{
    printf("В массиве из N целых чисел найти и поменять местами минимальный и максимальный элементы.\n");
    #define N 20
    int x[N];
    int i, minnum, maxnum;
    // Ввод массива из N целых чисел
    printf("Введите N целых чисел, в конце нажмите ввод:\n");
    for (i = 0; i < N; i++) { //для i от 0 до N
        printf("Элемент %d: ", i + 1);
        scanf("%d", &x[i]);
    }
    int tmp;
int noSwap;

for (int i = N - 1; i >= 0; i--)
{
    noSwap = 1;
    for (int j = 0; j < i; j++)
    {
        if (x[j] > x[j + 1])
        {
            tmp = x[j];
            x[j] = x[j + 1];
            x[j + 1] = tmp;
            noSwap = 0;
        }
    }
    if (noSwap == 1)
        break;
}
    // Активация индексов минимального и максимального элементов
    minnum = 0;
    maxnum = 0;
    // Поиск индексов минимального и максимального элементов
    for (i = 1; i < N; i++) {
        if (x[i] < x[minnum]) {
            minnum = i;
        }
        if (x[i] > x[maxnum]) {
            maxnum = i;
        }
    }
    // Вывод найденных значений
    printf("Минимальный элемент: %d\n", x[minnum]);
    printf("Максимальный элемент: %d\n", x[maxnum]);
    // Меняем местами минимальный и максимальный элементы
    int temp = x[minnum];
    x[minnum] = x[maxnum];
    x[maxnum] = temp;

    // Вывод измененного массива
    printf("Измененный массив:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", x[i]);
    }
  printf("\n");
}
void lab5d()
{
    printf(" Тема лабы");
    printf(" Задание");
}
void lab6()
{
    printf("Тема лабы");
}
void lab6d()
{
    printf(" Тема лабы");
    printf(" Задание");
}

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

struct person
{
        int age;
        char name[20];
        int pol;
};

int massive[10] = {100,1000,10000,1000000,100000000,123123,23123123,333333,123123123,2};
int ykazatel = 100;
int *ykazatel1;

int main(void)
{
        struct person people[] = { {23, "Tom", 1}, {32, "Bob", 1}, {26, "Alice", 0}, {41, "Dasha", 0}, {17, "Dima", 1}};
        printf("состоящие в группе\n");
        int a = sizeof(people)/sizeof(people[0]);
        for (int i = 0; i < a; i++) {
        if (people[i].pol != 0) {
        printf("%s\n", people[i].name);
}
}

        ykazatel1 = &ykazatel;
        printf("%d = %x \n",ykazatel,ykazatel1);

        // Массив со строкой для поиска
   char str [11]="1123456789";
   // Код искомого символа
   int ch = '1';
   // Указатель на искомую переменную в строке,
   // по которой осуществляется поиск.
   char *ach;
  
   // Ищем символ ‘6’
   ach=strchr (str,ch);

   // Выводим результат на консоль
   if (ach==NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ в строке на позиции # %d\n",ach-str+1);



       // Массив со строкой для поиска
   char str1 []="Мама мыла раму";
   // Набор символов, которые должны входить в искомый сегмент
   char str2 []="мыла";
   // Переменная, в которую будет занесен адрес первой найденной строки
   printf("%d\n",strstr(str1,"мыла")-str1);
   char *istr;

   //Поиск строки
   istr = strstr (str1,str2);

   //Вывод результата поиска на консоль
   if ( istr == NULL)
      printf ("Строка не найдена\n");
   else{
      printf ("Искомая строка начинается с символа %d\n",istr-str1+1);
   }

    char stroka[] = "ABC!DEF!GHI";
    char *primer = strtok(stroka, "!");
    do {
        printf("%s \n", primer);
    } while (primer = strtok(0, "!"));
    

 const int maxNumber = 100;
    int *p = NULL;
    unsigned i, size;
 
    do {
        printf("Enter number from 0 to %d: ", maxNumber);
        scanf("%d", &size);
        if (size < maxNumber) {
            break;
        }
    } while (1);
 
    p = (int*) malloc(size * sizeof(int));
 
    for (i = 0; i < size; i++) {
        p[i] = i*i;
    }
 
    for (i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
 
    getch();
    free(p);

return 0;
}
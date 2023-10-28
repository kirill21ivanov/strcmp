#include <stdio.h>
#include <string.h>

int main() {
    char fruit[] = "яблоко";                         // загаданный фрукт
    char answer[80];                                 // строка-ответ
  do
  {
     printf("Угадайте мой любимый фрукт! ");
     scanf("%s", answer);
  } while ( strcmp(fruit, answer) != 0);           // пока фрукт не отгадан, цикл будет работать
  printf("Правильный ответ!");
return 0;
}
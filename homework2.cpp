
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{   // условия и циклы
    setlocale(0, "");
    
    const int a = 10;
    int arr[a];
    for (int i = 0; i < a; i++) {
        arr[i] = rand() % 10;
        printf("%d\n", arr[i]);
    }
    std:: cout << "Вывод без 0:" << std::endl;
    for (int i = 0; i < a; i++) {
       if (arr[i] == 0) 
       continue;
       else  printf("%d\n", arr[i]);
    }
    // goto 
    int n;
step:
    printf("Введите число больше 5\n");
    scanf_s("%d", &n);
    if (n<=5) goto step;
    printf("hello world!");  
}


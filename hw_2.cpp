

#include <iostream>
#include <stdio.h>
#include <string>

int main()
{
    setlocale(0, "");
    char str[100] = "hello";
    char str2[] = " worldddddddd";

    strncat_s(str, str2, 6);
    std::cout << str << std::endl;

    char str3[] = "!";
    strcat_s(str, str3);
    std::cout << str << std::endl;
    std::cout << "------------------" << std::endl;
    printf("Если 1 и 2 строка равны = получим 0, если нет - 1\n");
    std::cout << strcmp(str, str2) << std::endl;

}



// StaticLib_DNS.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "iostream"
#include "Windows.h"
#include "fstream"


int String()
{
    string str;
    string dns;
    string ip;
    
    ifstream file("file.txt");
    if (!file.is_open()) //проверка условия доступности файлов
    {
        std::cout << "the file cannot be opened.\n";
        return 1; // Выход из программы с кодом ошибки
    }
    while (getline(file, str)) //пока получаем строки из файла, выполняются действия
    {
        std::cout << "\n" << str;
    }
    do
    {
        std::cout << "want to add a new entry? (y/n): ";
        string answer;
        std::cin >> answer
            if (!answer)
            {
                std::cout << "input DNS : ";
                std::cin >> dns;
                std::cout << "input ip";
                std::cin >> ip;
            }
    } while (!answer);

    file.close();
    return 0;
}
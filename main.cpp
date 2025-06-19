#include "currency.h"
#include "ui.h"
#include <iostream>
#include <cstdlib> 

int main() {
    // Для русских букв в консоли 
    system("chcp 65001 > nul");
    
    CurrencyConverter converter;
    
    while(true) {
        system("cls");
        showHeader();
        showCurrencyList();

        try {
            int from_choice, to_choice;
            double amount;
            
            // Ввод ивалюты
            std::cout << "Из какой валюты (1-5): ";
            std::cin >> from_choice;
            std::string from = converter.getCurrencyCode(from_choice);
            
            // Ввод валюты
            std::cout << "В какую валюту (1-5): ";
            std::cin >> to_choice;
            std::string to = converter.getCurrencyCode(to_choice);
            
            // Ввод суммы
            std::cout << "Сумма для конвертации: ";
            std::cin >> amount;
            
            // Конвертация
            double converted = converter.convert(amount, from, to);
            
            system("cls");
            showHeader();
            showResult(amount, from, converted, to);

            // Меню продолжения
            std::cout << "1. Новая конвертация\n";
            std::cout << "2. Выход\n";
            std::cout << "Выберите: ";
            
            int choice;
            std::cin >> choice;
            
            if(choice == 2) break;
            
        } catch(const std::exception& e) {
            std::cout << "\nОшибка: " << e.what() << "\n";
            system("pause");
        }
    }

    std::cout << "\nСпасибо за использование!\n";
    return 0;
}
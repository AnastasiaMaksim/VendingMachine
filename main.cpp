#include "iostream"
#include "dispenserType.h"
#include "cashRegister.h"


void showSelection() {
    std::cout << "Выберите продукт: " << std::endl;
    std::cout << "1. Конфеты" << std::endl;
    std::cout << "2. Чипсы" << std::endl;
    std::cout << "3. Жвачка" << std::endl;
    std::cout << "4. Печенье" << std::endl;
}

void sellProduct(dispenserType& dispenser, cashRegister& cashReg) {

    int amount;
    std::cout << "Введите сумму: ";
    std::cin >> amount;

    if (amount >= dispenser.getCost()) {
        dispenser.makeSale();
        cashReg.acceptAmount(dispenser.getCost());
        std::cout << "Спасибо за покупку! Возьмите свой товар." << std::endl;
    }
    else {
        std::cout << "Внесенная сумма недостаточна. Пожалуйста, внесите большую сумму." << std::endl;
    }
}

int main() {
    dispenserType candyDispenser(20, 10);
    dispenserType chipsDispenser(10, 40);
    dispenserType gumDispenser(30, 15);
    dispenserType cookieDispenser(5, 85);
    cashRegister cashRegister;

    showSelection();
    int choice;
    std::cout << "Введите номер продукта: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "Стоимость конфет: " << candyDispenser.getCost() << " рублей" << std::endl;
        sellProduct(candyDispenser, cashRegister);
        break;
    case 2:
        std::cout << "Стоимость чипсов: " << chipsDispenser.getCost() << " рублей" << std::endl;
        sellProduct(chipsDispenser, cashRegister);
        break;
    case 3:
        std::cout << "Стоимость жвачки: " << gumDispenser.getCost() << " рублей" << std::endl;
        sellProduct(gumDispenser, cashRegister);
        break;
    case 4:
        std::cout << "Стоимость печенья: " << cookieDispenser.getCost() << " рублей" << std::endl;
        sellProduct(cookieDispenser, cashRegister);
        break;
    default:
        std::cout << "Некорректный выбор" << std::endl;
        return 0;
    }

    return 0;
}
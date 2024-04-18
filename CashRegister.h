#pragma once
#pragma once
#include <iostream>

class cashRegister {
private:
    int cashOnHand;
public:
    cashRegister() {
        cashOnHand = 500;
    }
    cashRegister(int cash) {
        cashOnHand = cash;
    }
    int getCurrentBalance() {
        return cashOnHand;
    }
    void acceptAmount(int amount) {
        cashOnHand += amount;
    }
};
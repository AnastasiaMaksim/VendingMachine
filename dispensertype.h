#pragma once
#include <iostream>
class dispenserType {
private:
    int numberOfItems;
    int itemCost;
public:
    dispenserType() {
        numberOfItems = 50;
        itemCost = 50;
    }
    dispenserType(int items, int cost) {
        numberOfItems = items;
        itemCost = cost;
    }
    int getNoOfItems() {
        return numberOfItems;
    }
    int getCost() {
        return itemCost;
    }
    void makeSale() {
        numberOfItems--;
    }
};
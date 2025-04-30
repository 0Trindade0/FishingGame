#pragma once

#ifndef FISH_H
#define FISH_H

#include <iostream>
#include <vector>

class Fish {
private:
    int x, y;
    bool isGold;

public:
    Fish(int posX, int posY, bool goldFish)
        : x(posX), y(posY), isGold(goldFish) {
    }

    // Getters
    int getX() const { return x; }
    int getY() const { return y; }
    bool getIsGold() const { return isGold; }

    // Setters 
    void setPosition(int newX, int newY) { x = newX; y = newY; }
    void setIsGold(bool gold) { isGold = gold; }
};

std::vector<Fish> generateFish();

#endif

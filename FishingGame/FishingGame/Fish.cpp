#include <iostream>
#include <vector>
#include "fish.h"
#include "Random.h"

std::vector<Fish> generateFish() {
    Random::Init();

    int manyFishes;
    std::vector<Fish> fishes;

    do {
        std::cout << "How many fishes in the lake? ";
        std::cin >> manyFishes;
    } while (manyFishes <= 0 || manyFishes > 35);

    for (int i = 0; i < manyFishes; i++) {
        int posX = Random::Int(1, 10);
        int posY = Random::Int(1, 5);
        bool gold = Random::Bool(0.25f); // 25% chance

        fishes.emplace_back(posX, posY, gold);
    }

    return fishes;
}
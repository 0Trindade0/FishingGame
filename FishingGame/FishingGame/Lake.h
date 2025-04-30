#pragma once

#ifndef LAKE_H
#define LAKE_H

#include <vector>
#include <iostream>

class Lake {
private:
    int width;
    int height;
    std::vector<std::vector<bool>> occupiedGrid;
    std::vector<std::vector<bool>> triedGrid;

public:
    // Constructor that creates the lake grid
    Lake(int w, int h);

    void printLake() const;

    // Function to occupy a position in the lake
    void occupyPosition(int x, int y);

    // Function to check if a position is occupied
    bool isOccupied(int x, int y) const;

    // Functions to check and mark a position on the lake
    void tryPosition(int x, int y);
    bool wasTried(int x, int y) const;


    // Functions to get the size of the lake
    int getWidth() const;
    int getHeight() const;
};

#endif

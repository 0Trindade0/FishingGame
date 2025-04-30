#include "Lake.h"
#include <iostream>
#include <iomanip>

// Construtor of the class Lake
Lake::Lake(int w, int h) : width(w), height(h) {
    // Inicializa o grid de ocupação, com todas as posições marcadas como 'false' (não ocupadas)
    occupiedGrid = std::vector<std::vector<bool>>(h, std::vector<bool>(w, false));
    triedGrid = std::vector<std::vector<bool>>(h, std::vector<bool>(w, false));
}

void Lake::printLake() const {
    //  Header with column numbers
   std::cout << "   ";
   for (int col = 0; col < width; ++col) {
       std::cout << std::setw(3) << (col + 1);
   }
   std::cout << std::endl;

   // Every row of the lake
   for (int row = 0; row < height; ++row) {
       std::cout << std::setw(2) << (row + 1) << " "; // number of the row
       for (int col = 0; col < width; ++col) {
           if (triedGrid[row][col]){
               if (occupiedGrid[row][col]){
                   std::cout << "[X]"; //Get the fish
               }else{
                   std::cout << "[N\A]"; //Empty space
               }
           }else{
               std::cout << "[ ]";
           }
       }
       std::cout << std::endl;
   }
}

// Function to mark a position as occupied
void Lake::occupyPosition(int x, int y) {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        occupiedGrid[y][x] = true;  // Mark position (x, y) as occupied
    }
}

// Function to check if a position is occupied
bool Lake::isOccupied(int x, int y) const {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        return occupiedGrid[y][x];  // Returns the status of the position (x, y)
    }
    return false;   // If the position is outside the grid, return 'false'
}

// Marks the position (x, y) as already attempted by the player
void Lake::tryPosition(int x, int y) {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        triedGrid[y][x] = true;
    }
}

// Checks if the position (x, y) has already been attempted by the player
bool Lake::wasTried(int x, int y) const {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        return triedGrid[y][x];
    }
    return false;
}

// Function to get the width of the lake
int Lake::getWidth() const {
    return width;
}

// Function to get the height of the lake
int Lake::getHeight() const {
    return height;
}

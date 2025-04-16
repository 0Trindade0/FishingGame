#include "Lake.h"

// Construtor da classe Lake
Lake::Lake(int w, int h) : width(w), height(h) {
    // Inicializa o grid de ocupação, com todas as posições marcadas como 'false' (não ocupadas)
    occupiedGrid = std::vector<std::vector<bool>>(w, std::vector<bool>(h, false));
}

// Função para marcar uma posição como ocupada
void Lake::occupyPosition(int x, int y) {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        occupiedGrid[x][y] = true;  // Marca a posição (x, y) como ocupada
    }
}

// Função para verificar se uma posição está ocupada
bool Lake::isOccupied(int x, int y) const {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        return occupiedGrid[x][y];  // Retorna o status da posição (x, y)
    }
    return false;  // Se a posição estiver fora do grid, retorna 'false'
}

// Função para obter a largura (width) do lago
int Lake::getWidth() const {
    return width;
}

// Função para obter a altura (height) do lago
int Lake::getHeight() const {
    return height;
}

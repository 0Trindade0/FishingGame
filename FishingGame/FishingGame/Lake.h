#pragma once

#ifndef LAKE_H
#define LAKE_H

#include <vector>

class Lake {
private:
    int width;
    int height;
    std::vector<std::vector<bool>> occupiedGrid;

public:
    // Construtor que cria o grid do lago
    Lake(int w, int h);

    // Função para ocupar uma posição no lago
    void occupyPosition(int x, int y);

    // Função para verificar se uma posição está ocupada
    bool isOccupied(int x, int y) const;

    // Função para obter o tamanho do lago
    int getWidth() const;
    int getHeight() const;
};

#endif

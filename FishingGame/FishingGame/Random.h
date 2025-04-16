#pragma once

#ifndef RANDOM_H
#define RANDOM_H

#include <random>

class Random {
public:
    // Função para inicializar o gerador de números aleatórios
    static void Init();

    // Função para gerar um número inteiro aleatório dentro de um intervalo
    static int Int(int min, int max);

    // Função para gerar um número flutuante aleatório dentro de um intervalo
    static float Float(float min, float max);

    // Função para gerar um valor booleano aleatório
    static bool Bool(float chance = 0.5f);

private:
    // Gerador de números aleatórios
    static std::mt19937 generator;
};

#endif

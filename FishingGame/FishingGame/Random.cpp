#include "Random.h"
#include <random>
#include <ctime>

// Inicializa o gerador de números aleatórios com uma semente baseada no tempo
std::mt19937 Random::generator(static_cast<unsigned int>(std::time(nullptr)));

void Random::Init() {
    // Essa função já está cuidando da inicialização do gerador na primeira vez que for chamada
}

// Função para gerar um número inteiro aleatório dentro de um intervalo [min, max]
int Random::Int(int min, int max) {
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(generator);
}

// Função para gerar um número flutuante aleatório dentro de um intervalo [min, max]
float Random::Float(float min, float max) {
    std::uniform_real_distribution<float> distribution(min, max);
    return distribution(generator);
}

// Função para gerar um valor booleano aleatório com uma chance configurável
bool Random::Bool(float chance) {
    // Gera um número aleatório entre 0.0 e 1.0
    return Float(0.0f, 1.0f) < chance;
}

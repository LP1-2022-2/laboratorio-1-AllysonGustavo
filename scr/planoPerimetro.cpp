#include <cmath>

#include "planoPerimetro.h"

// Figuras Planas

float trianguloPerimetro(float lado1, float lado2, float lado3){
    return lado1 + lado2 + lado3;
}

float retanguloPerimetro(float base, float altura){
    return 2 * (base + altura);
}

float quadradoPerimetro(float lado){
    return 4 * lado;
}

float circuloPerimetro(float raio){
    float pi = 3.1415;
    return 2 * pi * raio;
}
#include <cmath>

#include "planoArea.h"

// Figuras Planas

float trianguloArea(float base){ // Triangulo equilatero
    return (pow(base,2) * sqrt(3)) / 4;
}

float retanguloArea(float base, float altura){
    return base * altura;
}

float quadradoArea(float lado){
    return pow(lado,2);
}

float circuloArea(float raio){
    float pi = 3.1415;
    return pi * pow(raio,2);
}
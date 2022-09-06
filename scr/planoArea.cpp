#include <cmath>

#include "planoArea.h"

// Figuras Planas

float trianguloArea(float base, float altura){
    return (base * altura)/2;
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
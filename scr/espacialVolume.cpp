#include <cmath>

#include "espacialVolume.h"

// Figuras Planas

float piramideVolume(float areaBase, float altura){
    return (1/3) * areaBase * altura;
}

float cuboVolume(float aresta){
    return pow(aresta,3);
}

float paralelepipedoVolume(float aresta1, float aresta2, float aresta3){
    return aresta1 * aresta2 * aresta3;
}

float esferaVolume(float raio){
    float pi = 3.1415;
    return (4/3) * pi * pow(raio,3);
}
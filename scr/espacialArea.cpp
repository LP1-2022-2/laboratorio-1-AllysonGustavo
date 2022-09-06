#include <cmath>

#include "espacialArea.h"

// Figuras Planas

float piramideArea(float areaBase, float areaLateral){
    return areaBase + areaLateral;
}

float cuboArea(float aresta){
    return 6 * pow(aresta,2);
}

float paralelepipedoArea(float lado){
    return pow(lado,2);
}

float esferaArea(float aresta1, float aresta2, float aresta3){
    float pi = 3.1415;
    return pi * pow(raio,2);
}
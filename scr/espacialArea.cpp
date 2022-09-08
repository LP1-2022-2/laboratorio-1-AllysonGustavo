#include <cmath>

#include "espacialArea.h"

// Figuras Planas

float piramideArea(float areaBase, float areaLateral){
    return areaBase + areaLateral;
}

float cuboArea(float aresta){
    return 6 * pow(aresta,2);
}

float paralelepipedoArea(float aresta1, float aresta2, float aresta3){
    return (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3);
}

float esferaArea(float raio){
    float pi = 3.1415;
    return pi * pow(raio,2);
}
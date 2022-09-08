// Compilar
// g++ -Wall - pedantic -Iinclude -o lab1 scr/espacialArea.cpp scr/espacialVolume.cpp scr/planoArea.cpp scr/planoPerimetro.cpp
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using namespace std;

#include "planoArea.h"
#include "planoPerimetro.h"
#include "espacialArea.h"
#include "espacialVolume.h"

int main(){
    // Capturando a string do usuario
    string figura1,figura;
    cin >> figura1;
    // Converter todos os caracteres da string para letras minusculas
    for (int i = 0; i < strlen(figura1); i++) {
        figura = tolower(figura1[i]);
    }
    // Calculando baseado na figura que o usuario digitou
    if (figura == "triangulo" || figura == "triângulo"){
        float base,altura,lado1,lado2,lado3;

        float area = trianguloArea(base,altura);
        float perimetro = trianguloPerimetro(lado1,lado2,lado3);
        cout << "Area do triangulo: " << area << endl;
        cout << "Perimetro do triangulo: " << perimetro << endl;
    }
}
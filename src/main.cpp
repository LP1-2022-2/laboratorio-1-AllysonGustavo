// Compilar
// g++ -Wall -pedantic -Iinclude -o lab1 src/*.cpp
#include <cctype>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>

#include "espacialArea.h"
#include "espacialVolume.h"
#include "planoArea.h"
#include "planoPerimetro.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std;

int main(int argc, char *argv[]) {
  // Capturando a string do usuario
  float area, perimetro, volume, raio;
  string figura;
  figura = argv[1];
  float base = atof(argv[2]);
  float altura = atof(argv[3]);
  float comprimento = atof(argv[4]);

  // -------------------   Figuras Planas   -------------------
  if (figura == "triangulo") {
    area = trianguloArea(base);
    perimetro = trianguloPerimetro(base, altura, comprimento);
    cout << "Area do triângulo: " << area << endl;
    cout << "Perimetro do triângulo: " << perimetro << endl;
  } else if (figura == "retangulo") {
    area = retanguloArea(base, altura);
    perimetro = retanguloPerimetro(base, altura);
    cout << "Area do retangulo: " << area << endl;
    cout << "Perimetro do retangulo: " << perimetro << endl;
  } else if (figura == "quadrado") {
    area = quadradoArea(base);
    perimetro = quadradoPerimetro(base);
    cout << "Area do quadrado: " << area << endl;
    cout << "Perimetro do quadrado: " << perimetro << endl;
  } else if (figura == "circulo") {
    area = circuloArea(base);
    perimetro = circuloPerimetro(base);
    cout << "Area do circulo: " << area << endl;
    cout << "Perimetro do circulo: " << perimetro << endl;

    //-------------------   Figuras Espaciais   -------------------

  } else if (figura == "piramide") {
    area = piramideArea(base);
    volume = piramideVolume(base, altura);
    cout << "Area da pirâmide: " << area << endl;
    cout << "Volume da pirâmide: " << volume << endl;
  } else if (figura == "cubo") {
    raio = base;
    area = cuboArea(raio);
    volume = cuboVolume(raio);
    cout << "Area do cubo: " << area << endl;
    cout << "Volume do cubo: " << volume << endl;
  } else if (figura == "paralelepipedo") {
    area = paralelepipedoArea(base, altura, comprimento);
    volume = paralelepipedoVolume(base, altura, comprimento);
    cout << "Area do paralelepipedo: " << area << endl;
    cout << "Volume do paralelepipedo: " << volume << endl;
  } else if (figura == "esfera") {
    raio = base;
    area = esferaArea(raio);
    volume = esferaVolume(raio);
    cout << "Area da esfera: " << area << endl;
    cout << "Volume do circulo: " << volume << endl;
  } else {
    cout << "A figura não existe" << endl;
  }
}
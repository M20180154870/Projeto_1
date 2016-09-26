#include "retangulo.h"
#include <poligono.h>

/**
 * @brief Retangulo::Retangulo construtor Default da classe retangulo
 */
Retangulo::Retangulo(){
    x = 0;
    y = 0;
    altura = 0;
    largura = 0;
}

/**
 * @brief Retangulo::Retangulo construtor de argumentos variáveis definidos pelo cliente
 * @param _x coordenada x do ponto
 * @param _y coordenada y do ponto
 * @param _altura valor da altura do retangulo
 * @param _largura valor da largura do retangulo
 */
Retangulo::Retangulo(float _x, float _y, float _altura, float _largura){
    x = _x;
    y = _y;
    altura = _altura;
    largura = _largura;

    n = 4;

    inserirRetangulo();
}

/**
 * @brief Retangulo::Retangulo construtor de cópia da classe retangulo
 * @param r objeto da classe retangulo a ser copiado
 */
Retangulo::Retangulo(Retangulo &r){
    n = r.n;
    x = r.x;
    y = r.y;
    altura = r.altura;
    largura = r.largura;

    inserirRetangulo();
}

/**
 * @brief Retangulo::inserirRetangulo função adciona todos os vértices do retangulo
 */
void Retangulo::inserirRetangulo(){
    verticesPoligono[0].setX(x);
    verticesPoligono[0].setY(y);

    verticesPoligono[1].setX(x + largura);
    verticesPoligono[1].setY(y);

    verticesPoligono[2].setX(x + largura);
    verticesPoligono[2].setY(y + altura);

    verticesPoligono[3].setX(x);
    verticesPoligono[3].setY(y + altura);
}

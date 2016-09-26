#ifndef RETANGULO_H
#define RETANGULO_H
#include <poligono.h>


class Retangulo : public Poligono
{
public:
    float x, y, altura, largura;

    /**
     * @brief Retangulo::Retangulo construtor Default da classe retangulo
     */
    Retangulo();

    /**
     * @brief Retangulo::Retangulo construtor de argumentos variáveis definidos pelo cliente
     * @param _x coordenada x do ponto
     * @param _y coordenada y do ponto
     * @param _altura valor da altura do retangulo
     * @param _largura valor da largura do retangulo
     */
    Retangulo(float _x, float _y, float _altura, float _largura);

    /**
     * @brief Retangulo::Retangulo construtor de cópia da classe retangulo
     * @param r objeto da classe retangulo a ser copiado
     */
    Retangulo(Retangulo &r);

    /**
     * @brief Retangulo::inserirRetangulo função adciona todos os vértices do retangulo
     */
    void inserirRetangulo();
};

#endif // RETANGULO_H

#ifndef POLIGONO_H

#include <ponto.h>
#define N 100
#define POLIGONO_H

class Poligono
{
private:
public:
    int n;

    /**
     * @brief verticesPoligono objeto da classe Ponto
     */
    Ponto verticesPoligono[N];
    /**
     * @brief arestasPoligono objeto da classe Ponto
     */
    Ponto arestasPoligono[N];

    /**
     * @brief Poligono::Poligono é o construtor Default.
     */
    Poligono();

    /**
     * @brief Poligono::Poligono é o construtor com argumentos variáveis, iniciadas pelo cliente da classe.
     * @param _n é o número de vértices a serem inseridos.
     */
    Poligono(int _n);

    /**
     * @brief Poligono::Poligono é o construtor de cópia da classe poligono.
     * @param p é o poligono a ser copiado.
     */
    Poligono(Poligono &p);

    /**
     * @brief Poligono::inserirVertices função para inserir um novo vértice
     * @param cx é a coordenada x
     * @param cy é a coordenada y
     */
    void inserirVertices(float cx, float cy);

    /**
     * @brief Poligono::cArestas função que calcula as arestas do polígono dadas as coordenadas
     * @param n contém o número de arestas do polígono
     */
    void cArestas(int n);

    /**
     * @brief Poligono::areaPoligono é a implementação da função que calcula a área do poligono.
     * @return retorna a área do poligono.
     */
    float areaPoligono();

    /**
     * @brief Poligono::centroDeMassa função onde é calculado o centro de massa do polígono
     * @return um objeto p do tipo ponto com a coordendas do centro de massa do polígono
     */
    Ponto centroDeMassa();

    /**
     * @brief Poligono::move translada todos os vértices do polígono através de coordenadas para x e y
     * @param a coordenada x
     * @param b coordenada y
     */
    void move(float a, float b);

    /**
     * @brief Poligono::rotacionaPonto função que rotaciona o polígono em torno de um ponto, dadas as coordenadas desse ponto
     * @param x0 coordenada x do ponto
     * @param y0 coordenada y do ponto
     * @param t ângulo de rotação
     */
    void rotacionaPonto(float x0, float y0, float t);

    /**
     * @brief Poligono::print imprime na tela os vértices do polígono na forma (x1, y1) -> (xn, yn)
     */
    void print();
};

#endif // POLIGONO_H

#ifndef PONTO_H
#define PONTO_H

class Ponto{

  private:
    float x, y;
  public:

    /**
     * @brief Ponto é o construtor Default da classe.
     */
    Ponto();

    /**
     * @brief Ponto é o construtor com argumentos variáveis da classe, iniciada pelo cliente da desta.
     * @param _x é a variável que iniciará o valor de coordenada X do ponto.
     * @param _y é a variável que iniciará o valor de coordenada Y do ponto.
     */
    Ponto(float _x, float _y);

    /**
     * @brief Ponto é o construtor de cópia da classe.
     * @param p é o objeto da classe a ser copiado.
     */
    Ponto(Ponto &p);

    /**
     * @brief Ponto::setX é a função que inicializa a coordenada X do ponto, já que esta é uma informação privada da classe.
     * @param cx é o valor a ser setado na coordenada X.
     */
    void setX(float cx);

    /**
     * @brief Ponto::getX é a função que recupera o valor da variável X, já que esta é uma informação privada da classe.
     * @return retorna o valor da coordenada X do ponto.
     */
    float getX(void);

    /**
     * @brief Ponto::setY é a função que inicializa a coordenada Y do ponto, já que esta é uma informação privada da classe.
     * @param cy é o valor a ser setado na coordenada Y.
     */
    void setY(float cy);

    /**
     * @brief Ponto::getY é a função que recupera o valor da variável Y, já que esta é uma informação privada da classe.
     * @return retorna o valor da coordenada Y do ponto.
     */
    float getY(void);

    /**
     * @brief Ponto::setXY é a função que inicializa as coordenadas X e Y do ponto, já que estas são informações privadas da classe.
     * @param cx é o valor a ser setado na coordenada X.
     * @param cy é o valor a ser setado na coordenada Y.
     */
    void setXY(float cx, float cy);

    /**
     * @brief Ponto::add é a função que adciona as coordenadas de um ponto p1 ao ponto p
     * @param p1 é um objeto do tipo ponto que armazena duas coordenadas
     * @return objeto p com as coordenadas de p1 já adcionadas
     */
    Ponto add(Ponto p1);

    /**
     * @brief Ponto::sub função que subtrai das coordenadas de p, as coordenadas de p1
     * @param p1 obejeto do tipo ponto
     * @return objeto p com as coordenadas já subtraídas
     */
    Ponto sub(Ponto p1);

    /**
     * @brief Ponto::norma função para calcular a distância do ponto a origem
     * @return um número armazenado em d
     */
    float norma();

    /**
     * @brief Ponto::translada função que translada o ponto através de novas coordenadas
     * @param a é a coordenada x
     * @param b é a coordenada y
     */
    void translada(float a, float b);

    /**
     * @brief Ponto::imprime função que imprime na tela o ponto através de suas coordenadas
     */
    void imprime();

};

#endif // PONTO_H


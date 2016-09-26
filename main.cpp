#include <iostream>
#include <ponto.h>
#include <poligono.h>
#include <retangulo.h>
#include <cmath>


using namespace std;

/**
 * @brief main
 * 1 - objeto r da classe retangulo, dadas as coordenadas x e y de um vértice, e a altura e a largura;
 * centroMassa é um objeto da classe Ponto, que terá as coordenadas x e y
 * 2 - Imprime os vertices do retangulo e sua área
 * 3 - Translada o retangulo, modificando as coordenadas de cada vértice
 * 4 - Imprime os vertices do retangulo com as novas coordenadas apos ser movido e calcula a sua area
 * 5 - o objeto centroMassa recebe as coordenadas x e y do centro de massa do retangulo; o retangulo rotaciona em torno de seu centro de massa
 * 6 - Imprime o retangulo apos ser rotacionado e calcula novamente sua área
 * @return
 */

int main(void)
{
    Retangulo r(0,0,3,4);
    Ponto centroMassa;
  //----------------------------------------------------------------------------------------------
    r.print();
    cout << endl;
    cout << "A area do retangulo R eh: " << r.areaPoligono() << endl;
    cout << endl << endl << endl;
  //----------------------------------------------------------------------------------------------
    r.move(-3,4);
  //----------------------------------------------------------------------------------------------
    r.print();
    cout << endl;
    cout << "A area do retangulo R, apos move-lo eh: " << r.areaPoligono() << endl;
    cout << endl << endl << endl;
  //----------------------------------------------------------------------------------------------
    cout << endl << endl;
    centroMassa = r.centroDeMassa();
    r.rotacionaPonto(centroMassa.getX(),centroMassa.getY(),180);
  //----------------------------------------------------------------------------------------------
    r.print();
    cout << endl;
    cout << "A area do retangulo R, apos a sua rotacao eh: " << r.areaPoligono() << endl;
  //----------------------------------------------------------------------------------------------
    return 0;
}


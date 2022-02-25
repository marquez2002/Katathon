#ifndef KATA_H
#define KATA_H
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

/*
    0=?
    1=muerto
    2=vivo
*/

class kata{
    private:
        int matriz[3][3];
        int numVivos=0, numMuertos=0;
    public:
        inline kata(){for(int i=0; i<2; i++){
        matriz[i][0]=0;
        matriz[i][1]=0;
        matriz[i][2]=0;}};
        inline int getValor(int a, int b) {return matriz[a][b];};
        inline void setValor(int valor, int a, int b){matriz[a][b]=valor;};
        void contarPoblacion();
        //void aplicarReglas();
        inline void reset(){numVivos=0;numMuertos=0;};
};

#endif
















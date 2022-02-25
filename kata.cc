#include "kata.h"

void kata::contarPoblacion(){
    for(int i=0; i<3; i++){
        int j=0;
        while(j<=2){
            if(!matriz[1][1]){
                if(matriz[i][j]==1){
                    numMuertos++;
                }
                if(matriz[i][j]==2){
                    numVivos++;
                }
            }
            j++;
        }
    }
}  
/*

void kata::aplicarReglas(){
    if(matriz[1][1]==1){
        if(numVivos==3){
            matriz[1][1]=2;
        }
    }
    if(matriz[1][1]==2){
        if(numVivos<2 || numVivos>3){
            matriz[1][1]=1;
        }
    }
}

*/

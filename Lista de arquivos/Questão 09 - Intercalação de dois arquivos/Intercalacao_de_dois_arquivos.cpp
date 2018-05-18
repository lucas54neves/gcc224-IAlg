#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int main(){

    int iA=0, contadorA=0, iB=0, contadorB=0, fim=0;
    ifstream arquivoA("arquivoA.txt");
    string dadosA[100];
    if (arquivoA){
        while (!arquivoA.eof()){
            arquivoA >> dadosA[iA];
            iA++;
            contadorA++;
        }
    }
    
    ifstream arquivoB("arquivoB.txt");
    string dadosB[100];
    if (arquivoB){
        while (!arquivoB.eof()){
            arquivoB >> dadosB[iB];
            iB++;
            contadorB++;
        }
    }
    fim = contadorA+contadorB;
    ofstream arquivoC("arquivoC.txt");
    for (int i=0; i<fim; i++){
        arquivoC << dadosA[i] << " ";
        arquivoC << dadosB[(fim-1)-i] << " ";
    }

    arquivoA.close();
    arquivoB.close();
    arquivoC.close();
    return 0;
}
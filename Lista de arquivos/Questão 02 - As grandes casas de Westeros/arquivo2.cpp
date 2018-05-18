#include <iostream>
#include <fstream>
using namespace std;
struct casa
{
    string nome;
    string capital;
    string simbolo;
};
int main ()
{
    casa familia[100];
    ofstream arquivo ("casas.txt");
    string dados;
    int i=0;
    while (arquivo)
    {
        arquivo << familia[i].nome << " " << familia[i].capital << " " << familia[i].simbolo << endl;
        i++;
    }
    arquivo.close();
    return 0;
}

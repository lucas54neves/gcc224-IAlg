#include <iostream>
#include <fstream>
using namespace std;

double calculo(int n){
    if (n==1){
        return 1;
    }
    else {
        return (1+1/(calculo(n-1)));
    }
}

int main(){
    int n;
    cin >> n;
    ofstream arquivo("phi.txt");
    if(arquivo){
        cout << calculo(n);
        for (int i=1; i<=n; i++){
            arquivo << calculo(i) << endl;
        }
        arquivo.close();
    }
    return 0;
}

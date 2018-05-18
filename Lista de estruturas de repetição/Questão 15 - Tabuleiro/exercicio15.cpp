#include <iostream>
using namespace std;
int main(){
	int linhas, cont2 = 1, cont1 = 1; 
	cin >> linhas;
	while (cont1 <= linhas){
		if(cont1 % 2 == 1){
			while (cont2 <= linhas){
				if(cont2 % 2 == 1){
					cout << ".";
				} else if(cont2 % 2 == 0){
					cout << "#";
				}
				cont2++;
			}
			cont2 = 1;
		} else if(cont1 % 2 == 0){		
			while(cont2 <= linhas){
				if(cont2 % 2 == 1){
					cout << "#";
				} else if(cont2 % 2 == 0){
					cout << ".";
				}
				cont2++;
			}
			cont2 = 1;
		}
		cont1++;
		cout << endl;
	}
	return 0;
}

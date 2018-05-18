#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int num, aux, cont;
	cin>>num;
	cont=1;
	while (cont<=num) {
		aux=cont;
		if (pow(aux,2)<=num) {
			aux=pow(aux,2);
			cout<<aux<<" ";
		}
		cont++;
	}
	return 0;
}

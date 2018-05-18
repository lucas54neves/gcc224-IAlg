#include <iostream>
using namespace std;
struct coordenada {
	float x;
	float y;
};
struct carro {
	coordenada posicao;
	coordenada velocidade;
};
int main () {
	carro info;
	cin>>info.posicao.x>>info.posicao.y;
	cin>>info.velocidade.x>>info.velocidade.y;
	float tempo;
	cin>>tempo;
	info.posicao.x+=info.velocidade.x*tempo;
	info.posicao.y+=info.velocidade.y*tempo;
	cout<<info.posicao.x<<"\t"<<info.posicao.y<<endl;
	return 0;
}

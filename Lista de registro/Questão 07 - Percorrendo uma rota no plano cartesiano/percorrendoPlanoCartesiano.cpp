#include <iostream>
#include <math.h>
using namespace std;
struct pontos {
	double x, y;
};
int main () {
	pontos info[5];
	for (int i = 0; i < 5; i++)
	{
		cin>>info[i].x>>info[i].y;
	}
	int rota[5];
	for (int i = 0; i < 5; i++)
	{
		cin>>rota[i];
	}
	double distancia1, distancia2, distancia3, distancia4, distanciaTotal;
	distancia1=sqrt(pow((info[rota[1]].x-info[rota[0]].x), 2)+pow((info[rota[1]].y-info[rota[0]].y), 2));
	distancia2=sqrt(pow((info[rota[2]].x-info[rota[1]].x), 2)+pow((info[rota[2]].y-info[rota[1]].y), 2));
	distancia3=sqrt(pow((info[rota[3]].x-info[rota[2]].x), 2)+pow((info[rota[3]].y-info[rota[2]].y), 2));
	distancia4=sqrt(pow((info[rota[4]].x-info[rota[3]].x), 2)+pow((info[rota[4]].y-info[rota[3]].y), 2));
	distanciaTotal=distancia1+distancia2+distancia3+distancia4;
	cout<<distanciaTotal;
	return 0;
}

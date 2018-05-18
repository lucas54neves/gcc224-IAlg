#include <iostream>
using namespace std;
struct hidrocarboneto
{
	int C;
	int H;
};
int calcularMassaMolecular (hidrocarboneto* ponteiro)
{
	int massa;
	massa = (ponteiro->C)*12 + (ponteiro->H)*1;
	return massa;
}
int main ()
{
	hidrocarboneto* composto = new hidrocarboneto;
	cin >> composto->C >> composto->H;
	//cin >> (*composto).C >> (*composto).H;
	cout<<calcularMassaMolecular(composto)<<endl;
	delete composto;
	return 0;
}

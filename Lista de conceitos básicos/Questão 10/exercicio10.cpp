#include <iostream>

using namespace std;

int main () {
	int producao, comum, luxo;

	cin >> producao;

	luxo = producao * 1 / 3;
	comum = producao - luxo;
	comum = comum + (producao - comum - luxo);

	cout << comum << endl;
	cout << luxo << endl;
	
	return 0;
}

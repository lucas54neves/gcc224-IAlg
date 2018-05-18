#include <iostream>
using namespace std;
int main ()
{
	int matrizA[2][3], matrizB[3][2], matrizC[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin>>matrizA[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin>>matrizB[i][j];
		}
	}
	matrizC[0][0]=(matrizA[0][0]*matrizB[0][0])+(matrizA[0][1]*matrizB[1][0])+(matrizA[0][2]*matrizB[2][0]);
	matrizC[0][1]=(matrizA[0][0]*matrizB[0][1])+(matrizA[0][1]*matrizB[1][1])+(matrizA[0][2]*matrizB[2][1]);
	matrizC[1][0]=(matrizA[1][0]*matrizB[0][0])+(matrizA[1][1]*matrizB[1][0])+(matrizA[1][2]*matrizB[2][0]);
	matrizC[1][1]=(matrizA[1][0]*matrizB[0][1])+(matrizA[1][1]*matrizB[1][1])+(matrizA[1][2]*matrizB[2][1]);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout<<matrizC[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

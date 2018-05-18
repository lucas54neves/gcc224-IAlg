#include <iostream>
using namespace std;
int sucessor (int n1)
{
	return n1 + 1;
}
int antecessor (int n2)
{
	return n2 - 1;
}
int soma (int x, int y)
{
	if ((x>0&&y>0)||(x<0&&y>0))
	{
		return soma(sucessor(x), antecessor(y));
	}
	else
	{
		if ((x>0&&y<0)||(x<0&&y<0))
		{
			return soma(antecessor(x), sucessor(y));
		}
		else
		{
			if (x==0)
			{
				return y;
			}
			else
			{
				return x;
			}
		}
	}
}
int main ()
{
	int num1, num2;
	cin>>num1>>num2;
	cout<<soma(num1, num2)<<endl;
	return 0;
}

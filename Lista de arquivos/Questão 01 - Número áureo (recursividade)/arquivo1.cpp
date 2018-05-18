#include <iostream>
#include <fstream>
using namespace std;
double aureo (int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return (1+1/(aureo(n-1)));
    }
}
int main ()
{
    int num;
    cin>>num;
    ofstream arquivo ("phi.txt");
    cout<<aureo(num);
    for (int i = 1; i <= num; i++)
    {
        arquivo << aureo(i) << endl;
    }
    return 0;
}

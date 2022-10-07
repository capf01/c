#include <iostream>
#include <cstring>
using namespace std;
int main()
{
char palavra1[100], palavra2[100];
int resultado;
cout << "entre com uma palavra: ";
cin >> palavra1;
cout << "entre outra palavra: ";
cin >> palavra2;
resultado = strcmp(palavra1, palavra2);
if (resultado == 0)
cout << "igual" << endl;
else if (resultado > 0)
cout << "o primeiro e’ maior" << endl;
else
cout << "o segundo e’ maior" << endl;
}

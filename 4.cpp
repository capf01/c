
#include <iostream>
using namespace std;

int main()
{
int num,r;
cout << "Digite sua data nascimento: ";
cin >> num;
if(num>=1900&&num<=2020){

r=2020-num;
	cout << "Voce tem " <<r<<" anos"<< endl;
}
else
{
	cout << "digite uma data de nascimento valida" << endl;
}
}



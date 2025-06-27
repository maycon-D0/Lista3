#include <iostream>
using namespace std;

int main()
{
	double valor1;
	double valor2;
	cout<<"digite o primeiro valor:"<<endl;
	cin>>valor1;
	do
	{
	cout<<"Digite o segundo valor:"<<endl;
	cin>>valor2;
	if(valor1>valor2)
	cout<<"o valor( "<<valor2<<") eh menor que o primeiro valor " << endl;
else if(valor1==valor2)
		cout<<"o valor ("<<valor2<<" )eh igual ao primeiro valor " << endl;
	
	}
	while (valor2<=valor1);
	cout<<"o segundo valor  eh maior que o primeiro valor"<<endl;

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	int a ;
	int b;
	do
	{
	cout<<"digite um valor:"<<endl;
	cin>>x;
	if( x>0)
	{
	cout << x << " o valor e positivo" << endl;
	cout <<"tabuada do "<<x<<endl;
	cout <<"digite o intervalo da tabuada"<<endl;
	cout<<"de :"<<endl;
	cin>>a;
do{
    cout<<"ateh:"<<endl;
	cin>>b;
	if(b<=a)
	{cout <<"intervalo errado o valor de b deve ser maior que a"<<endl;
	cout<<"digite o intervalo da tabuada de "<< a<<endl;
}
}while(b<=a);
	y=b;
	do{
	cout<<x<<"×"<<y<<"="<<
	x*y<<endl;
	y=y-1;

	}
	while (y>=a);
	
	cout<<endl;
	}	
else
{cout<<"valor negativo ou zero digitado"<<endl;	

	    cout <<endl;
	}
}
while (x >0);

	

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int i;
	do
	{
	cout<<"digite um valor:"<<endl;
	cin>>i;
	if( i>0)
	
	    cout << i << " o valor e positivo" << endl;
	}
	while (i >0);
	cout<<"valor negativo ou zero digitado"<<endl;	
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	do{
	cout<<"digite um valor:"<<endl;
	cin>>x;
	if( x>0){
	
	    cout << x << " o valor e positivo" << endl;

	
	cout <<"tabuada do "<<x<<endl;
	y=1;
	do{
	cout<<x<<"×"<<y<<"="<<
	x*y<<endl;
	y=y+1;

	}
	while (y<=10);
	
	cout<<endl;
}
else
{cout<<"valor negativo ou zero digitado"<<endl;	

	    cout <<endl;
	}
}
while (x >0);
cout <<endl;
	

    return 0;
}
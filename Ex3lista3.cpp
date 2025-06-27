#include <iostream>
using namespace std;

int main()
{
string sex;
do {
cout<<"digite o seu sexo:( f para feminino m para masculino)"<<endl;
	cin>>sex;
}
	while (sex!="f"&&sex!="m");
cout<<"sexo correto "<<sex<<endl;

	return 0;
}
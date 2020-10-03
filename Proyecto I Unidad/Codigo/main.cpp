#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    	int parametro=0;
while (parametro !=3)
{
    system("cls");
    cout<<"***BIENVENIDO**"<<endl;          //Carlos Roberto Rivera 20142005529
    cout<<endl;
    cout<<"1 = ***STARSHIP**"<<endl;
	cout<<"2 = ***SNAKE***"<<endl;
    cout<<"3 = **Salir**"<<endl;
    cout<<endl;
    cout<<"Ingrese la opcion deceada:"<<endl;
	cin>>parametro;

    if(parametro==1)
	{
		starShip();
	}
	
	if(parametro==2)
	{
		snake();
	}
    }


    return 0;
}

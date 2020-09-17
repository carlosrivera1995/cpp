#include <iostream>
#include <string>
using namespace std;

string productos[5][3]= {
{"001","Iphone X", "0"},
{"002","Laptop Dell","5"},
{"003","Monitor Samsung","2"},
{"004","Mouse","100"},
{"005","Headset","25"},
};

void listarproductos(){
    system("cls");
      cout<<endl;
        cout<<"Listado de Producto"<<endl;
        cout<<"********************"<<endl;
        cout<<"codigo, descripcion y existencia"<<endl;
        cout<<"********************"<<endl;
        for (int i=0;i<5;i++)
        {
            cout<< productos[i][0]<< " ! "<< productos[i][1]<<" ! "<<productos[i][2]<<endl;
        }
}

void movimientoinventario(string codigo, int cantidad, string tipomovimiento){
    for (int i =0;i<5;i++)
    {
        if(productos[i][0] == codigo){
            if(tipomovimiento == "+"){
            productos[i][2] = to_string (stoi(productos[i][2]) + cantidad);
            } else{
            productos[i][2] = to_string (stoi(productos[i][2]) - cantidad);
            }
        }
    }
}

void ingresodeinventario(){
    string codigo = "";
    int cantidad = 0;
    system("cls");
    cout<<endl;
    cout<<"Ingreso de producto al inventario"<<endl;
    cout<<"*********************************"<<endl;
    cout<<"Ingrese el codigo del producto"<<endl;
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese la cantidad del producto"<<endl;
    cin>>cantidad;
    cout<<endl;
  
    movimientoinventario(codigo, cantidad, "+");
}

void salidadeinventario(){
    string codigo = "";
    int cantidad = 0;
    system("cls");
    cout<<endl;
    cout<<"salida de producto al inventario"<<endl;
    cout<<"*********************************"<<endl;
    cout<<"Ingrese el codigo del producto"<<endl;
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese la cantidad del producto"<<endl;
    cin>>cantidad;
    cout<<endl;
  
    movimientoinventario(codigo, cantidad, "-");
}
int main (int argc , char const *argv [])
{
 
    int opcion=0;

    while(true)
    {
    system("cls");
    cout<<endl;
    cout<<"*********************"<<endl;
    cout<<"Sistema de inventario"<<endl;
    cout<<endl;
    cout<<"1 - Productos"<<endl;
    cout<<"2 - Ingreso de inventario"<<endl;
    cout<<"3 - Salida de inventario"<<endl;
    cout<<"0 - Salir"<<endl;
    cout<<"Ingrese una opcion del menu:"<<endl;
    cout<<endl;
    cin>>opcion;

    switch (opcion)
    {
        case 1:
        listarproductos();
        break;
        
        case 2:
        ingresodeinventario();
        break;

        case 3:
        salidadeinventario();
        break;

        default:
        break;
     }
     system("pause");

     if (opcion == 0 ) {
         break;
     }
     }
  
}
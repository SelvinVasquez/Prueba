#include <iostream>
using namespace std;

int main(){
    int precio;
    int descuento;
    int preciofinal;
    cout << "Ingrese el precio de su producto";
    cin >> precio;
    cout<<"Ingrese el porcentje de descueto de su producto";
    cin>>descuento;
    if (descuento >=0 && descuento<=100){
        preciofinal=precio-(precio*descuento/100);
        cout<<"El precio despues del descuento es: " <<preciofinal<<endl;
    }else{
        cout<<"El numero de descuento ingresado es invalido. Debe estar entre 0 y 100"<<endl;
    }

}
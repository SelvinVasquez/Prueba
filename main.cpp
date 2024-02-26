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

/*#include <iostream>
using namespace std;

    int main(){
        int numero, i=0;
        cout<<"Ingrese un numero";
        cin>>numero;
        while (i <= numero){
            if(i % 2 ==0){0
                cout<<i<<endl;
            }
            i++;
        }
        return 0;
        }
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese la cantidad de variables que desea ver ";
    cin >> n;
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
        cout << suma << ", ";
    }

    cout << "..." <<endl;

    return 0;
}*/
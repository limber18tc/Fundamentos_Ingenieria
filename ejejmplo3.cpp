#include <conio.h>
using namespace std;

//1. Diseño de la funcion
int sumar(int num1, int num2)
int main (){
    int v1, v2, total;
    cout << "Ingrese un numero: " <<endl;
    cin >> v1;
    cout << "Ingrese un numero: " <<endl;
    cin >> v2;

    //3. Llamada a la funcion
    total = sumar(v1, v2);
    getch();
    return 0;

}
//2. Implementacion de la funcion
int sumar(int num1, int num2)
return num1 + num2;
/*
EJERCICIO 3 - AREA DE UN RECTANGULO
Autor : Erika Tutillo
Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
• leer los datos,
• calcular el área,
• mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.
*/

#include <iostream>
using namespace std;

void leerDatos (double &base, double &altura);
double calcularArea (double base, double altura);
void mostrarResultado (double area);

int main (){
    double base, altura;
    double area;

    leerDatos (base, altura);

    area = calcularArea (base,altura);

    mostrarResultado (area);

}

void leerDatos (double &base, double &altura){
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
}

double calcularArea (double base, double altura){
    return base * altura;
}

void mostrarResultado (double area){
    cout << " === RESULTADOS === " << endl;
    cout << "Area: " << area;

}

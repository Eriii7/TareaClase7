/*
EJERCICIO 4 - INTERCAMBIO DE DOS NUMEROS
Autor : Erika Tutillo
Desarrolla un programa que permita ingresar dos números enteros y luego
intercambiar sus valores usando una función.
El programa debe:
• mostrar los valores antes del intercambio,
• realizar el intercambio usando una función,
• mostrar los valores después del intercambio.
*/
#include <iostream>
using namespace std;

// Prototipos de funciones
void leerNumeros(int &a, int &b);
void mostrarNumeros(int a, int b, string mensaje);
void intercambiar(int &a, int &b);

int main() {
    int n1, n2;

    leerNumeros(n1, n2);
   
    mostrarNumeros(n1, n2, "Antes del intercambio");

    intercambiar(n1, n2);

    mostrarNumeros(n1, n2, "Despues del intercambio");

    return 0;
}

void leerNumeros(int &a, int &b) {
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
}

void mostrarNumeros(int a, int b, string mensaje) {
    cout << "\n--- " << mensaje << " ---" << endl;
    cout << "Numero 1: " << a << endl;
    cout << "Numero 2: " << b << endl;
}

// Función para realizar el intercambio por referencia
void intercambiar(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}
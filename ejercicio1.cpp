/*
Autor : Erika Tutillo
EJERCICIO 1 - SUMA Y PROMEDIO DE 3 NUMEROS
Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
• leer los números,
• calcular la suma,
• calcular el promedio,
• mostrar los resultados.
*/
#include <iostream>
using namespace std;

void leerTresNumeros(int &a, int &b, int &c);
int calcularSuma(int a, int b, int c);
double calcularPromedio(int suma);
void mostrarResultados(int suma, double promedio);

int main () {
    int n1, n2, n3;

    int suma;
    double promedio;

    leerTresNumeros (n1, n2, n3);

    suma = calcularSuma (n1, n2, n3);

    promedio = calcularPromedio (suma);

    mostrarResultados (suma, promedio);

}

void leerTresNumeros (int &a,int &b, int &c){
    cout <<  "Ingrese 3 numeros enteros :";
    cin >> a >> b >> c;
}

int calcularSuma (int a, int b, int c){
    return a + b + c;

}

double calcularPromedio (int suma ) {
    return suma / 3.0;
}

void mostrarResultados (int suma, double promedio){
    cout << "Resultados: " << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}
/*
Autor : Erika Tutillo
Desarrolla un proa ><grama que permita ingresar dos números enteros y determine cuál
de los dos es mayor.
El programa debe estar modularizado usando funciones para:
• leer los datos,
• comparar los valores,
• mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.
*/
#include <iostream>
using namespace std;

void leerDosNumeros(int &a, int &b);
int compararNumeros(int a, int b);
void mostrarResultados(int estado, int a, int b);

int main (){
    int n1, n2;
    
    leerDosNumeros (n1, n2);
    int resultado = compararNumeros (n1, n2);
    mostrarResultados (resultado, n1, n2);

}

void leerDosNumeros (int &a, int &b){
cout << "Ingrese dos numeros enteros: ";
cin >> a >> b;
}

int compararNumeros (int a, int b){
    if (a > b) {
        return 1;
    }
    else if (b > a) {
        return 2;
    }
    else {
        return 0;
    }
}

void mostrarResultados(int estado, int a, int b) {
    if (estado == 1) {
        cout << a << " es mayor que " << b << endl;
    }
    else if (estado == 2) {
        cout << b << " es mayor que " << a << endl;
    }
    else {
        cout << a << " es igual que " << b << endl;
    }
}


/*
EJERCICIO 5 - COMTADOR ACTUALIZADO CON REFERENCIA
Autor : Erika Tutillo
Desarrolla un programa que pida al usuario un número entero positivo n y luego
incremente un contador desde 0 hasta n, usando una función que actualice el valor
del contador.
El objetivo es que practiques el uso de paso por referencia para modificar una
variable desde una función.
El programa debe mostrar el valor del contador en cada incremento.
*/

#include <iostream>
using namespace std;

// Prototipos de funciones
void leerLimite(int &n);
void incrementarContador(int &contador);
void mostrarContador(int contador);

int main() {
    int n;
    int contador = 0;

    leerLimite(n);
    mostrarContador(contador);

    while (contador < n) {
        incrementarContador(contador);
        mostrarContador(contador);
    }

    return 0;
}

void leerLimite(int &n) {
    cout << "Ingrese un numero entero positivo : ";
    cin >> n;
}

void incrementarContador(int &contador) {
    contador++;
}

void mostrarContador(int contador) {
    cout << "Contador: " << contador << endl;

}
#include <iostream>
using namespace std;

int main() {
    char tipo;
    int dias;
    float km, monto = 0;

    // Leer los datos
    cout << "Ingrese el tipo de auto (C, M, G): ";
    cin >> tipo;
    tipo = toupper(tipo);

    cout << "Ingrese la cantidad de dias: ";
    cin >> dias;

    cout << "Ingrese la cantidad de kilometros recorridos: ";
    cin >> km;

    // Calcular el costo según el tipo de auto
    if (tipo == 'C')
        monto = 15 * dias + 20 * km;
    else if (tipo == 'M')
        monto = 20 * dias + 30 * km;
    else if (tipo == 'G')
        monto = 30 * dias + 40 * km;
    else
        cout << "Tipo de auto no valido" << endl;

    // Mostrar el resultado si el tipo es válido
    if (tipo == 'C' || tipo == 'M' || tipo == 'G')
        cout << "Monto a pagar: " << monto << endl;

    return 0;
}

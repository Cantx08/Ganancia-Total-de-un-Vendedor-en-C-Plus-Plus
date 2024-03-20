#include <iostream>

using namespace std;

int main()
{
    cout << "10 Programa que calcula la comision y el sueldo de un vendedor" << endl;
    double sueldo, v1, v2, v3, comision, valorTotal;

    // Ingresar el valor del sueldo y los valores obtenidos por las ventas realizadas.
    // Nota: Los valores deben ser mayores a 0!
    cout << "Ingrese el sueldo basico (USD): ";
    cin >> sueldo;
    cout << "Ingrese el valor de la venta V1 (USD): ";
    cin >> v1;
    cout << "Ingrese el valor de la venta V2 (USD): ";
    cin >> v2;
    cout << "Ingrese el valor de la venta V3 (USD): ";
    cin >> v3;

    // Calcular la comisión la cual es el 10% de la suma de las ventas.
    comision = 0.1 * (v1 + v2 + v3);
    // Calcular el valor total
    valorTotal = sueldo + comision;
    cout << endl;
    // Mostrar el resultado en consola.
    cout << "El vendedor recibira por comision la cantidad de " << comision << " USD." << endl;
    cout << "El valor total que percibira el vendedor es de " << valorTotal << " USD.";
    return 0;
}

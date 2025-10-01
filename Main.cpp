/* 

1-Escribe un programa que pida al usuario que escriba dos números, que obtenga los números
del usuario e imprima la suma, producto, diferencia y cociente de los números.

2-Escribe un programa que calcule la media de 5 notas introducidas por un usuario.

3- Escribe un programa que le pida al usuario dos números enteros y compruebe si uno es múltiplo de otro.

*/

//Declaración librerías
#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>    


#include "Operacion.cpp"
#include "Triangulo.cpp"
#include "AdvanceMath.cpp"
#include "Games.cpp"
#include "TimeFunctions.cpp"



using namespace std;

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <cmath>

using namespace std;


// ------------------------------ MAIN ------------------------------

int main() {
    srand(time(0)); // semilla para números aleatorios
    int opcion;

    do {
        cout << "\n=== MENU DE EJERCICIOS ===\n";
        cout << "1. Operaciones con dos numeros (suma, producto, diferencia, cociente)\n";
        cout << "2. Calculo de la media de 5 notas\n";
        cout << "3. Comprobar si un numero es multiplo de otro\n";
        cout << "4. Dibujar un triangulo con pisos de asteriscos\n";
        cout << "5. Juego de adivinar numero aleatorio (1-100)\n";
        cout << "6. Calculos con factoriales y series (e y e^x)\n";
        cout << "7. Juego piedra, papel o tijera (mejor de 3)\n";
        cout << "8. Generar franjas horarias de 30 minutos con <chrono>\n";
        cout << "0. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "\n[EJERCICIO 1]\n";
                double a, b;
                Operacion::suma();
                Operacion::producto();
                Operacion::diferencia();
                Operacion::cociente();
                break;
            }
            case 2: {
                cout << "\n[EJERCICIO 2]\n";
                Operacion::media();
                break;
            }
            case 3: {
                cout << "\n[EJERCICIO 3]\n";
                Operacion::multiplo();
            }
            case 4: {
                cout << "\n[EJERCICIO 4]\n";
                Triangulo::obtenerPisos();
                break;
            }
            case 5: {
                cout << "\n[EJERCICIO 5]\n";
                Operacion::adivinarNumero();
                break;
            }
            case 6: {
                AdvanceMath::getEulerNumber();
                AdvanceMath::powerOfE();
                break;
            }
            case 7: {
                cout << "\n[EJERCICIO 7]\n";
                Games::playPaperScissorsRock();
                break;
            }
            case 8: {
                cout << "\n[EJERCICIO 8]\n";
                TimeFunctions::retornaFranjas();
                break;
            }
            case 0:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion invalida\n";
        }
    } while (opcion != 0);

    return 0;
}

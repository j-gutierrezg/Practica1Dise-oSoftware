
#include <iostream>



// FALTA POR AÑADIR LA PARTE DE LOS ESPACIOS Y CENTRADO DEL TRIANGULO
class Triangulo{
    public:
        static void obtenerPisos(){
            int pisos;
            std::cout << "Introduce el número de pisos del triángulo: ";
            std::cin >> pisos;
            int cantidad = 1;
            int espacios = pisos - 1;
           for(int i = 0; i< pisos;i++){
                for (int j = 0; j < cantidad; j++) {
                    
                    
                    std::cout << "*";
                    
                }
                cantidad += 2;
                std::cout << std::endl;
           }
            
        }
    
};
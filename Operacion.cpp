//Declaración librerías
#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <cmath>
/*
//declaración funciones
std::vector<float> obtenerNumeros(int cantidad);
void suma(std::vector<float> nums);
void media(std::vector<float> nums);
void producto(std::vector<float> nums);
void cociente(std::vector<float> nums);
void diferencia(std::vector<float> nums);

*/


class Operacion{
    public:

    static std::vector<float> obtenerNumeros(int cantidad) {

    std::vector<float> nums(cantidad);
    std::cout << "Introduce " << cantidad << " números:\n";
    //lo recorre hasta llenar la cantidad
    for (int i = 0; i < cantidad; ++i) {
        //introduce los numeros uno a uno
        std::cin >> nums[i];
    }
    //Retorna el vector lleno
    return nums;
}




static void suma(){
    std::vector<float> nums = obtenerNumeros(2);
    float total = 0;
    for (int num : nums) {
        total += num;
    }

    std::cout << "La suma es : " << total << std::endl;
}


static void producto(){

    std::vector<float> nums = obtenerNumeros(2);

    float total = 0;
    for (int num : nums) {
        if (total == 0){
            total = num;
        } else {
            total *= num;
        }
    }
    std::cout << "El producto es: " << total << std::endl;
}


static void cociente(){

    std::vector<float> nums = obtenerNumeros(2);
    if (nums[1] != 0){
        float total = nums[0] / nums[1];
        std::cout << "El cociente es: " << total << std::endl;
    } else {
        std::cout << "No se puede dividir entre 0" << std::endl;
    }
}



static void diferencia(){

    std::vector<float> nums = obtenerNumeros(2);


    float total = nums[0] - nums[1];
    std::cout << "La diferencia es: " << total << std::endl;
}


static void media (){
    int cantidad;
    std::cout << "¿Cuántos números quieres introducir? ";
    std::cin >> cantidad;
    std::vector<float> nums = obtenerNumeros(cantidad);
    float total = 0;
    for (int num : nums){
        total += num;        
    }
    total = total / nums.size();
    std::cout << "La media es: " << total << std::endl;
}

static void multiplo(){

    try{

        int a, b;
        std::cout << "Introduce dos números enteros: ";
        std::cin >> a >> b;

        if ((a != 0 && b !=0) && a % b == 0) {
            std::cout << a << " es múltiplo de " << b << std::endl;
        }
        else {
            std::cout << a << " no es múltiplo de " << b << std::endl;
        }
    }catch(std::exception& e){
        std::cout << "Ha ocurrido un erro" << e.what() << std::endl;
    }
    
    
}


static void adivinarNumero(){
    int randomNumber = rand() % 100 + 1; // Número aleatorio entre 1 y 100
    int numeroIntentos = 0;

    std::cout << "¡Bienvenido al juego! Introduce un número para empezar" << std::endl;
     while(true){
        int intento;
        std::cin >> intento;
        numeroIntentos++;
        try{
        if (intento == randomNumber){
            std::cout << "¡Felicidades! Has adivinado el número en " << numeroIntentos << " intentos." << std::endl;
            break;
        } else if (intento < randomNumber){
            std::cout << "El número es mayor. Inténtalo de nuevo." << std::endl;
        } else {
            std::cout << "El número es menor. Inténtalo de nuevo." << std::endl;
        }
        }catch(std::exception& e){
        std::cout << "Ha ocurrido un error: " << e.what() << std::endl;
        
     }
}
}


};








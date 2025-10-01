#include <iostream>

class AdvanceMath {
public:
   


    static int factorial(int num){
        if (num < 0) {
            throw std::invalid_argument("Introduce un valor mayor a 0 (no negativo)");
        }
        int result = 1;
        for (int i = 1; i <= num; ++i) {
            if (i-1 !=0)
            {
            result *= i;
            }
            
        }
        return result;

    }
    static float getEulerNumber() 
    {   
        std::cout << "Introduce el numero de terminos para aproximar e: ";
        int num;
        std::cin >> num;
        if (num<0){
            throw std::invalid_argument("Introduce un valor mayor a 0 (no negativo)");
        }else{
            float euler = 0.0;
            for (int i = 0; i <= num; ++i) {
                //no hace falta el if para el 0 ya que no suma nada
                euler += 1.0 / factorial(i);
            }
            std::cout << "El numero euler es aproximadamente: " << euler << std::endl;
            return euler;
        }
        
    }

    static float powerOfE() {
        float eulerRaised = 0.0;
        std::cout << "Introduce el exponente para calcular e^x: ";
        float exponent;
        std::cin >> exponent;

        //Usamos la serie de Taylor para aproximar e^x
        //e^x = Σ (x^n) / n! desde n=0
        //Cuantos más términos (mayor n), mejor aproximación
        for (int i = 0; i < exponent; ++i) {
            //El exponente de exponente (e^x) es i, lo mismo que el factorial
            eulerRaised += (pow(exponent, i)) / factorial(i);
        }
        std::cout << "e elevado a " << exponent << " es aproximadamente: " << eulerRaised << std::endl;
        return eulerRaised;
    }
};



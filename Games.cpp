#include <iostream>



class Games
{
public:
    static void playPaperScissorsRock(){
        int contadorVictorias = 0;
        int contadorDerrotas = 0;
        int ronda = 0;
        while (contadorDerrotas <= 3 || contadorVictorias <= 3){
                ronda++;
                std::cout << "Ronda " << ronda << ": Elige piedra, papel o tijera" << std::endl;
                std::string intento;
                std::cout << "Piedra(r),papel(p) o tijera (s)" << std::endl;
                getline(std::cin, intento);
                std::string opciones[3] = {"r","p","s"};
                std::string computerChoice = opciones[rand() % 3];
                std::cout << "La computadora ha elegido: " << computerChoice << std::endl;
                if (intento == computerChoice){
                    std::cout << "Empate" << std::endl;
                } else if ((
                intento == "r" && computerChoice == "s") 
                || (intento == "p" && computerChoice == "r") 
                || (intento == "s" && computerChoice == "p"))
                {
                    std::cout << "Has ganado" << std::endl;
                    contadorVictorias++;
                } else {
                    std::cout << "Has perdido" << std::endl;   
                    contadorDerrotas++;
                }

                if(contadorVictorias == 3){
                    std::cout << "¡Felicidades! Has ganado el juego." << std::endl;
                    break;
                } else if (contadorDerrotas == 3){
                    std::cout << "Lo siento, has perdido el juego." << std::endl;
                    break;
                }
            }
            
           

        }


        


};

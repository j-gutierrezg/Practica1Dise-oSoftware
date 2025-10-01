#include <iostream>
#include <string>
#include <chrono>

class TimeFunctions {
private:
// Recibe un string con formato HH:MM y devuelve los minutos que representan dicha hora
static std::chrono::minutes parse_hora(const std::string& s) {
    int h = std::stoi(s.substr(0, 2));
    int m = std::stoi(s.substr(3, 2));
    return std::chrono::hours{h} + std::chrono::minutes{m};
}

// Convierte minutos a HH:MM
static std::string to_string_hora(std::chrono::minutes t) {
    auto h = std::chrono::duration_cast<std::chrono::hours>(t).count();
    auto m = (t % std::chrono::hours{1}).count();
    std::string hh = (h < 10 ? "0" : "") + std::to_string(h);
    std::string mm = (m < 10 ? "0" : "") + std::to_string(m);
    return hh + ":" + mm;
}

public:
#include <iostream>
#include <string>
#include <chrono>



static void retornaFranjas() {
    std::string inicio_str, fin_str;

    std::cout << "Introduce hora de inicio (HH:MM): ";
    std::cin >> inicio_str;
    std::cout << "Introduce hora de fin (HH:MM): ";
    std::cin >> fin_str;

    auto inicio = parse_hora(inicio_str);
    auto fin = parse_hora(fin_str);

    std::cout << "Slots generados:" << std::endl;

    for (auto t = inicio; t <= fin; t += std::chrono::minutes{30}) {
        std::cout << to_string_hora(t) << std::endl;
    }

}


};
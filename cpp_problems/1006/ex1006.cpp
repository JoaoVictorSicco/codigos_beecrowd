#include <iostream>
#include <iomanip>

int main()
{
    // Pesos
    float peso1 = 2, peso2 = 3, peso3 = 5;

    // Notas
    float A,B,C;  

    // Média
    double MEDIA;

    std::cin >> A >> B >> C;
    MEDIA = (peso1*A+peso2*B+peso3*C)/10;
    std::cout << std::fixed << std::setprecision(1) << "MEDIA = " << MEDIA << std::endl;
    return 0;
}
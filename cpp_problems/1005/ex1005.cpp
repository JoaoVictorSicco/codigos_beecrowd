#include <iostream>
#include <iomanip>

int main()
{
    // Pesos
    float peso1 = 3.5, peso2 = 7.5;

    // Notas
    float A,B;  

    // Média
    double MEDIA;

    std::cin >> A >> B;
    MEDIA = (peso1*A+peso2*B)/11;
    std::cout << std::fixed << std::setprecision(5) << "MEDIA = " << MEDIA << std::endl;
    return 0;
}
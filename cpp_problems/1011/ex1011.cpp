#include <iostream>
#include <iomanip>


int main()
{
    // Entrada
    float raio;
    double volume, pi = 3.14159;

    std::cin >> raio;
    volume = (4/3.0)*pi*raio*raio*raio;

    // Saida
    std::cout << std::fixed << std::setprecision(3) << "VOLUME = " << volume << std::endl;
    return 0;
}
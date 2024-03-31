#include <iostream>
#include <iomanip>

int main()
{
    double area, raio, pi = 3.14159;
    
    std::cin >> raio;
    area = pi*raio*raio;
    std::cout << std::fixed << std::setprecision(4) << "A=" << area << std::endl;
    return 0;
}
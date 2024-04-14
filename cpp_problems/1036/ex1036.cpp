#include <iostream>
#include <iomanip>
#include <cmath>

#define EXPONTE 2

int main()
{
    float A,B,C,R1,R2, delta, raiz_delta;

    // Entrada
    std::cin >> A >> B >> C;
    delta = std::pow(B,EXPONTE) - 4*A*C;
    raiz_delta = std::sqrt(delta);    

    if(A<=0 || delta <0) {std::cout << "Impossivel calcular" << std::endl;}

    else
    {
        R1 = ((-B+raiz_delta)/(2.0*A));
        R2 = ((-B-raiz_delta)/(2.0*A));
        std::cout << std::fixed << std::setprecision(5) << "R1 = " << R1 << "\nR2 = " << R2 << std::endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>

int main()
{
    int numero, horas_trabalhadas;
    float valor_hora, salario;

    std::cin >> numero >> horas_trabalhadas >> valor_hora;
    salario = valor_hora*horas_trabalhadas;

    std::cout << std::fixed << std::setprecision(2) << "NUMBER = " << numero << "\nSALARY = " << "U$ " << salario << std::endl;

}
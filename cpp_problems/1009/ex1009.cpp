#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string nome;
    double valor_vendas, salario, montante;
    std::cin >> nome >> salario >> valor_vendas;
    montante = salario + 0.15*valor_vendas;

    std::cout << std::fixed << std::setprecision(2) << "TOTAL = " << "R$ " << montante << std::endl;
    return 0;

}
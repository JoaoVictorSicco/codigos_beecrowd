#include <iostream>
#include <iomanip>


int main()
{
    // Entrada 1 e 2
    int cod1, n1, cod2, n2;
    float preco1, preco2, total;

    std::cin >> cod1 >> n1 >> preco1;
    std::cin >> cod2 >> n2 >> preco2;

    total = n1*preco1 + n2*preco2;

    // Saida
    std::cout << std::fixed << std::setprecision(2) << "VALOR A PAGAR: R$ " << total << std::endl;
    return 0;


}
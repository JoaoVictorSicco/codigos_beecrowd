#include <iostream>

int main()
{
    int A,B,C,D,saida;
    std::cin >> A >> B >> C >> D;
    saida = (A*B)-(C*D);
    std::cout << "DIFERENCA = " << saida << std::endl;
    return 0;
}
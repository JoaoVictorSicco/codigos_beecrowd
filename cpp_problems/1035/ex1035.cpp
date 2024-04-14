#include <iostream>
#include <iomanip>


int main()
{
    // Entrada
    int A,B,C,D;

    std::cin >> A >> B >> C >> D;

    std::cout << ((B>C) && (D>A) && (C+D)>(A+B) && C>0 && D>0 && A%2==0? "Valores aceitos" : "Valores nao aceitos") << std::endl;
    return 0;
}
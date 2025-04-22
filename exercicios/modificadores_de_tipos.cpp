#include <iostream>

using namespace std;

int main() {
    int num1 = 3;
    short int num2 = 3;
    long int num3 = 3;

    cout << sizeof(num1) << endl;
    cout << sizeof(num2) << endl;
    cout << sizeof(num3) << endl;

    int num4 = -10;
    signed int num5 = -10;
    unsigned int num6 = -10; // Se passarmos unsigned e ainda assim passarmos um sinal de negativo, sujeira é gerada na memória, nesse caso o valor -10 virou 4294967286
    
    cout << sizeof(num4) << " Valor: " << num4 << endl;
    cout << sizeof(num5) << " Valor: " << num5 << endl;
    cout << sizeof(num6) << " Valor: " << num6 << endl; 

    return 0;
}
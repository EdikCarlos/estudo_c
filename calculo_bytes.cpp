#include <iostream>

using namespace std;

int main() {
    int numero = 50;
    char letra = 'r';
    string nome = "Edik";
    double flutuante = 3.1413;

    cout << "O número tem: " << sizeof(numero) << "bytes" << endl;
    cout << "A letra tem: " << sizeof(letra) << "bytes" << endl;
    cout << "O Nome tem: " << sizeof(nome) << "bytes" << endl;
    cout << "O flutuante tem: " << sizeof(flutuante) << "bytes" << endl;

    return 0;
}
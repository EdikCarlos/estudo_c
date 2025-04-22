#include <iostream>

using namespace std;

int main() {
    cout << "Escolha um numero: " << endl;
    int num1 = 0;
    cin >> num1;

    cout << "Escolha outro numero: " << endl;
    int num2 = 0;
    cin >> num2;

    int total = num1 + num2;
    cout << "A soma deles é: " << total << endl;

    system("pause");

    return 0;
}
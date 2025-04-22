#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(5) << 1 << endl;
    cout << setw(10) << 2 << endl;
    cout << setw(15) << 3 << endl;
    cout << setw(20) << 4 << endl;

    system("pause");

    // Esse setw diz que nosso campo deverá ter X caracteres, isso ajuda em tabulação por exemplo
    return 0;
}
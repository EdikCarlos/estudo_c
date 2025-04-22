#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>


using namespace std;
void quandoErrar(int& tentativas, int& vidas) {
        tentativas++;
        vidas--;
        if(vidas > 0) {
            cout << "Ops, voce errou, tente novamente (vidas restantes:" << vidas << ")" << endl;
        }
    }

void quandoAcertar(int& tentativas, string& texto) {
    tentativas++;
    if(tentativas > 1) {
        texto = " tentativas";
    }
    cout << "Parabens voce acertou em "<< tentativas << texto << endl;
}

void gameOver() {
    cout << "Suas vidas acabaram =(. Fim de jogo." << endl;
}

void validacao() {
    cout << "Entrada invalida! Digite apenas numeros." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    srand(time(0));
    int resposta = (rand() % 10) + 1;
    int num = 0;
    int tentativas = 0;
    int vidas = 3;
    string texto = " tentativa.";
    cout << "Estou pensando em um numero de 1 a 10. Tente adivinhar (vidas restantes 3)" << endl;

    while(true) {
        if(!(cin >> num)) {
            validacao();
            continue;
        }

        if(num == resposta) {
            quandoAcertar(tentativas, texto);
            break;
        }

        quandoErrar(tentativas, vidas);
            
        if(vidas <= 0) {
            gameOver();
            break;
        }
        
    }

    system("pause");
    return 0;
}
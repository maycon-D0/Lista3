#include <iostream>
using namespace std;

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    cout << "A soma dos numeros inteiros positivos de 1 a 100 é: " << soma << endl;

    return 0;
}
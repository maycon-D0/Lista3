#include <iostream>
using namespace std;

int main() {
    const int N = 30;
    long long a = 1, b = 1, proximo;

    cout << "Os 30 primeiros valores da série de Fibonacci (sem o zero):" << endl;

    cout << a << " " << b << " ";

    for (int i = 3; i <= N; i++) {
        proximo = a + b;
        cout << proximo << " ";
        a = b;
        b = proximo;
    }

    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        cout << "=== Tabuada do " << i << " ===" << endl;

        for (int j = 1; j <= 20; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << "\nPressione Enter para continuar para a próxima tabuada..." << endl;
        cin.ignore(); 
        cin.get();   
    }

    cout << "Todas as tabuadas foram exibidas!" << endl;

    return 0;
}
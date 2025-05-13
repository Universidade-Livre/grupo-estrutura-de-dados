//Alguns exemplos de algoritmos mostrados no capítulo

#include <iostream>
using namespace std;

int busca1(int L[], int n, int x) {
    int i = 0;
    int busca1 = 0;
    while (i <= n) {
        if (L[i] == x) {
            busca1 = i;
            break;
        } else {
            i++;
        }
    }
    return busca1;
}

int main() {
    int L[] = {10, 20, 30, 40, 50};
    int n = sizeof(L) / sizeof(L[0]);
    int x = 30;

    int resultado = busca1(L, n, x);
    if (resultado != 0){
        cout << "Elemento encontrado na posição: " << resultado << endl;
    } else {
        cout << "Elemento não encontrado." << endl;
    }

    return 0;
}
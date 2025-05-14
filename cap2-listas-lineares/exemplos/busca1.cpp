//Exemplo 2.1 - Busca Simples

#include <iostream>
#include <vector>
using namespace std;

int busca1(vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int x = 30;
    int resultado = busca1(arr, x);
    if (resultado != -1){
        cout << "Elemento encontrado na posição: " << resultado << endl;
    } else {
        cout << "Elemento não encontrado." << endl;
    }

    return 0;
}
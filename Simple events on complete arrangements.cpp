#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Lectura de la entrada
    int N, M;
    cin >> N;
    vector<int> arreglo(N);
    for (int i = 0; i < N; ++i) {
        cin >> arreglo[i];
    }
    cin >> M;

    // Contador de eventos de tipo 1
    int eventos_tipo_1 = 0;

    // Procesamiento de los eventos
    for (int i = 0; i < M; ++i) {
        int tipo_evento;
        cin >> tipo_evento;
        if (tipo_evento == 0) {
            // Evento de tipo 0: resetear todos los elementos del arreglo a 0
            fill(arreglo.begin(), arreglo.end(), 0);
            eventos_tipo_1 = 0; // Reiniciar el contador de eventos de tipo 1
        } else {
            // Evento de tipo 1: incrementar el contador de eventos de tipo 1
            eventos_tipo_1++;
        }
    }

    // Aplicar eventos de tipo 1 al arreglo
    for (int i = 0; i < N; ++i) {
        arreglo[i] += eventos_tipo_1;
    }

    // Salida del estado final del arreglo
    for (int i = 0; i < N; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

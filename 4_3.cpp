#include <iostream>
using namespace std;

int main() {
    int tablica[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                // Pierwsza kolumna
                tablica[i][j] = i;
            } else if (j == 1) {
                // Druga kolumna
                tablica[i][j] = i + i;
            } else if (j == 2) {
                // Trzecia kolumna
                tablica[i][j] = i * i;
            } else if (j == 3) {
                // Czwarta kolumna
                tablica[i][j] = i + j;
            } else if (j == 4) {
                // Piąta kolumna
                tablica[i][j] = i - j;
            } else {
                tablica[i][j] = 0;
            }
        }
    }

    cout << "Zawartosc tablicy:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    int tablica[n];
    cout << "Podaj liczby całkowite (tyle ile podałeś elementów): " << endl;
    
    for (int i = 0; i < n; ++i) {
        cin >> tablica[i];
    }

    int NajczestszyElement = tablica[0];
    int MaksWystapien = 0;

    for (int i = 0; i < n; ++i) {
        int licznik = 0;

        for (int j = 0; j < n; ++j) {
            if (tablica[j] == tablica[i]) {
                licznik++;
            }
        }

        if (licznik > MaksWystapien) {
            MaksWystapien = licznik;
            NajczestszyElement = tablica[i];
        }
    }

    cout << "Najczesciej wystepujacy element to: " << NajczestszyElement << endl;
    cout << "Wystapil " << MaksWystapien << " razy." << endl;

    return 0;
}

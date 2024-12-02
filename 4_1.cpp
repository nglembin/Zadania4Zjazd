#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe elementow: ";
    cin >> n;

    int tablica[n];
    cout << "Podaj liczby całkowite (tyle ile podałeś elementów): " << endl;

    for (int i = 0; i < n; i++) {
        cin >> tablica[i];
    }

    int NajwiekszyElement = tablica[0];
    for (int i = 1; i < n; i++) {
        if (tablica[i] > NajwiekszyElement) {
            NajwiekszyElement = tablica[i];
        }
    }

    cout << "Najwiekszy element w tablicy to: " << NajwiekszyElement << endl;

    return 0;
}

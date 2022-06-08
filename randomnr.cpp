#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int liczbakomp, zgadnij;

    srand(time(0));

    liczbakomp = 1 + rand() % (100 - 1 + 1);

    cout << "Wypisz jaka wg Ciebie komputer wylosowal liczbe.\nLiczba ta jest z przedzialu od 1 do 100.\nZgadnij jaka to liczba.\n" << endl;
    cin >> zgadnij;

    while (zgadnij != liczbakomp)
    {
        if (zgadnij > liczbakomp) {
            cout << "\nWybrales zbyt duza liczbe, sprobuj z mniejsza.\n";
        }
        else {
            cout << "\nWybrales zbyt mala liczbe, sprobuj z wieksza.\n";
        }

        cin >> zgadnij;
    }
    cout << "\nBrawo! Zgadles liczbe!";

    return 0;
}

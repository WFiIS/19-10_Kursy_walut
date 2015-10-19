#include <iostream>

using namespace std;

int main()
{
    // Stale kursy walut.
    double pln_usd = 0.267362;
    double pln_euro = 0.236206379;
    double pln_gpb = 0.172857401;

    // Dodatkowe zmienne.
    int menu_opcja;
    double kwota;

    // Menu.
    cout << "1) Przelicz z PLN na USD." << endl;
    cout << "2) Przelicz z PLN na EURO." << endl;
    cout << "3) Przelicz z PLN na GBP" << endl;

    cout << "Wybierz sposob przeliczania: ";
    cin >> menu_opcja;
    switch (menu_opcja) {
    case 1:
        cout << "Kurs PLN na USD wynosi: " << pln_usd << endl;
        cout << "Podaj kwote do przeliczenia: ";
        cin >> kwota;
        cout << kwota * pln_usd << endl;
        break;
    case 2:
        cout << "Kurs PLN na EURO wynosi: " << pln_euro << endl;
        cout << "Podaj kwote do przeliczenia: ";
        cin >> kwota;
        cout << kwota * pln_euro << endl;
        break;
    case 3:
        cout << "Kurs PLN na GBP wynosi: " << pln_gpb << endl;
        cout << "Podaj kwote do przeliczenia: ";
        cin >> kwota;
        cout << kwota * pln_gpb << endl;
        break;
    default:
        cout << "Zostala wybrana niepoprawna pozycja w menu.";
    }

    return 0;
}

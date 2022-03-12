#include <iostream>
#include <Windows.h>
using namespace std;
string PIN;
string login, haslo;
int wiek;
string imie;
int liczbaPowtorzen;
int liczbaBakterii = 1;
int godziny = 0;
int liczba_z_przedzialu, liczba_strzelana, liczba_prob;

int main()
{


}

void PINnumb()
{
    //PIN
    cout << "Wpisz swoj nr PIN: ";
    cin >> PIN;

    if (PIN == "1112")
        cout << "Poprawny PIN!" << endl;
    else
        cout << "Niepoprawny PIN! Sprobuj ponownie." << endl;
}

void Login()
{
    //login
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

    if (login == "anndx" && haslo == "szarlotka")
        cout << "Mozesz sie zalogowac!" << endl;
    else
        cout << "Niepoprawne dane. Sprobuj ponownie." << endl;
}

void Wiek()
{
    //wiek
    cout << "Wpisz swoj wiek: ";
    cin >> wiek;

    if (wiek < 18)
        cout << "Jestes niepelnoletni i nie mozesz zostac prezydentem." << endl;
    else if (wiek >= 18 && wiek < 35)
        cout << "Jestes pelnoletni, ale nie mozesz zostac prezydentem." << endl;
    else
        cout << "Jestes pelnoletni i mozesz zostac prezydentem." << endl;
}

void OdliczanieFor()
{
    //petla for - odliczanie
    for (int i = 15; i >= 0; i--)
    {
        Sleep(1000);
        system("cls");
        cout << i << endl;
    }
}

void PowtorzeniaImienia()
{
    //petla for - powtarzanie imienia x razy
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj liczbe powtorzen: ";
    cin >> liczbaPowtorzen;

    for (int i = 1; i <= liczbaPowtorzen; i++)
        cout << i << ". " << imie << endl;
}

void MnozenieBakterii()
{
    while (liczbaBakterii <= 1000000000)
    {
        godziny++;
        liczbaBakterii *= 2;
        cout << "Godzina: " << godziny << " Populacja bakterii: " << liczbaBakterii << endl;
    }
}

void ZgadnijLiczbe()
{
    cout << "Sprobuj odgadnac liczbe z przedzialu od 1 do 100:" << endl;

    srand(time(NULL));
    liczba_z_przedzialu = rand() % 100 + 1;

    while (liczba_strzelana != liczba_z_przedzialu)
    {
        liczba_prob++;

        cout << "To twoja " << liczba_prob << " proba. Podaj liczbe: ";
        cin >> liczba_strzelana;

        if (liczba_strzelana == liczba_z_przedzialu)
            cout << "Brawo! Wygrales w " << liczba_prob << " probie." << endl;
        else if (liczba_strzelana > liczba_z_przedzialu)
            cout << "Za duzo" << endl;
        else
            cout << "Za malo" << endl;
    }
}
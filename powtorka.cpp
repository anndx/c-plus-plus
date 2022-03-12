#include <iostream>
#include <Windows.h>
using namespace std;
string PIN;
string login, haslo;
int wiek;
string imie;
int liczbaPowtorzen;
int liczbaBakterii=1;
int godziny=0;

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
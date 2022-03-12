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
int liczba_lotto;
float oceny[5], suma_ocen=0;
float srednia_aryt;
int liczby_fib[100000], ile_liczb;

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

void LosowanieLotto()
{
    cout << "Witaj! Za 3s rozpocznie sie losowanie." << endl << endl;
    Sleep(3000);

    srand(time(NULL));

    for (int i = 1; i <= 6; i++)
    {
        liczba_lotto = rand() % 49 + 1;
        Sleep(1000);
        cout << liczba_lotto << endl;
    }
}

void SredniaOcen()
{
    cout << "Wpisz 5 ocen: " << endl;

    for (int i = 0; i <= 4; i++)
    {
        cin >> oceny[i];
        suma_ocen += oceny[i];
    }

    srednia_aryt = suma_ocen / 5;
    cout << "Srednia arytmetyczna Twoich ocen: " << srednia_aryt << endl;
}

void CiagFibonacciego()
{
    cout << "Ile liczb Fibonacciego mam wyznaczyc? ";
    cin >> ile_liczb;
    liczby_fib[0] = 1;
    liczby_fib[1] = 1;

    for (int i = 2; i < ile_liczb; i++)
    {
        liczby_fib[i] = liczby_fib[i - 2] + liczby_fib[i - 1];
    }

    for (int i = 0; i < ile_liczb; i++)
    {
        cout << liczby_fib[i] << endl;
    }
}
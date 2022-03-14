#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;
string PIN;
string login, haslo;
int wiek;
string imie, nazwisko;
int liczbaPowtorzen;
int liczbaBakterii = 1;
int godziny = 0;
int liczba_z_przedzialu, liczba_strzelana, liczba_prob;
int liczba_lotto;
float oceny[5], suma_ocen = 0;
float srednia_aryt;
int liczby_fib[100000], ile_liczb;
float liczba1, liczba2;
int wybor;
int nr_miesiaca;
int nr_telefonu;

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

void Kalkulator()
{
    for (;;)
    {
        cout << "Podaj 1 liczbe: ";
        cin >> liczba1;
        cout << "Podaj 2 liczbe: ";
        cin >> liczba2;

        cout << "MENU" << endl;
        cout << "---------------" << endl;
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnozenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "5. Opusc program" << endl;
        cout << "Wybierz funkcje: " << endl;
        wybor = _getch();

        switch (wybor)
        {
        case '1':
            cout << "Suma: " << (liczba1 + liczba2);
            break;
        case '2':
            cout << "Roznica: " << (liczba1 - liczba2);
            break;
        case '3':
            cout << "Iloczyn: " << (liczba1 * liczba2);
            break;
        case '4':
        {
            if (liczba2 == 0)
                cout << "Nie dzielimy przez 0!";
            else
                cout << "Iloraz: " << (liczba1 / liczba2);
        }
        break;
        case '5':
            exit(0);
        default:
            cout << "Nie ma takiej opcji w menu.";
            break;
        }
        getchar(); getchar();
        system("cls");
    }
}

void DniMiesiaca()
{
    cout << "Podaj numer miesiaca: ";
    if (!(cin >> nr_miesiaca))
    {
        cerr << "To nie jest liczba!" << endl;
        exit(0);
    }

    switch (nr_miesiaca)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Ten miesiac ma 31 dni." << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Ten miesiac ma 30 dni." << endl;
        break;
    case 2:
        cout << "Ten miesiac ma 28 lub 29 dni." << endl;
        break;
    default:
        cout << "Nieprawidlowy numer miesiaca" << endl;
        break;
    }
}

void WyslijDaneDoPliku()
{
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj numer telefonu: ";
    cin >> nr_telefonu;

    fstream plik;
    plik.open("wizytowka.txt", ios::out | ios::app);
    plik << imie << endl;
    plik << nazwisko << endl;
    plik << nr_telefonu << endl;
    plik.close();
}

void WczytajDaneZPliku()
{
    fstream plik;
    plik.open("wizytowka.txt", ios::in);

    string linia;
    int nr_linii = 1;
    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
        case 1: imie = linia;
            break;
        case 2: nazwisko = linia;
            break;
        case 3: nr_telefonu = atoi(linia.c_str());
            break;
        }
        nr_linii++;

    }

    cout << imie << endl;
    cout << nazwisko << endl;
    cout << nr_telefonu << endl;
    plik.close();
}
#include <iostream>
#include <cmath>

 using namespace std;

 //glowny program kalkulatora
 void calc(char s, double a, double b) {


    switch (s) {
        //dodawanie
        case '+' :
            cout << "= ";
            cout << a + b << endl;
            break;
        //odejm
        case '-' :
            cout << "= ";
            cout << a - b << endl;
            break;
        //mnoz
        case '*' :
            cout << "= ";
            cout << a * b << endl;
            break;
        //dziel
        case '/' :
            if (b <= 0) {
                cout << "Nie mozna dzielic przez 0" << endl;
                } else {
                    cout << "= ";
                    cout << a / b << endl;
                    }
            break;
        //potega
        case '^' :
            cout << "= ";
            cout << pow(a,b) << endl;
            break;

        default:
            cout << "Niepoprawne dzialanie" << endl;
    }
 }

 //Kontynuacja dzialan
  int decyzja(string d){
    int x;
    int i = d.size();
    char dec;
    //sprawdzenie poprawnego wejscia
    if (i > 1){
        cout << "Bledna decyzja" << endl;
            x=2;
    }else {
        dec = d[0];
        switch (dec) {
            case 'T' : case 't' :
                x=1;
                break;

            case 'N' : case 'n' :
                x=0;
                break;

            default :
                cout << "Bledna decyzja" << endl;
                x=2;
        }
    }
    return x;
 }

 int main () {


    //numery
    double a, b;

    int i=1;

    //typ dzialania
    char typ;
    string w;

    while (i==1) {

        //wyczyszczenie ekr

        //pobranie pierwszej liczby
        cout << "A= ";
        cin >> a;
        //pobranie drugiej liczby
        cout << "B= ";
        cin >> b;
        //wyb rodzaju dzialania
        cout << "Wybierz rodzaj dzialania (+; -; *; /; ^): ";
        cin >> typ;

        //przeliczenie i wyswietl wyniku
        calc(typ,a,b);

        //kontynuacja dzialania programu
        cout << "Czy chcesz wykonac kolejne dzialanie (t/n)? : ";
        cin >> w;

        i = decyzja(w);
        //cout << i;
        while (i==2) {
            cout << "Czy chcesz wykonac kolejne dzialanie (t/n)? : ";
            cin >> w;
            i = decyzja(w);
        }

    }

 return 0;
 }

#include <iostream>
#include<fstream>
#include <stdlib.h>

using namespace std;

void menu(){

        cout << endl;
        cout << "\t+----------------------------------------------------------+" << endl;
        cout << "\t|                                                          |" << endl;
        cout << "\t|\t\t\t\tMenu                       |" << endl;
        cout << "\t|                                                          |" << endl;
        cout << "\t|----------------------------------------------------------|" << endl;
        cout << "\t|                                                          |" << endl;
        cout << "\t|\t\t[1] - Pokaz uzytkownikow.                  |" << endl;
        cout << "\t|                                                          |" << endl;
        cout << "\t|\t\t[2] - Doadaj uzytkownika.                  |" << endl;
        cout << "\t|\t\t[3] - Edytuj uzytkownika.                  |" << endl;
        cout << "\t|\t\t[4] - Usun uzytkownika.                    |" << endl;
        cout << "\t|\t\t[5] - Drukuj uzytkownika.                  |" << endl;
        cout << "\t|                                                          |" << endl;
        cout << "\t|\t\t[0] - Wyjscie z programu.                  |" << endl;
        cout << "\t|                                                          |" << endl;
        cout << "\t|----------------------------------------------------------|" << endl;

}

int login(string l,string h){

        if (l == "admin"){

            cout << "\t|" << "\t\t\tHaslo: ";
            cin >> h;

                if ( h == "123") {

                    cout << "\t|                                                          |" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t|\t\tZalogowano jako Administrator.             |" << endl;
                    cout << "\t+----------------------------------------------------------+" << endl <<endl;
                    system("PAUSE");
                    system("CLS");

                } else

                if (h != "123") {

                    cout << "\t|                                                          |" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t|----------------------------------------------------------|" <<endl;
                    cout << "\t|\t\t\tHaslo niepoprawne.                 |" << endl;
                    cout << "\t+----------------------------------------------------------+" << endl <<endl;
                    system("PAUSE");
                    system("CLS");

                    cout << login(l,h);

                }
        } else

        if (l == "haker"){

            cout << "\t|" << "\t\t\tHaslo: ";
            cin >> h;

                if (h == "haker"){

                    cout << "\t|                                                          |" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t|\t\tO nie! Jestes hakerem! :'-(                |" << endl;
                    cout << "\t+----------------------------------------------------------+" << endl <<endl;
                    system("PAUSE");
                    system("CLS");

                } else

                if (h != "haker") {

                    cout << "\t|                                                          |" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t|----------------------------------------------------------|" <<endl;
                    cout << "\t|\t\t\tHaslo niepoprawne.                 |" << endl;
                    cout << "\t+----------------------------------------------------------+" << endl <<endl;
                    system("PAUSE");
                    system("CLS");

                    cout << login(l,h);

                }
        } else

        if (l != "admin") {

            cout << "\t+----------------------------------------------------------+" <<endl;
            cout << "\t|                                                          |" << endl;
            cout << "\t|\t\tNie ma takiego uzytkownika.                |" << endl;
            cout << "\t|                                                          |" << endl;
            cout << "\t|\t\tOpusc aplikacje!                           |" << endl;
            cout << "\t|                                                          |" << endl;
            cout << "\t+----------------------------------------------------------+" << endl <<endl;
            system("PAUSE");
            return 0;

        }
}


int main()
{
    string l,h,m,w;
    int i,e,p,o;

        cout << endl;
        cout << "\t+----------------------------------------------------------+" << endl;
        cout << "\t|\t\t\tPanel logowania.                   |" << endl;
        cout << "\t|----------------------------------------------------------|" << endl;
        cout << "\t|                                                          |" << endl;
        cout << "\t|\t\t\tLogin: ";
        cin >> l;
        cout << login(l,h);

    system("CLS");

    i = 0;
    do{
            menu();
            cout << "\t|                                                          |" << endl;
            cout << "\t|\t\tWybierz: ";
            cin >> w;
            cout << "\t|                                                          |" << endl;
            cout << "\t+----------------------------------------------------------+" << endl  << endl;

                if (w == "0"){

                        i = 1;
                        cout << "\t+----------------------------------------------------------+" << endl;
                        cout << "\t|                                                          |" << endl;
                        cout << "\t|\t\tOpuszczasz program!                        |" << endl;
                        cout << "\t|                                                          |" << endl;
                        cout << "\t+----------------------------------------------------------+" << endl <<endl;

                        cout << "\t+----------------------------------------------------------+" << endl;
                        cout << "\t|                                                          |" << endl;
                        cout << "\t|\t\t\tCzy chcesz wyjsc?                  |" << endl;
                        cout << "\t|                                                          |" << endl;
                        cout << "\t|\t\tTak\t\t\tNie                |" << endl;
                        cout << "\t|                                                          |" << endl;
                        cout << "\t|\t\t\tWybierz: ";
                        cin >> m;
                        cout << "\t|                                                          |" << endl;
                        cout << "\t+----------------------------------------------------------+" << endl << endl;

                            if (m == "Tak"){

                                i = 1;
                                return 0;

                            } else {

                                i = 0;
                                system("PAUSE");
                                system("CLS");
                                menu();

                            }
                } else

                if (w == "1"){

                    do{

                        i = 1;
                        o = 0;
                        system("CLS");

                        cout << "\t+----------------------------------------------------------+" << endl;
                        cout << "\t|                                                          |" << endl;
                        cout << "\t|\t\tLista uzytkownikow.                        |" << endl;
                        cout << "\t|                                                          |" << endl;
                        cout << "\t|----------------------------------------------------------|" << endl;
                        cout << "\t|  ID  |  Imie  |  Nazwisko  |  Klasa  |  Wiek  | Pseudonim|" << endl;
                        cout << "\t|------+--------+------------+---------+--------+----------|" << endl;

                            // Import z pliku txt

                                ifstream Baza("Baza.txt");
                                    if(Baza){
                                        string linia;

                                        while(getline(Baza, linia)){

                                            cout << "\t" << linia << endl;
                                            cout << "\t|------+--------+------------+---------+--------+----------|" << endl;}

                                    }  else {
                                        o = 1;
                                        cout << "\t|----------------------------------------------------------|" << endl;
                                        cout << "\t|                                                          |" << endl;
                                        cout << "\t|\t\tError: Nie mozna otworzyc pliku.           |" << endl;
                                        cout << "\t|                                                          |" << endl;
                                        cout << "\t+----------------------------------------------------------+" << endl;
                                    }

                        cout << "\t|                                                          |" << endl;
                        cout << "\t|----------------------------------------------------------|" << endl;
                        cout << "\t|\tPowrot = 'Wroc'\t\t                           |" << endl;
                        cout << "\t+----------------------------------------------------------+" << endl << endl;
                        cout << "\t+----------------------------------------------------------+" << endl;
                        cout << "\t|                                                          |" << endl;
                        cout << "\t|\t\tWybierz: ";
                        cin >> m;
                        cout << "\t|                                                          |" << endl;
                        cout << "\t+----------------------------------------------------------+" << endl << endl;

                                if (m == "Wroc" || m == "wroc"){

                                    i = 0;
                                    o = 0;
                                    system("PAUSE");
                                    system("CLS");
                                   // menu();

                                } else {

                                    i = 1;
                                    o = 1;

                                    cout << "\t+----------------------------------------------------------+" << endl;
                                    cout << "\t|                                                          |" << endl;
                                    cout << "\t|\t\t\tWybierz opcje!                     |" << endl;
                                    cout << "\t|                                                          |" << endl;
                                    cout << "\t+----------------------------------------------------------+" << endl << endl;
                                    system("PAUSE");
                                    system("CLS");
                                    //return 0;

                                }
                        } while (o == 1);

                    } else

                if (w == "2"){

                        do{
                            p = 0;
                            i = 1;
                            system("CLS");

                            cout << "\t+----------------------------------------------------------+" << endl;
                            cout << "\t|                                                          |" << endl;
                            cout << "\t|\t\tDodaj uzytkownika.                         |" << endl;
                            cout << "\t|                                                          |" << endl;
                            cout << "\t+----------------------------------------------------------+" << endl << endl;
                            cout << "\t+----------------------------------------------------------+" << endl;
                            cout << "\t|\t\t\tOstatni wpis:                      |" << endl;
                            cout << "\t|----------------------------------------------------------|" << endl;
                            cout << "\t|  ID  |  Imie  |  Nazwisko  |  Klasa  |  Wiek  | Pseudonim|" << endl;
                            cout << "\t|------+--------+------------+---------+--------+----------|" << endl;


                              /*  ifstream Baza("Baza.txt");

                                            if(Baza){

                                                string linia;

                                                (getline(Baza, linia));

                                                cout <<"\t" << linia << endl;*/

                                            string filename = "Baza.txt";
                                                    ifstream fin;
                                                    fin.open("Baza.txt");
                                                    if(fin.is_open()) {
                                                        fin.seekg(-1,ios_base::end);                // go to one spot before the EOF

                                                        bool keepLooping = true;
                                                        while(keepLooping) {
                                                            char ch;
                                                            fin.get(ch);                            // Get current byte's data

                                                            if((int)fin.tellg() <= 1) {             // If the data was at or before the 0th byte
                                                                fin.seekg(0);                       // The first line is the last line
                                                                keepLooping = false;                // So stop there
                                                            }
                                                            else if(ch == '\n') {                   // If the data was a newline
                                                                keepLooping = false;                // Stop at the current position.
                                                            }
                                                            else {                                  // If the data was neither a newline nor at the 0 byte
                                                                fin.seekg(-2,ios_base::cur);        // Move to the front of that data, then to the front of the data before it
                                                            }
                                                        }

                                                        string lastLine;
                                                        getline(fin,lastLine);                      // Read the current line
                                                        cout <<"\t" << lastLine << '\n';     // Display it

                                                        fin.close();
                                                    }

                                             else {
                                                p = 1;
                                                cout << "\t|----------------------------------------------------------|" << endl;
                                                cout << "\t|                                                          |" << endl;
                                                cout << "\t|\t\tError: nie mozna otworzyc pliku.             |" << endl;
                                                cout << "\t|                                                          |" << endl;
                                                cout << "\t+----------------------------------------------------------+" << endl << endl;
                                            }

                            cout << "\t|                                                          |" << endl;
                            cout << "\t+----------------------------------------------------------+" << endl << endl;
                            cout << "\t+----------------------------------------------------------+" << endl;
                            cout << "\t|\tPowrot = 'Wroc'\t\tDodaj = 'Dodaj'            |" << endl;
                            cout << "\t+----------------------------------------------------------+" << endl << endl;
                            cout << "\t+----------------------------------------------------------+" << endl;
                            cout << "\t|                                                          |" << endl;
                            cout << "\t|\t\tWybierz: ";
                            cin >> m;
                            cout << "\t|                                                          |" << endl;
                            cout << "\t+----------------------------------------------------------+" << endl << endl;

                                    if (m == "Wroc" or m =="wroc"){

                                        i = 0;
                                        p = 0;
                                        system("PAUSE");
                                        system("CLS");
                                       // menu();

                                    } else

                                    if (m == "Dodaj" || m == "dodaj"){

                                        i = 0;
                                        p = 0;

                                            ofstream Baza("Baza.txt", ios::app | ios::out | ios::ate );

                                                if(Baza){

                                                    string linia;
                                                    string wiersz;
                                                    cout << "\t|----------------------------------------------------------|" << endl;
                                                    cout << "\t|  ID  |  Imie  |  Nazwisko  |  Klasa  |  Wiek  | Pseudonim|" << endl;
                                                    cout << "\t|------+--------+------------+---------+--------+----------|" << endl;
                                                    cout << "\t";

                                                        cin >> linia;
                                                        getline(cin, linia);
                                                        Baza << endl << "|" << linia;
                                                        Baza.close();

                                                    cout << "\t+----------------------------------------------------------+" << endl << endl;
                                                    cout << "\t+----------------------------------------------------------+" << endl;
                                                    cout << "\t|                                                          |" << endl;
                                                    cout << "\t|\t\t\tDodano uzytkownika.                |" << endl;
                                                    cout << "\t|                                                          |" << endl;
                                                    cout << "\t+----------------------------------------------------------+" << endl << endl;
                                                    system("PAUSE");
                                                    system("CLS");


                                                } else {

                                                    cout << "\t|----------------------------------------------------------|" << endl;
                                                    cout << "\t|                                                          |" << endl;
                                                    cout << "\t|\t\tError: nie mozna otworzyc pliku.             |" << endl;
                                                    cout << "\t|                                                          |" << endl;
                                                    cout << "\t+----------------------------------------------------------+" << endl << endl;
                                                }

                                                if (m == "Wroc" or m =="wroc"){

                                                    i = 0;
                                                    p = 0;
                                                    system("CLS");
                                                    // menu();

                                                }

                                        } else {

                                            i = 1;
                                            p = 1;
                                            system("PAUSE");
                                            system("CLS");
                                           // menu();
                                            //return 0;
                                        }

                        } while( p == 1 );

                } else

                if (w == "3"){

                    i = 1;
                    cout << "\t+----------------------------------------------------------+" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t|\t\tEdytuj uzytkownika.                        |" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t+----------------------------------------------------------+" << endl << endl;

                    cout << "\t+----------------------------------------------------------+" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t|\t\tW budowie.                            |" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t+----------------------------------------------------------+" << endl << endl;
                    system("PAUSE");

                } else

                if (w == "4"){

                    i = 1;
                    cout << "\t+----------------------------------------------------------+" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t|\t\tUsun uzytkownika.                          |" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t+----------------------------------------------------------+" << endl << endl;
                    system("PAUSE");

                } else

                if (w == "5"){

                    i = 1;
                    cout << "\t+----------------------------------------------------------+" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t|\t\tDrukuj uzytkownika.                        |" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t+----------------------------------------------------------+" << endl << endl;
                    system("PAUSE");

                } else {

                    cout << "\t+----------------------------------------------------------+" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t|\t\tNie ma takiej opcji!                       |" << endl;
                    cout << "\t|\t\tWybierz jeszcze raz.                       |" << endl;
                    cout << "\t|                                                          |" << endl;
                    cout << "\t+----------------------------------------------------------+" << endl << endl;
                    system("PAUSE");
                    system("CLS");
                    //menu();

                }

    } while( i != 1 );

    return 0;
}

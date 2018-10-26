
#include <iostream>
#include <conio.h>
 
using namespace std;
 
int pktkk=0, maxpktkk=5, lpodpkk=0, lnodpkk=0, pyt1kk;
 
int main()
{
    cout << "Witaj w programie. Program zadaje 5 pytan z dziedziny programowania." << endl;
    cout << "Dobra odpowiedz +1 punkt, zla odpowiedz 0 punktow." << endl;
    cout << "Po zadaniu wszystkich pytan program podaje ilosc zdobytych punktow " << endl;
    cout << "Oraz wystawia uzytkownikowi ocene." <<endl <<endl;
 
    cout << "...................................................................." << endl <<endl;
    cout << "PYTANIE NR1: Ktora z podanych bilbiotek nie jest biblioteka JavaScript ?" << endl;
    cout << " 1: jQuery " << endl;
    cout << " 2: Bootstrap3 " << endl;
    cout << " 3: OpenGL " << endl;
    cout << " 4: AngularJS " << endl;
    cout << "Twoja odpowiedz to: ";
    cin >> pyt1kk;
 
    switch(pyt1kk==1)
    {
        case 1:
            pktkk=pktkk+1;
            lpodpkk=lpodpkk+1;
            lnodpkk=0;
        break;
 
        default;
            pktkk=pktkk+0;
            lpodpkk=lpodpkk+0;
            lnodpkk=lnodpkk+1;
        break;
 
 
    }
 
    getch();
    return 0;
 
 
}


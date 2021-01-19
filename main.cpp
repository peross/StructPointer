#include <iostream>
#include <cstring>

//kada definisemo structove mi prakticno pravimo neku virtuelnu tabelu
//u lijevoj koloni imamo datatype (int, char), a u desnoj imamo opis tog elementa

using namespace std;

void izvuciPodatak(struct Knjige *knjiga);

//definisanje globale
struct Knjige{
    char Naziv[50];
    char Autor[50];
    char Oblast[100];
    int IdKnjige;
};

int main() {
    struct Knjige Knjiga1;

    //ubacivanje podataka
    strcpy(Knjiga1.Naziv, "Programski jezik C++");
    strcpy(Knjiga1.Autor, "Laslo Kraus");
    strcpy(Knjiga1.Oblast, "Programiranje");
    Knjiga1.IdKnjige = 4323;

    //pozivanje funkcije za izvlacenje podataka
    izvuciPodatak(&Knjiga1);

    return 0;
}

void izvuciPodatak(struct Knjige *knjiga){
    //vadjenje podataka
    cout<<"Naziv: "<<knjiga->Naziv<<endl;
    cout<<"Autor: "<<knjiga->Autor<<endl;
    cout<<"Oblast: "<<knjiga->Oblast<<endl;
    cout<<"Id: "<<knjiga->IdKnjige<<endl;
}
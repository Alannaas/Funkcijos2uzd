//pridedame bibliotekas
#include <iostream>
#include <fstream>
using namespace std;

int policininkas() { //antrinë funkcija
    ifstream fin("Duomenys.txt"); //atidarome failà
    if (!fin) {
    cout << "Failas nerastas";
    return -1;
    }
    //informacija apie policininkà surenkama ið duomenø failo ir iðvedama
    string vardas; fin >> vardas;
    string pavarde; fin >> pavarde;
    cout << "Polininkas yra " << vardas << " " << pavarde << endl;
    int metai; fin >> metai;
    cout << "Jam yra " << metai << endl;
    float alga; fin >> alga;
    cout << "Jis per menesi uzdirba " << alga << "$ neto\n";
    string etatas; fin >> etatas;
    cout <<  "Etatas: " << etatas << endl;
    string spec; fin >> spec;
    cout << "Specializacija: " << spec << endl;


}

int main() //pagrindinë funkcija
{
    policininkas(); //panaudojame antrinæ funkcijà
	return 0;
}

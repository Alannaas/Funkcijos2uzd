//pridedame bibliotekas
#include <iostream>
#include <fstream>
using namespace std;

int policininkas() { //antrin� funkcija
    ifstream fin("Duomenys.txt"); //atidarome fail�
    if (!fin) {
    cout << "Failas nerastas";
    return -1;
    }
    //informacija apie policinink� surenkama i� duomen� failo ir i�vedama
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

int main() //pagrindin� funkcija
{
    policininkas(); //panaudojame antrin� funkcij�
	return 0;
}

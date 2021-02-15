#include <iostream>
#include <string>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class zadanie1 {
	string ciag;
	string ciag2;
	ifstream plik;
	public:
		void otworz();
		void wczytaj();
		void pokroj();
		void dwucykliczny();
};
class zadanie2 {
	string ciag;
	int licznik;
	ifstream plik1;
	public:
		void otworz();
		void wczytaj();
		void jedynki();
		void wypisz();
};
	void  zadanie1::otworz(){
		plik.open("ciagi.txt");
	}

	void zadanie1::wczytaj(){
		plik >> ciag;
	}
	void zadanie1::pokroj(){

		ciag = str.substr(ciag.length/2 - 1);
		ciag2 = str.substr(ciag.length/2 + 499);
	}
	void zadanie1::dwucykliczny(){
		if(ciag == ciag2)
		cout << "Jest to ciag dwucykliczny" << endl;
	}
	void zadanie2::otworz(){
		plik1.open("ciagi.txt");
	}
	void zadanie2::wczytaj(){
		plik1 >> ciag;
	}
	void zadanie2::jedynki(){
	for (int i = 1; i<ciag.size(); i++) 
   		if (ciag[i-1]=='1' && ciag[i] == '1') 
     	licznik++;
     	
	}
	void zadanie2::wypisz(){
		cout << licznik << endl;
	}

int main(int argc, char** argv) {
	zadanie1 p;
	p.otworz();
	p.wczytaj();
	p.pokroj();
	p.dwucykliczny();
	
	zadanie2 o;
	
	o.otworz();
	o.wczytaj();
	o.jedynki();
	o.wypisz();
	
	
	return 0;
}

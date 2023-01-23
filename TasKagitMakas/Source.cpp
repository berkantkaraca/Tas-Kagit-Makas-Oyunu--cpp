#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void menu() {
	cout << "1.Tas  \n" << "2.Kagit \n" << "3.Makas" << endl;
}

int main() {
	
	srand(time(0));

	int secim, pcSecim;
	string secimYazi, pcSecimYazi;
	
	while (1) {
		menu();
		cout << "secimini yap: ";
		cin >> secim;

		pcSecim = rand() % 3 + 1;

		//kullan�c� se�imini yaz�ya d�kme
		if (secim == 1)
			secimYazi = "Tas";
		else if (secim == 2)
			secimYazi = "Kagit";
		else
			secimYazi = "Makas";

		//bilgisayar se�imini yaz�ya d�kme
		if (pcSecim == 1)
			pcSecimYazi = "Tas";
		else if (pcSecim == 2)
			pcSecimYazi = "Kagit";
		else
			pcSecimYazi = "Makas";

		//Kazanan� belirleyen ko�ullar
		if (secim == pcSecim) {
			cout << secimYazi << " vs " << pcSecimYazi << " Sonuc : berabere\n" << endl;
		}
		else if ((secim == 1 && pcSecim == 2) || (secim == 2 && pcSecim == 3) || (secim == 3 && pcSecim == 1)) {
			cout << secimYazi << " vs " << pcSecimYazi << " Sonuc : kaybettin\n" << endl;
		}
		else /*if ((secim == 1 && pcSecim == 3) || (secim == 2 && pcSecim == 1) || (secim == 3 && pcSecim == 2))*/ {
			cout << secimYazi << " vs " << pcSecimYazi << " Sonuc : kazandin\n" << endl;
		}
	}
	return 0;
}
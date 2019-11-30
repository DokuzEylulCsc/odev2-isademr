#include <iostream>
#include <string.h>

using namespace std;
int SayiToRoma();
int RomaToSayi();

int main() {

	int choice;

	do {
		cout << endl
		     << " 1 - Sayidan romaya cevirmek icin 1'e basin. \n"
		     << " 2 - Romadan sayiya cevirmek icin 2'ye basin.\n"
		     << " 3 - Cikis icin 3'e basin.\n"
		     << " Seciminizi giriniz: ";
		cin >> choice;

		switch (choice) {
			case 1:
				SayiToRoma();
				break;
			case 2:
				RomaToSayi();
				break;
			default:
				cout<<"Geçersiz sayý girdiniz";
				break;
		}
	} while (choice !=3);

	return 0;
}

int RomaToSayi() {

	
string g_roma="";
	int deger=0;

	cout<<"1-3999 arasinda Roma sayisi girin: ";
	cin>>g_roma;

	int sayi[]= {1000,500,100,50,10,5,1};
	char roma[]= {'M','D','C','L','X','V','I'};


	int i=0;
	int on_deger=0;

	while(i<g_roma.length()) {

		for(int j=0; j<strlen(roma); j++) {

			if(g_roma[i]==roma[j]) {

				if(on_deger<sayi[j]) {
					deger=(deger-on_deger*2)+sayi[j];
				} else {
					deger+=sayi[j];
				}
				on_deger=sayi[j];
			}

		}
		i++;
	}


	cout<<deger;

	return 0;
}



int SayiToRoma() {
	int num;
	cout<<"1-3999 arasi sayi girin: ";
	cin>>num;

	int sayi[]= {1000,900,500,400,100,90,50,40,10,9,5,4,1};
	string roma[]= {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

	string roma_num="";

	int i=0;

	while(num>0) {

		int c=num/sayi[i];
		for (int j=0; j<c; j++ ) {
			roma_num+=roma[i];
			num-=sayi[i];
		}

		i++;
	}

	cout<<roma_num;

	return 0;
}




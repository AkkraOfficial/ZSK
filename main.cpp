#include <iostream>
#include <locale.h>
using namespace std;

class Worker{
	public:
//deklaracja zmiennych cz³onkowskich
	string name="Janusz";
	string surname;
	unsigned short int age;
// definicja funkcji cz³onkowskiej
void showName(){
		cout<<"twoje imiê: "; //zadanie dom tutaj dodaæ imie wykorzystuj¹c funkcjê cz³onkowsk¹
	}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
//	typ danych nazwa_zmiennej
	Worker pracownik;
	pracownik.surname ="Nowak";
	//cout<<pracownik.surname;
	pracownik.showName();
	pracownik.age=16;
	cout<<"wiek: " << pracownik.age<<endl;
	return 0;
}

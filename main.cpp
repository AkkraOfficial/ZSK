#include <iostream>
#include <locale.h>
using namespace std;

class Worker{
	public:
//deklaracja zmiennych członkowskich
	string name="Janusz";
	string surname;
	unsigned short int age;
// definicja funkcji członkowskiej
void showName(){
		cout<<"twoje imię: "; //zadanie dom tutaj dodać imie wykorzystujšc funkcję członkowskš
		cin>>name;
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

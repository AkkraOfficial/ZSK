#include <iostream>
#include <locale.h>
using namespace std;

class Worker{
	public:
//deklaracja zmiennych członkowskich
	string name;
	string surname;
	string nationality;
	string alldata;
	unsigned short int yearBirthday;
	char gender;
	float height;
	
// definicja funkcji członkowskiej


	void showSurname();
	void showPersonality();
	void showAllData();
	void showName();

};

// deklaracja metody (prototyp)



//definicja metody show surname

void Worker::showSurname(){
	cout<<"Nazwisko: "<<surname; 
};
	void Worker::showName(){
	cout<<"Imie: "<<name; 
	};
	void Worker::showPersonality(){
		cout<<"narodowość: "<<nationality; 
	};
	void Worker::showAllData(){
		cout<<"data urodzenia: "<<alldata; 
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	pracownik.surname ="Nowak";
	pracownik.name ="Marek";
	pracownik.showPersonality ="";
	pracownik.showSurname();
	pracownik.showName();
	pracownik.showPersonality();
	return 0;
}
// Zad dom imie nazwisko narodowość data urodzenia wzrost



#include <iostream>
//#include <math.h>
using namespace std;

//Zad.0

/*int dodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
void wyswietlanie(int a, int b); //funkcja bedaca procedura :)

int zmiennaGlobalna = 10; //ustawienie zmiennej globalnej na 10

int main() { //kod 04_05
	int a = 45, b = 25;	//ustawienie zmiennych a i b
	int suma = dodawanie(a, b); //wywolanie funkcji dodawanie i przypisanie wyniku do zmiennej suma
	cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
	a += 4;	//zwiekszenie wartosci a o 4
	wyswietlanie(a, b);	//wywolanie procedury wyswietlanie
	cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
	cout << "Wartosci a oraz b: " << a << " i " << b << endl;	//funkcja wyswietlanie nie zmienia wartosci a i b w mainie, ponieważ są one zmiennymi lokalnymi i ta funkcja nie miała return aby je zmienić
	return 0;
}

int dodawanie(int c, int b) {
	b = c + b;
	return b;	//b się nie zmienia ponieważ c jest niezdefiniowana
}

void wyswietlanie(int a, int b) {
	cout << "Wynik procedury / funkcji z void: " << a + b << endl; //wyswietlenie wyniku gdzie a jest zwiększone o 4
	zmiennaGlobalna = 20; //zmienia zminną globalną na 20
	a = 111;
	b = 222;
}*/

	//Zad.1

	/*void przywitaj(string imie);
		int main() {
		przywitaj("Adam");
	return 0;
	}

	void przywitaj(string imie) {
		cout << "Cesc, " << imie << endl;
	}*/

	//Zad.2

	/*void tabliczka();
	int main() {
		cout << "Tambliczka monozenia:\n";
		tabliczka();
		return 0;
	}
	void tabliczka() {
		for (int i = 1; i <= 10; i++) {
			for (int j = 1; j <= 10; j++) {
				cout << i * j << "\t";
			}
			cout << "\n";
		}
	}*/

//Zad.3

/*void nierówność(int a, int b);
int większa(int a, int b);

int main() {
	int a, b;
	cout << "Podaj dwie licznby calkowite:\n";
	cin >> a >> b;
	nierówność(a, b);
	int c = większa(a, b);
	cout << "Wieksza liczba to: " << c << endl;
}
void nierówność(int a, int b) {
	if (a > b) {
		cout <<  a << " jest wieksze" << endl;
	}
	else if (a < b) {
		cout <<  b << " jest wieksze" << endl;
	}
	else {
		cout << "Liczby sa rowne" << endl;
	}
}
int większa(int a, int b) {
	if (a > b) {
		return a;
		cout << a;
	}
	else if (a < b) {
		return b;
		cout << b;
	}
	else {
		return 0;
	}
}*/

//Zad.4

/*void nierówność(int a, int b, int c);
int mniejsza(int a, int b, int c);

int main() {
	int a, b, c;
	cout << "Podaj trzy licznby calkowite:\n";
	cin >> a >> b >> c;
	nierówność(a, b, c);
	int d = mniejsza(a, b, c);
	cout << "Najmniejsza liczba to: " << d << endl;
}
void nierówność(int a, int b, int c) {
	if (a == b && a == c) {
		cout << a << " = " << b << " = " << c << endl;
	}
	else if (a < b && a < c) {
		cout << a << " jest najmniejsze" << endl;
	}
	else if (b < a && b < c) {
		cout << b << " jest najmniejsze" << endl;
	}
	else if (c < a && c < b) {
		cout << c << " jest najmniejsze" << endl;
	}
	else if (a == b && a < c) {
		cout << a << " i " << b << " sa najmniejsze" << endl;
	}
	else if (a == c && a < b) {
		cout << a << " i " << c << " sa najmniejsze" << endl;
	}
	else if (b == c && b < a) {
		cout << b << " i " << c << " sa najmniejsze" << endl;
	}
	else {
		cout << "Niepoprawne dane" << endl;
	}
}
int mniejsza(int a, int b, int c) {
	if (a < b && a < c) {
		return a;
	}
	else if (b < a && b < c) {
		return b;
	}
	else if (c < a && c < b) {
		return c;
	}
	else if (a == b && a < c) {
		return a, b;
	}
	else if (a == c && a < b) {
		return a, c;
	}
	else if (b == c && b < a) {
		return b, c;
	}
	else {
		return a, b, c;
	}
}*/

//Zad.5

/*float wymiary(float a);

int main() {
	float a, b, c;
	a = 1;
	b = wymiary(a);
	c = b * 2;
	cout << "Podwojone pole to: " << c;
}

float wymiary(float a) {
	float b, c;
	cout << "Podaj podstawe trojkata: ";
	cin >> b;
	cout << "Podaj wysokosc trojkata: ";
	cin >> c;
	a = b * c / 2;
	cout << "Pole trojkata: " << a << "\n";
	return a;
}*/

//Zad.6

/*int main() {
	int n;
	cin >> n;
	if (n <= 0) {
		cout << "Error :c" << endl;
		return 0;
	}
	else {
		for (int i = 1; i <= n / 2; i++) {
			if (n % i == 0) {
				cout << i << endl;
			}
			else
				continue;
		}
	}
}*/

//Zad.7

/*int średnia();

int main() {
	int f = średnia();
	cout << "Srednia wazona: " << f;
}

int średnia() {
	int c, d, e;
	int a = 15;
	int b = 7;
	cout << "Podaj wage dla " << a << " " << endl;
	cin >> c;
	cout << "Podaj wage dla " << b << " " << endl;
	cin >> d;
	e = (c * a + d * b) / 2;
	return e;
}*/

//Zad.8

/*void pitagoras(int a, int b);

int main() {
	int a, b;
	cout << "Podaj przyprostokatne:\n";
	cin >> a >> b;
	if (a <= 0.0 || b <= 0.0) {
		cout << "Error :c" << endl;
	}
	else
		pitagoras(a, b);
}
void pitagoras(int a, int b) {
	float c = sqrt(a*a + b*b);
	cout << "Przeciwprostokanta wynosi: " << c << endl;
}*/

//Zad.9

/*int dodawanie(int a, int b);
int odejmowanie(int a, int b);
int mnożenie(int a, int b);
int dzielenie(int a, int b);
int main() {
	char opcja, kontynuacja;
	float a, b, c;
	kontynuacja = 'y';
	while (kontynuacja == 'y') {
		printf("Pierwsza liczba dzialania:\n");
		cin >> a;
		printf("Druga liczba dzialania:\n");
		cin >> b;
		printf("Podaj jaki rachunek chcesz zrobic:\n");
		cin >> opcja;
		switch (opcja)
		{
		case '+':
			printf("Wybrales/-as dodawanie\n");
			c = dodawanie(a, b);
			cout << a << " + " << b << " = " << c << endl;
			cout << "Czy chcesz kontynuowac? (y/n): ";
			cin >> kontynuacja;
			if (kontynuacja != 'y' && kontynuacja != 'n') {
				printf("Niepoprawna opcja, zakonczenie programu\n");
				return 0;
			}
			else if (kontynuacja == 'n') {
				printf("Zakonczenie programu\n");
				return 0;
			}
			else
				printf("Kontynuacja programu\n");
			break;
		case '-':
			printf("Wybrales/-as odejmowanie\n");
			c = odejmowanie(a, b);
			cout << a << " - " << b << " = " << c << endl;
			cout << "Czy chcesz kontynuowac? (y/n): ";
			cin >> kontynuacja;
			if (kontynuacja != 'y' && kontynuacja != 'n') {
				printf("Niepoprawna opcja, zakonczenie programu\n");
				kontynuacja = 'n';
				return 0;
			}
			else if (kontynuacja == 'n') {
				printf("Zakonczenie programu\n");
				return 0;
			}
			else
				printf("Kontynuacja programu\n");
			break;
		case '*':
			printf("Wybrales/-as mnozenie\n");
			c = mnożenie(a, b);
			cout << a << " * " << b << " = " << c << endl;
			cout << "Czy chcesz kontynuowac? (y/n): ";
			cin >> kontynuacja;
			if (kontynuacja != 'y' && kontynuacja != 'n') {
				printf("Niepoprawna opcja, zakonczenie programu\n");
				kontynuacja = 'n';
				return 0;
			}
			else if (kontynuacja == 'n') {
				printf("Zakonczenie programu\n");
				return 0;
			}
			else
				printf("Kontynuacja programu\n");
			break;
		case '/':
			printf("Wybrales/-as dzielenie\n");
			c = dzielenie(a, b);
			cout << "Czy chcesz kontynuowac? (y/n): ";
			cin >> kontynuacja;
			if (kontynuacja != 'y' && kontynuacja != 'n') {
				printf("Niepoprawna opcja, zakonczenie programu\n");
				kontynuacja = 'n';
				return 0;
			}
			else if (kontynuacja == 'n') {
				printf("Zakonczenie programu\n");
				return 0;
			}
			else
				printf("Kontynuacja programu\n");
		break;
		default:
		printf("Nie podano poprawnego dzialania\n");
		break;
	}
}
return 0;
}
int dodawanie(int a, int b) {
	int dod = a + b;
	return dod;
}
int odejmowanie(int a, int b) {
	int ode = a - b;
	return ode;
}
int mnożenie(int a, int b) {
	int mno = a * b;
	return mno;
}
int dzielenie(int a, int b) {
	int dzi;
	if (b == 0) {
		printf("Nie mozna dzielic przez 0\n");
		return 0;
	}
	else {
		dzi = a / b;
		cout << a << " / " << b << " = " << dzi << endl;
		return dzi;
	}
}*/

//Zad.10

/*int suma(int a);
void suma2(int a);

int main() {
	int a;
	cout << "Podaj liczbe skladnikow: ";
	cin >> a;
	int d = suma(a);
	cout << "Suma v1 to " << d << endl;
	suma2(a);
	return 0;
}
int suma(int a) {
	int b;
	cout << "Podaj skladnik sumy v1: ";
	cin >> b;
	int c = b;
	for (int i = 1; i < a; i++) {
		cout << "Podaj skladnik sumy v1: ";
		cin >> b;
		c = c + b;
	}
	return c;
}
void suma2(int a) {
	int b;
	cout << "Podaj skladnik sumy v2: ";
	cin >> b;
	int c = b;
	for (int i = 1; i < a; i++) {
		cout << "Podaj skladnik sumy v2: ";
		cin >> b;
		c = c + b;
	}
	cout << "Suma v2 to " << c;
}*/

//Zad.11

/*float obwód(float a, float b, float c);

int main() {
	float a, b, c;
	c = 0;
	cout << "Podaj boki prostokatu:\n";
	cin >> a >> b;
	c = obwód(a, b, c);
	cout << "Obwod wynosi " << c;

}
float obwód(float a, float b, float c) {
	c = 2 * a + 2 * b;
	return c;
}*/

//Zad.12

//Nie wiem co ma znaczyć "Bez argumentów"

//Zad.13

/*int potenga(int a, int b);

int main() {
	int a, b;
	cout << "Podstawa potengi: ";
		cin >> a;
	cout << "Wykladnik potengi: ";
		cin >> b;
		a = potenga(a, b);
		cout << "Wynik to " << a;
}
int potenga(int a, int b) {
	int pot = 1;
	for (int i = 0; i < b; i++){
		pot = pot * a;
		}
	return pot;
}*/

//Zad.14

/*int silnia(int n);

int main() {
	int n;
	cout << "Podan silnie: ";
	cin >> n;
	if (n < 0) {
		cout << "Error" << endl;
		return 0;
	}
	n = silnia(n);
	cout << "Wynik to " << n;
}
int silnia(int n) {
	int pot = 1;
	for (int i = 1; i <= n; i++) {
		pot = pot * i;
	}
	return pot;
}*/

//Zad.15

//Nie rozumiem podpunktów zadania

//Zad.16

/*void losowanie(int a);
int main() {
	int a;
	cout << "Podaj szczensliwy numerek (liczbe calkowita) z przedzialu [1,10]: ";
	cin >> a;
	losowanie(a);
}
void losowanie(int a) {
	int l = 0;
	if (a < 1 || a > 10) {
		cout << "Liczba musi byc z przedzialu [1,10] i nie mozna wkonac zadania :3" << endl;
	}
	else {
		for (int i = 0; i < 10; i++) {
			int losowa = (rand() % 10) + 1;
			if (losowa == a) {
				l++;
			}
		}
		if (l == 0) {
			cout << "Niestety twoj szczensliwy numerek nie zostal wylosowany :c" << endl;
		}
		else if (l == 1) {
			cout << "Twoj szczensliwy numerek zostal wylosowany " << l << " raz :D" << endl;
		}
		else
			cout << "Twoj szczensliwy numerek zostal wylosowany " << l << " razy :D" << endl;
	}
}*/

//Zad.17

/*int parzysta(int n);
int nieparzysta(int n);

int main() {
	int n;
	int a;
	for (int n = 0; n < 100; n++) {
		if (n % 2 == 0) {
			a = parzysta(n);
			cout << a << endl;
		}
		else {
			a = nieparzysta(n);
			cout << a << endl;
		}

	}
}
int parzysta(int n) {
	int p = n / 2;
	return p;
}
int nieparzysta(int n) {
	int np = (n - 1) / 2;
	return np;
}*/

//Zad.18

/*int działania(int a);

int main() {
	int a, b;
	cout << "Podaj liczbe: ";
	cin >> a;
	b = działania(a);
	cout << "Wynik to: " << b;
}
int działania(int a) {
	int b;
	if (a % 6 == 0) {
		cout << "Zwraca '0'\n";

	return 0;
	}
	else if (a % 3 == 0) {
		cout << "Zwraca szescian\n";
		b = a * a * a;
		return b;
	}
	else if (a % 2 == 0) {
		cout << "Zwraca kwadrat\n";
		b = a * a;
		return b;
	}
	else {
		cout << "Error :c\n";
		return a;
	}
}*/
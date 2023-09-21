#include <iostream> 
using namespace std;

int main(){
	int a;
	int b;
	int wynik;

	cout << "Podaj zmienna a: ";
	cin >> a;
	cout << "Podaj zmienna b: ";
	cin >> b;
	
	if (a>b){
		wynik=a-b;
	}
	else{
		wynik=b-a;
	}
	
	cout << "Wynik odejmowania wiekszej liczby od mniejszej to: " << wynik;


    return 0;
}
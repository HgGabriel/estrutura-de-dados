#include <iostream>
using namespace std;

int main() {

	float r, altura;
	
	cout << "Digite o valor do raio da lata: ";
	cin >> r;
	
	cout << "Digite o valor da altura da lata: ";
	cin >> altura;

	cout << "O volume da lata é: " << 3.14159 * (r*r) * altura;
}

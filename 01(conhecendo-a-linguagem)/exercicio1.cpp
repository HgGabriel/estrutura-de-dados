#include <iostream>
using namespace std;

int main() {
	
	float celsius;
	
	cout << "Digite uma temperatura: ";
	cin >> celsius;
	
	cout << "A Temperatura em celsius seria de: " << (9 * celsius + 160) / 5;
	
	return 0;
}

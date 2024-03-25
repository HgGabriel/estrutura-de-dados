#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int num1, num2, dividido, divisor, resto, mdc, quociente;
		
	cout << "digite o primeiro número ";
	cin >> num1;
	cout << "digite o segundo número ";
	cin >> num2;
	
	if (num1 >= num2) {
		dividido = num1;
		divisor = num2;
	} else {
		dividido = num2;
		divisor = num1;
	}
	
	do {
		quociente = dividido / divisor;
		resto = dividido % divisor;
		
		mdc = divisor;
		
		dividido = divisor;
		divisor = resto;
	} while (resto != 0);
	
	return mdc;
}

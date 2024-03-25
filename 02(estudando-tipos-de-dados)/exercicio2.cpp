#include <iostream>

using namespace std;

int main(){
	int num1,potencia,contador = 0,produto = 1;
	setlocale(LC_ALL,"");
	cout << "digite um número ";
	cin >> num1;
	cout << "digite a potencia ";
	cin >> potencia;
	
	
	if(potencia == 0){
		num1 = 1;
	}
	else if (potencia == 1){
		num1 = num1;
	}else{
		while(contador < potencia){
			produto = num1 * produto;
				
		contador++;
	}	
	}

	return produto;
	
}

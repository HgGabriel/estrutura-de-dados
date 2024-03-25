#include <iostream>
using namespace std;
 
float grau (float grau){
	
	float radiano;

	return radiano = grau * 3.14 / 180;
}

int main(){
	setlocale(LC_ALL,"");
	
	float n1;
	
	cout << "digite o grau: ";
	cin >> n1;
		
	cout << "O resultado é: " << grau(n1);
	
	return 0;
}

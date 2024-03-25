#include <iostream>
using namespace std;
 
int produto (int n1, int n2){
	
	int r;

	return r = n1 * n2;
}

int main(){
	setlocale(LC_ALL,"");
	
	int n1, n2;
	
	cout << "digite o primeiro numero: ";
	cin >> n1;
	cout << "digite o segundo numero: ";
	cin >> n2;
	
	cout << "O resultado é: " << produto(n1,n2);
	
	return 0;
}

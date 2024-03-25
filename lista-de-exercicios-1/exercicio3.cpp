#include <iostream>
using namespace std;

int main() {
	int atual = 0, maior = 0, i=1;
	
	
	while (i<=5) {
	cout << "Digite um valor: ";
	cin >> atual;
	if (atual > maior){
	
		maior = atual;
	} 
	
	i++;
}

cout << maior;

return 0;

}

#include <iostream>
using namespace std;
 
float media (float n1, float n2, float n3, float n4){
	
	float media;

	return media = (n1 + n2 + n3 +n4)/4;
}

int main(){
	setlocale(LC_ALL,"");
	float n1, n2, n3, n4;
	
	cout << "digite o primeiro nota: ";
	cin >> n1;
	cout << "digite o segundo nota: ";
	cin >> n2;
	cout << "digite o terceiro nota: ";
	cin >> n3;
	cout << "digite o quarta nota: ";
	cin >> n4;
	
	cout << "A média é:"<< media(n1, n2, n3, n4);
	
	return 0;
}

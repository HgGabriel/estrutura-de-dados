#include <iostream>
using namespace std;
 
void maior (int n1, int n2){
	if( n1 > n2)
	{
		cout << n1;
	}
	else
	{
		cout << n2;
	}
}

int main(){
	setlocale(LC_ALL,"");
	int n1,n2;
		cout << "digite o primeiro numero: ";
	cin >> n1;
	cout << "digite o segundo numero: ";
	cin >> n2;
	
	maior(n1,n2);
	
	return 0;
}

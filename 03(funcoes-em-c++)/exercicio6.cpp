#include <iostream>
using namespace std;
 
void fato (int n1){
	
	if(n1 == 0){
		cout <<"O fatorial é: " << 1;
	}else{
		for(int i = n1; i > 1;i--){
			
			n1 = n1 * (i-1);
		}
		cout <<"O fatorial é: " << n1;
	}	
	
	
}

int main(){
	setlocale(LC_ALL,"");
	int n1;
	
	cout << "digite o numero para ser fatorado: ";
	cin >> n1;
	
	fato(n1);
		
	return 0;
}

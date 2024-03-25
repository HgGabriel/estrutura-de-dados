#include <iostream>

using namespace std;
 
int primo (int n1){
	
	int validador;
	if(n1 <= 1)
	{
		n1 = 4;
	}
		for(int i = n1-1; i > 1; i--)
	{
	
		int divisao = n1%i;
		
			if(divisao == 0){
			validador = 1;
			
			break;
			}else{
				validador = 0;
			
			}
		
	}
		
		return validador;
		
}

	

int main(){
	setlocale(LC_ALL,"");
	
	int n1;
	
	cout << "digite o primeiro numero: ";
	cin >> n1;
	
	if( primo(n1) == 1){
		cout << "numero nao é primo";
	}else{
		cout << "numero é primo";
	}
	
	
	return 0;
}

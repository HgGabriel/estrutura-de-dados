#include <iostream>
using namespace std;
 
int mes (int valor){
	 
	 if	(valor == 1 ){
	 	cout << "Janeiro";
	 }else if(valor == 2){
	 	cout << "Fevereiro";
	 }else if(valor == 3){
	 	cout << "Mar�o";
	 }else{
	 	cout << "N�mero invalido";
	 }
	
}

int main(){
	setlocale(LC_ALL,"");
	int n1;
	
	cout << "digite o numero do mes do primeiro trimestre: ";
	cin >> n1;

	mes(n1);
	
	return 0;
}


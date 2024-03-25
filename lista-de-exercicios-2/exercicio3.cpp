#include <iostream>
using namespace std;

int distancia(int x, int y){
	int distancia;
	
	return distancia = x * y; 
	
}
int main(){
	 int tempo, km, litros, litrosUsados;
	 
	 cout << "Digite as horas de viagem: ";
	 cin >> tempo;
	 cout << "Digite a velocidade em km/h: ";
	 cin >> km;
	 cout << "Quantos litros por km seu carro faz? ";
	 cin >> litros;
	 
	 litrosUsados = (distancia(tempo,km))/ litros;
	
	 cout << "Voce gastou " << litrosUsados << " litros, percorreu "<< distancia(tempo,km) << " km e demorou " << tempo << " horas";
	 
	 return 0;
	 

}

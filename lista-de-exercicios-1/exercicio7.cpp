#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x,maior,media,i;
	media = 0;
	maior = 0;
	
	for(i=0;i<15;i++)
	{
	    cout<<"Digite um valor";
	    cin>>x;
	    media = media +x;
	    
	    if(x>maior)
	    {
	        maior = x;
	    }
	}
	media = media/15;
	
	x = maior - media;
	
	cout<<"A diferenca e de "<<x;
    
    
    
}
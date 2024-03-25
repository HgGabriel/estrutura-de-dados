#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a,b,c,i;
	
	a=0;
	b=1;
	i=0;
	while(i<15)
	{
		cout<<" "<<b;
	    c=b;
		b=a+b;
		a=c;
		
		i++;
		
	}
	return 0;
}
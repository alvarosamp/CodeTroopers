#include <iostream>
using namespace std;
int main(){
	int n,x[1000] ;
	cin>>n;
	int menor = 9999;
	int aux = 0;
	
	for( int i = 0; i <n ; i++)
	{
		cin>>x[i];
		if(x[i] < menor){
			menor= x[i];
			aux = i;
		}
	}
	cout<<"Menor valor: "<<menor<<endl;
	cout<<"Posicao: "<<aux<<endl;
	return 0;
}
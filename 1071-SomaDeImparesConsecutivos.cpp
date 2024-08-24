#include <iostream>
using namespace std;

int main(){
	int x, y;
	int soma = 0 ;
	int max, min;
	cin>>x>>y;
	
	//Checando as condições
	if(x > y){
		max = x;
		min = y;
	}
	else {
		max = y;
		min = x;
	}
	for(int i = (min + 1); i < max; i++)
	{
		if(i%2 != 0){
			soma = soma + i;
		}
	}
	
	cout<<soma<<endl;
	
	
	return 0;
}
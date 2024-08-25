#include <iostream>
using namespace std;
int main(){
	int h1,m1,h2,m2;
	cin>>h1>>m1>>h2>>m2;
	
	int ht = h2-h1;
	int mt = m2-m1;
	int time ;
	//Convertendo tudo para minutos
	time = ((h2*60) + m2) - ((h1*60)+m1);
	if(time <= 0){
		
		cout<<"O JOGO DUROU "<<"24 HORA(S) "<<"E "<< "0 MINUTO(S)"<<endl;
	}	
	else{
	cout<<"O JOGO DUROU "<<time/60<<" HORA(S) "<<"E "<<time%60<<" MINUTO(S)"<<endl;
	}
	return 0;
}
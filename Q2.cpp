#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
	int n, x;	
	
	cout << "***Adivinhe um número entre 1 e 100***\n";
	cin >> x;

	srand(time(0));
	n = (rand()%100) + 1;	

	while(x != n){
		if(x > n){
			cout << "Muito alto. Tente novamente" << endl;
		}else{
			cout << "Muito baixo. Tente novamente" << endl;
		}
		cin >> x;
	}
	cout << "Parabéns. Você adivinhou o número" << endl;
	
	return 0;
}


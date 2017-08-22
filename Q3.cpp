#include <iostream>

using namespace std;

int main(){
	int n, i, x;
	int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;

	cout << "Quantos lançamentos do dado? (o "0" encerra o programa)";
	cin >> n;

	srand(time(0));	
	
	while(n != 0){
		for(i=0; i < n; i++){
			x = (rand()%6) + 1;
			if(x == 1)
				++c1;
			if(x == 2)
				++c2;
			if(x == 3)
				++c3;
			if(x == 4)
				++c4;
			if(x == 5)
				++c5;
			if(x == 6)
				++c6;
		}
		
		

		cin >> n;	
	}
	cout << "Programa encerrado";
	
	return 0;
}


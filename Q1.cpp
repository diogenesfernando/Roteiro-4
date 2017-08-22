#include <iostream>

using namespace std;

int main(){
	int val[100], maior=0, i;
	
	cout << "***Digite valores e pare com 0***" << endl;
	for(i=0; i<100; i++){
		cin >> val[i];
		if(val[i] == 0)
			break;
		if(val[i] > maior)
			maior = val[i];
	}
	cout << "O maior valor eh: " << maior << endl;
	
	
	return 0;
}


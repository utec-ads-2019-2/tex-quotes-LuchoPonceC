#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
	
    string leer;
	string texto = "";
	int buscar = 0;
	while(getline(cin,leer)){
		for(auto letra : leer){
			if(letra==34 and buscar == 0){
				cout<<char(96)<<char(96);
				buscar++;
			}
			else if(letra==34 and buscar == 1){
				cout<<char(39)<<char(39);
				buscar--;
			}
			else{
				cout<<letra;
			}
		}
		cout<<endl;
	}
	
	return 0;
}
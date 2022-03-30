#include<iostream>
#include<cstdlib>
using namespace std;



int main() {
	float n1;
	float n2;
	string res;
	do {
		n1 = (rand()%5)+1;
		n2 = (rand()%5)+1;
		cout << "El dado uno cayo en : " << n1 << "y el dado dos en : " << n2 << endl;
		cout << "La suma de los dados lanzados es:" << (n1+n2) << endl;
		cout << "Desea Lanzar los dados de nuevo? S/N:" << endl;
		cin >> res;
	} while (res!="N");
	
	
	return 0;
}


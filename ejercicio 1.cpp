#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float n[] = {27834, 23789, 30189, 30967, 32501, 32701, 31665, 17155, 4614, 834};
	float suma = 0;
		
	for(int i = 0;i<2;i++){
		suma+= n[i];
	}
	float promedio = suma/2;
	cout << "El promedio es de: " << promedio << endl;




	suma = 0;
	for(int i = 8;i<10;i++){

		suma+= n[i];
	}
	float promedio2 = suma/2;

	cout << "El promedio 2 es de: " << promedio2 << endl;
	
	cout << "La diferencia entre las dos utilidades operacionales es de: " << (promedio)-(promedio2) << endl;
	
	cin.get();
	return 0;
}
		

	





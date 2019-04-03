#include<iostream>
#include<math.h>
using namespace std;

int main() {
	float digito;
	float i;
	float resultado=0;
	float suma;
	int n;
	cout  << "cuantos digitos agregara: " << endl;

	cin >> n;
	
	cout << "Ingrese los digitos de izquierda a derecha: " << endl;

	for (i=1;i<=n;i++) {
		cout << "Digito" << i << endl;
		cin >> digito;
		if (digito==0 || digito==1) {
			resultado = digito * pow (2,i);
			suma = suma + resultado;
		} else {
			cout << "Ingrese solos 0s y 1s, vuelva a ingresar los valores: " << endl;
			i = i-1;
		}
	}
	cout << "El numero decimal es: " << suma << endl;
	return 0;
}


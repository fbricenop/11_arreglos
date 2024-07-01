#include <iostream>
using namespace std;
int main(){
	int n,array[20],contadorpares=0,contadorimpar=0,arraypares[20],arrayimpar[20];
	cout<<"INGRESE LA CANTIDAD DE ELEMENTOS DEL ARREGLO: "; cin>>n;
	for(int i=0;i<n;i++){
		cin>>array[i];
		if(array[i]%2==0){
			contadorpares++;
			//arraypares[contadorpares]=array[i];
			
		}else if(array[i]%2!=0){
			contadorimpar++;
			arrayimpar[contadorimpar]=array[i];
		}
		//arraypares[contadorpares]=array[i]%2==0;	
	}
	cout<<"SE HAN INGRESADO "<<contadorpares<<" NUMEROS PARES AL ARREGLO "<<arraypares[contadorpares]<<endl;
	cout<<"SE HAN INGRESADO "<<contadorimpar<<" NUMEROS IMPARES AL ARREGLO "<<arraypares[contadorimpar]<<endl;

	return 0;
}
#include <iostream>
using namespace std;
int main(){
	int n,array[20],contadorceros=0,elemento=0;
	double porcentaje;
	cout<<"INGRESE LA CANTIDAD DE ELEMENTOS DEL ARREGLO: "; cin>>n;
	for(int i=0;i<n;i++){
		elemento++;
		cout<<"ELEMENTO "<<elemento<<" DEL ARREGLO: "; cin>>array[i];
		s+=array[i];
		if(array[i]==0){
			contadorceros++;
		}
	}
	porcentaje=(contadorceros++*100)/n;
	cout<<"LA SUMATORIO DE LOS ELEMENTOS DE ARREGLO ES: "<<s<<endl;
	cout<<"EN EL ARREGLO EXISTEN: "<<contadorceros++-1<<" CEROS"<<endl;
	cout<<"REPRESENTA EL: "<<porcentaje<<"% DEL TOTAL DE DATOS";
	return 0;
}
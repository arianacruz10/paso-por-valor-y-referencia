#include<iostream>
using namespace std;
//valor

int suma1(int n){
	return n+1;
}

//referencia
void incremento(int &n){
	n =n+10;
}
int main(){
	int n, c,res;
	cout<<"ingresa un valor: "<<endl;
	cin>> n;
	cout<<"suma de dos numeros: "<<endl;
	c=suma1(n);
	incremento(n);
	cout<< c <<' '<<n<<endl;
	return 0;
}

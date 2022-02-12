#include <iostream>

using namespace std;

int main () {
	
int dato1, dato2, total, opcion;

cout<<"A continuacion se le presenta un listado de diferentes operaciones basicos, porfavor ingrese el numero de la operacion que desea realizar"<<endl;
cout<<"1. suma, 2. resta, 3. multiplicacion, 4. division"<<endl;
cin>> opcion;

switch (opcion){
	case 1:
		cout <<"ingrese el primer digito que desea operar"<<endl;
		cin >> dato1;
		
		cout <<"ingrese el segundo digito que desea operar"<<endl;
		cin >>dato2;
		
		total = dato1 + dato2;
		cout <<"el resultado de la suma es de "<<total<<endl; 
	break;
	case 2:
		cout <<"ingrese el primer digito que desea operar"<<endl;
		cin >> dato1;
		
		cout <<"ingrese el segundo digito que desea operar"<<endl;
		cin >>dato2;
		
		total = dato1 - dato2;
		cout <<"el resultado de la resta es de "<<total<<endl; 
	break;
	case 3:
		cout <<"ingrese el primer digito que desea operar"<<endl;
		cin >> dato1;
		
		cout <<"ingrese el segundo digito que desea operar"<<endl;
		cin >>dato2;
		
		total = dato1 * dato2;
		cout <<"el resultado de la multiplicacion es de "<<total<<endl; 
	break;
	case 4:
		cout <<"ingrese el primer digito que desea operar"<<endl;
		cin >> dato1;
		
		cout <<"ingrese el segundo digito que desea operar"<<endl;
		cin >>dato2;
		
		total = dato1 / dato2;
		cout <<"el resultado de la division es de "<<total<<endl; 
	break;
}
} 

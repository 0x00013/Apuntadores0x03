#include <iostream>
#include <string>

using namespace std;

bool funcion(int v1[], int tam, int x);
int menor(int v1[], int tam);
int str(string texto, int tam2);
void intercambio(int &a, int &b);
void mostrar(int arre[] ,int n);
int menor2(int *arre1, int n2);
int contarCadena(char *arreglo2);

int main(){
	int v1[10];
	int tam=0;
	int x=0;
	bool resp;
	string texto;
	int nuM=0;
	int numCa=0;
	int tam2;
	int a=0;
	int b=0;
	int arre[10];
	int n=0;
	int n2=0;
	char arreglo2[20];

	
	
	cout<<"Cuantos numeros son?"<<endl;
	cin>>tam;
	
	 for (int i=0; i<tam;i++){
		cout<<"Meter Datos"<<endl;
		cin>>v1[i];		
	 }
	        cout<<"numero a buscar"<<endl;
	        cin>>x;
	        resp=funcion(v1,tam,x);
	 
	 if (resp==1){
	     cout<<"Se encontro"<<endl;
	 	}
		else{
	 	cout<<" No Se encontro"<<endl;
	  }
	  
	        nuM=menor(v1, tam);
	        cout<<"Numero menor"<<"="<<nuM<<endl;
	  
	        cout<<"Cuantos datos son?"<<endl;
	        cin>>tam2;
	 
	 for (int i=0; i<tam2;i++){
		cout<<"Meter Datos Caracteres"<<endl;
		cin>>texto[i]; 
		}
		   
		numCa=str(texto, tam2);
		cout<<"Numero de Caracteres"<<"="<<numCa<<endl;

		cout<<"Ingrese el numero de A"<<endl;
		cin>>a;

		cout<<"ingrese el numero de B"<<endl;
		cin>>b;


                intercambio(a,b);
		cout<<"Valor de A invertido"<<a<<endl;
		cout<<"Valor de B invertido"<<b<<endl;


                cout<<"Cuantos numeros son?"<<endl;
                cin>>n;
	 
	   for(int i=0;i<n;i++){
		cout<<"Meter Datos"<<endl;
		cin>>arre[i];		
	        }
                mostrar(arre,n); 
    
                cout<<"Cuantos numeros son?"<<endl;
	        cin>>n2;
           for (int i=0;i<n2;i++){
		cout<<"Meter Datos"<<endl;
		cin>>arreglo2[i];		
	        }
		int contar = contarCadena(arreglo2);
		cout<<"Numero de Caracteres"<<contar<<endl;

	  return 0;
	 }
	
bool funcion(int v1[], int tam, int x){///Funcion booleana para saber si Se encontro o No se Encontro un numero "X"
	bool b=0;
	
	for (int i=0; i<tam;i++){
		if(x==v1[i]){
		b=1;
		}
	}
	return b;
}

int menor(int v1[], int tam){///Funcion Numero menor de un arreglo de numeros
	int numero=v1[0];
	
	for(int i=0;i<tam;i++){
		if(v1[i]<numero){
		numero=v1[i];
			
		}		
	}
	return numero;
}
int str(string texto, int tam2){///Funcion Mostrar Numero de Caracteres 
    int numCa=0;
    
    for(int i=0; i<tam2;i++)
     	if(texto[i]!='/0'){
     	      numCa++;
		 }
        return numCa;
	 }
	 
void intercambio(int &a, int &b){///Funcion Intercambio de valor de variables por referencia
	 int temp=0;
	 temp=a;
	 a=b;
	 b=temp;

}

void mostrar(int arre[] ,int n){///Funcion Mostrar Datos de un Arreglo con apuntadores
    int *p;
    int cont=0;
    p=arre;
    while(cont<n){
          cout<<"dato:"<< *p <<endl;
          p++;
          cont++;
    }

}

void intercambio1(int *x, int *y){///Funcion intercambio con apuntadores
	 int aux; 
	 aux=*x;
	 *x=*y;
	 *y=aux;

}

int menor2(int *arre1, int n){///Funcion numero menor con apuntadores
	int *p;
	p=arre1;
	int num=*p;
	for (int i=0;i<n;i++){
		if(num>*p){
		num=*p;
		}
		p++;
	}
	return num;
}


int contarCadena(char *arreglo2){///Funcion contar cadena con apuntadores
	char *p;
	p=arreglo2;
	int contar=0;

	while(*p!='\0'){
		contar++;
		p++;	

	}
		return contar;
}


void cambiar (char *arre){//Funcion Cambiar un Caracter por Otro Apuntadores
	 char *p;
	 p=arre;
	 while(*p='\0'){
		 if(*p==' '){
	            *p=95;//valor ASCII "-"" 
		 }
        p++;
	 }
}

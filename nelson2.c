//Nelson Gonzalez Guerra
//tarea numero 4
//rut=19084305-k
#include <stdio.h>

int main(){
	char palabra[]="ororecenc"; //primero ingrese esta palabra para intentar analizarla independiente de lo desordenada que este, con esas letras se puede
	char aux1;					//formar la palabra "reconocer" que si es un palindromo y donde la palabra ingresada es un anagrama de "reconocer" 
	int letras=0;
	int i;
	int contador=0;
	int imagen=0;
	int reflejo=8;
	for (i=0;i=8; ++i){ //aca me aseguro de contar cuantas letras tiene la palabra, dato que sera importante mas adelante
		letras++;
	}
	for (imagen=0;imagen<8;imagen++){ //aca tengo un algoritmo de ordenamiento, funciona buscando pares de letras y dejandolas juntas, de modo que 
		for (i=1;i<9; ++i){           //si hay una letra o mas letras que no tengan una letra igual en la palabra, este las dejara al final
			if (palabra[imagen]==palabra[i]){ // en este caso este algoritmo dejo ordenada la palabra de la forma "oorrcceen"
				aux1=palabra[reflejo];
				palabra[reflejo]=palabra[i];
				palabra[i]=aux1; //defini este auxiliar para almacenar un caracter para luego cambiar las posiciones de las letras sin que estas se perdieran
			}
		}
	}
	for (i=0;i<7;++i){                   //aca es donde hago la contabilidad de cuantos pares tiene la palabra usando el resultado del algoritmo de ordenamiento
		if (palabra[i]==palabra[i+1]){
			contador++;
		}
	}
	if (contador>0){                     //aca es donde se hace importante la variable "letras" ya que se va a hacer una comparacion entre 
		if (contador=(int)letras/2){			 //la cantidad de pares que fueron encontrados y el couciente entero de letras/2 para asegurarse de 
			printf("1\n");               //que hay una cantidad de pares de modo que solo quede una letra sola, lo mismo para palabras con
		}                                //un numero de letras par
	}
	else{                                //luego se procede a impimir un 1 si es que la palabra es un palindromo y un 0 en caso contario
		printf("0\n");                   //se imprimiria un 0 en el caso de que quedaran mas de una letra unica las cuales no formaria un par
	}                                    //con ninguna otra y no se cumpliria la comparacion entre el numero de pares y letras/2
	return 0;
}
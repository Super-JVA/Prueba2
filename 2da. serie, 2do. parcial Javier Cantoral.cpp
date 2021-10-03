#include <iostream>

using namespace std;

int main()
{
    //Declaro las variables
    int cant, cuota, interes, mes, total; 
  
    
	cout<<"Ingrese la cantidad que solicita para el prestamo: "<<endl;
	cin>>cant;
	cout<<"Ingrese en cuantas cuotas pagara el prestamo, solamente puede elegir pagar entre 6,9,12,15 y 18 cuotas: "<<endl;
	cin>>cuota;
    
    //hago un switch ya que dependiendo de la couta que elija el usuario se le aplica un interes diferente
    switch(cuota){
        case 6:
        interes=cant*0.05*cuota; //Calculo el interes multiplicando la cantidad dada al principio por el porcentaje del interes por la cuota 
        mes=interes/cuota; 			//obtengo lo que se debe pagar al mes dividiendo la cantidad con interes dentro del numero de meses es decir la cuota 
    	total=(interes*cuota)+cant; 	//obtengo el total multiplicando el interes por la cantidad de meses y a esto le sumo la cantidad inicial
	    cout<<"Debera pagar mensualmente: Q"<<mes<<endl; //muestro lo que se pagara mensualmente
		cout<<"El total a pagar por el prestamo es de: Q"<<total<<endl;break; //muestro lo que se pagara en total y repito con los demas casos
		
        case 9:
        interes=cant*0.07*cuota;
        mes=interes/cuota;
        total=(interes*cuota)+cant;
	    cout<<"Debera pagar mensualmente: Q"<<mes; 
		cout<<"El total a pagar por el prestamo es de: Q"<<total<<endl;break;
		
        case 12:
        interes=cant*0.1*cuota;
        mes=interes/cuota;
        total=(interes*cuota)+cant;
	    cout<<"Debera pagar mensualmente: Q"<<mes<<endl; 
		cout<<"El total a pagar por el prestamo es de: Q"<<total<<endl;break;
		
        case 15:
        interes=cant*0.12*cuota;
        mes=interes/cuota;
        total=(interes*cuota)+cant;
	    cout<<"Debera pagar mensualmente: Q"<<mes<<endl;
		cout<<"El total a pagar por el prestamo es de: Q"<<total<<endl;break;
		
        case 18:
        interes=cant*0.16*cuota;
        mes=interes/cuota;
        total=(interes*cuota)+cant;
	    cout<<"Debera pagar mensualmente: Q"<<mes<<endl; 
		cout<<"El total a pagar por el prestamo es de: Q"<<total<<endl;break;
		
        default:cout<<"Cuota no valida"<<endl;break; //en caso se selecciona una cuota diferente a 6,9,12,15,18 mostrara el mensaje diciendo "cuota no valida"
    }
   
    return 0;
}


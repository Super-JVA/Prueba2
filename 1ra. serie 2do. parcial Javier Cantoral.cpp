#include <iostream>

using namespace std;

int main() 
{
    //Declaramos algunas variables que se utilizaran 
    int mercaderia,siNo;
    float km,pesoArticulo,valorTarifa,largoP,anchuraP,alturaP,pesoV;
    
    
    cout<<"Programa para calcular el valor a pagar por traslado de paqueterias entre departamentos "<<endl<<endl;
	
	//Aqui desplegamos un menu, en donde el usuario elegira que tipo de paquete se enviara 
	cout<<"A continuacion, se muestra el menu de los tipos de mercaderia que se puede enviar: "<<endl<<endl;
	cout<<"1. Documentos"<<endl<<endl;
	cout<<"2. Paqueteria"<<endl<<endl;
	cout<<"3. Mobiliario"<<endl<<endl;
	cout<<"4. Repuestos"<<endl<<endl;
	cout<<"5. Articulos electronicos"<<endl<<endl;
	
	//El usuario puede elegir entre las siguientes opciones, dependiendo que tipo de mercaderia es
	cout<<"\nSeleccione el tipo de mercaderia que desea enviar segun el numero correspondiente a esta : \n"<<endl;
	cin>>mercaderia;

	switch(mercaderia){//Utilizaremos la condicional switch 
	default:cout<<"Por favor, ingrese un valor valido.  ";break;//De no ingresar un valor valido, el programa finalizara
	    case 1: 
	    //Para el envio de documentos se paga la misma cantidad sin importar el departamento
	    cout<<"El tipo de mercaderia es: Documentos, y su tarifa de traslado es de Q.40.00 en cualquier parte del pais"<<endl;break;
	   
	    
	    case 2:
	   
	    cout<<"\nTiene conocimiento del peso del articulo?: "<<endl;
	    cout<<"Si = 1, No= 0 "<<endl; //Aqui el usuario tendra que ingresar si conoce el peso del producto que quiere enviar, y se le dan diferentes opciones
	    cin>>siNo;
	    
	    switch (siNo) {
	    
	        case 1:
	        cout<<"Ingrese el peso del paquete en kg (el peso maximo es de 35 kg): "<<endl<<endl; 
		    cin>>pesoArticulo;
		    
		    if(pesoArticulo>35){
		    	
				cout<<"El peso del producto excede el limite permitido"<<endl<<endl;break;	
			}
			else{
				cout<<"A continuacion, se le muestra las distintas ubicaciones con su respectiva distancia a recorrer: "<<endl<<endl;
			}
				
					cout<<"1. Guatemala - 10km"<<endl;
					cout<<"2. Izabal - 300km"<<endl;
					cout<<"3. Peten - 460km"<<endl;
					cout<<"4. Chiquimula - 178km"<<endl;
					cout<<"5. Retalhuleu - 200km"<<endl<<endl;
					cout<<"Ingrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: "<<endl<<endl;
					cin>>km;
				
	        valorTarifa=(pesoArticulo*2.5)+(km*0.13);
					cout<<"El tipo mercaderia indicada es: Papeleria"<<endl<<endl;
					cout<<"La distancia es de "<<km;cout<<" kilometros"<<endl<<endl;
					cout<<"Su tarifa a pagar es de: Q"<<valorTarifa<<endl<<endl;break;
			
			case 0: 
		        	cout<<"-No conozco el paquete-"<<endl<<endl;
		        	cout<<"A continuacion, ingrese los siguientes valores para calcular el peso volumetrico. "<<endl<<endl;
		        	//Aqui el usuario debera de colocar las medidas del paquete para obtener el peso volumetrico 
		        	cout<<"Ingrese el largo del paquete en cm: "<<endl;
					cin>>largoP;
					
					cout<<"Ingrese la anchura del paquete en cm: "<<endl;
					cin>>anchuraP;
					
					cout<<"Ingrese la altura del paquete en cm: "<<endl;
					cin>>alturaP;
					
					pesoV=(largoP*anchuraP*alturaP)/2272; //Formula del peso volumetrico
					
				if(pesoV>50){//Aqui ponemos que no exceda el limite 50kg el peso volumetrico
					cout<<"El peso volumetrico excede el limite permitido";break;
				}
				else{
					cout<<"El volumen volumetrico es de: " <<pesoV<<endl<<endl;
				}			
					cout<<"A continuacion, se le muestra las distintas ubicaciones con su respectiva distancia a recorrer: "<<endl<<endl;
					
					cout<<"1. Guatemala-10km"<<endl<<endl;				
					cout<<"2. Izabal-300km"<<endl<<endl;					
					cout<<"3. Peten-460km"<<endl<<endl;			
					cout<<"4. Chiquimula-178km"<<endl<<endl;
					cout<<"5. Retalhuleu-200km"<<endl<<endl;
					
					cout<<"Ingrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: "<<endl<<endl;
					cin>>km;
					
					valorTarifa=(pesoArticulo*2.5)+(km*0.13);
					cout<<"El tipo mercaderia indicada es: Papeleria"<<endl<<endl;
					cout<<"La distancia es de "<<km;cout<<" kilometros"<<endl<<endl;
					cout<<"Su tarifa a pagar es de: Q"<<valorTarifa<<endl<<endl;break;
					//El resultado sera este, el tipo de mercaderia, la distancia a recorrer y el valor a pagar por el envio de paqueteria
					
					
				default:cout<<"Por favor, ingrese un valor valido.  ";break;
				//El mensaje de arriba se mostrara cuando el usuario ingrese un valor que no corresponde en la opcion "Tiene conocimiento del peso del articulo?"
	    }break;
	    
	    case 3:
	   
	    cout<<"\nTiene conocimiento del peso del articulo?: "<<endl;
	    cout<<"Si = 1, No= 0 "<<endl; //Aqui el usuario tendra que ingresar si conoce el peso del producto que quiere enviar, y se le dan diferentes opciones
	    cin>>siNo;
	    
	    switch (siNo) {
	    
	        case 1:
	        cout<<"Ingrese el peso del paquete en kg (el peso maximo es de 35 kg): "<<endl<<endl; 
		    cin>>pesoArticulo;
		    
		    if(pesoArticulo>35){
		    	
				cout<<"El peso del producto excede el limite permitido"<<endl<<endl;break;	
			}
			else{
				cout<<"A continuacion, se le muestra las distintas ubicaciones con su respectiva distancia a recorrer: "<<endl<<endl;
			}
				
					cout<<"1. Guatemala - 10km"<<endl;
					cout<<"2. Izabal - 300km"<<endl;
					cout<<"3. Peten - 460km"<<endl;
					cout<<"4. Chiquimula - 178km"<<endl;
					cout<<"5. Retalhuleu - 200km"<<endl<<endl;
					cout<<"Ingrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: "<<endl<<endl;
					cin>>km;
				
	        valorTarifa=(pesoArticulo*2.5)+(km*0.13);
					cout<<"El tipo mercaderia indicada es: Mobiliario"<<endl<<endl;
					cout<<"La distancia es de "<<km;cout<<" kilometros"<<endl<<endl;
					cout<<"Su tarifa a pagar es de: Q"<<valorTarifa<<endl<<endl;break;
			
			case 0: 
		        	cout<<"-No conozco el paquete-"<<endl<<endl;
		        	cout<<"A continuacion, ingrese los siguientes valores para calcular el peso volumetrico. "<<endl<<endl;
		        	//Aqui el usuario debera de colocar las medidas del paquete para obtener el peso volumetrico 
		        	cout<<"Ingrese el largo del paquete en cm: "<<endl;
					cin>>largoP;
					
					cout<<"Ingrese la anchura del paquete en cm: "<<endl;
					cin>>anchuraP;
					
					cout<<"Ingrese la altura del paquete en cm: "<<endl;
					cin>>alturaP;
					
					pesoV=(largoP*anchuraP*alturaP)/2272; //Formula del peso volumetrico
					
				if(pesoV>50){//Aqui ponemos que no exceda el limite 50kg el peso volumetrico
					cout<<"El peso volumetrico excede el limite permitido.";break;
				}
				else{
					cout<<"El volumen volumetrico es de: " <<pesoV<<endl<<endl;
				}	
					
					cout<<"A continuacion, se le muestra las distintas ubicaciones con su respectiva distancia a recorrer: "<<endl<<endl;
					
					cout<<"1. Guatemala-10km"<<endl<<endl;				
					cout<<"2. Izabal-300km"<<endl<<endl;					
					cout<<"3. Peten-460km"<<endl<<endl;			
					cout<<"4. Chiquimula-178km"<<endl<<endl;
					cout<<"5. Retalhuleu-200km"<<endl<<endl;
					
					cout<<"Ingrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: "<<endl<<endl;
					cin>>km;
					
					valorTarifa=(pesoArticulo*2.5)+(km*0.13);
					cout<<"El tipo mercaderia indicada es: Mobiliario"<<endl<<endl;
					cout<<"La distancia es de "<<km;cout<<" kilometros"<<endl<<endl;
					cout<<"Su tarifa a pagar es de: Q"<<valorTarifa<<endl<<endl;break;
					//El resultado sera este, el tipo de mercaderia, la distancia a recorrer y el valor a pagar por el envio de paqueteria
					
					
				default:cout<<"Por favor, ingrese un valor valido.  ";break;
				//El mensaje de arriba se mostrara cuando el usuario ingrese un valor que no corresponde en la opcion "Tiene conocimiento del peso del articulo?"
	    }break;
	    
	    case 4:
	   
	    cout<<"\nTiene conocimiento del peso del articulo?: "<<endl;
	    cout<<"Si = 1, No= 0 "<<endl; //Aqui el usuario tendra que ingresar si conoce el peso del producto que quiere enviar, y se le dan diferentes opciones
	    cin>>siNo;
	    
	    switch (siNo) {
	    
	        case 1:
	        cout<<"Ingrese el peso del paquete en kg (el peso maximo es de 35 kg): "<<endl<<endl; 
		    cin>>pesoArticulo;
		    
		    if(pesoArticulo>35){
		    	
				cout<<"El peso del producto excede el limite permitido"<<endl<<endl;break;	
			}
			else{
				cout<<"A continuacion, se le muestra las distintas ubicaciones con su respectiva distancia a recorrer: "<<endl<<endl;
			}
				
					cout<<"1. Guatemala - 10km"<<endl;
					cout<<"2. Izabal - 300km"<<endl;
					cout<<"3. Peten - 460km"<<endl;
					cout<<"4. Chiquimula - 178km"<<endl;
					cout<<"5. Retalhuleu - 200km"<<endl<<endl;
					cout<<"Ingrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: "<<endl<<endl;
					cin>>km;
				
	        valorTarifa=(pesoArticulo*2.5)+(km*0.13);
					cout<<"El tipo mercaderia indicada es: Repuestos"<<endl<<endl;
					cout<<"La distancia es de "<<km;cout<<" kilometros"<<endl<<endl;
					cout<<"Su tarifa a pagar es de: Q"<<valorTarifa<<endl<<endl;break;
			
			case 0: 
		        	cout<<"-No conozco el paquete-"<<endl<<endl;
		        	cout<<"A continuacion, ingrese los siguientes valores para calcular el peso volumetrico. "<<endl<<endl;
		        	//Aqui el usuario debera de colocar las medidas del paquete para obtener el peso volumetrico 
		        	cout<<"Ingrese el largo del paquete en cm: "<<endl;
					cin>>largoP;
					
					cout<<"Ingrese la anchura del paquete en cm: "<<endl;
					cin>>anchuraP;
					
					cout<<"Ingrese la altura del paquete en cm: "<<endl;
					cin>>alturaP;
					
					pesoV=(largoP*anchuraP*alturaP)/2272; //Formula del peso volumetrico
					
				if(pesoV>50){//Aqui ponemos que no exceda el limite 50kg el peso volumetrico
					cout<<"El peso volumetrico excede el limite permitido.";break;
				}
				else{
					cout<<"El volumen volumetrico es de: " <<pesoV<<endl<<endl;
				}
					cout<<"A continuacion, se le muestra las distintas ubicaciones con su respectiva distancia a recorrer: "<<endl<<endl;
					
					cout<<"1. Guatemala-10km"<<endl<<endl;				
					cout<<"2. Izabal-300km"<<endl<<endl;					
					cout<<"3. Peten-460km"<<endl<<endl;			
					cout<<"4. Chiquimula-178km"<<endl<<endl;
					cout<<"5. Retalhuleu-200km"<<endl<<endl;
					
					cout<<"Ingrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: "<<endl<<endl;
					cin>>km;
					
					valorTarifa=(pesoArticulo*2.5)+(km*0.13);
					cout<<"El tipo mercaderia indicada es: Repuestos"<<endl<<endl;
					cout<<"La distancia es de "<<km;cout<<" kilometros"<<endl<<endl;
					cout<<"Su tarifa a pagar es de: Q"<<valorTarifa<<endl<<endl;break;
					//El resultado sera este, el tipo de mercaderia, la distancia a recorrer y el valor a pagar por el envio de paqueteria
					
					
				default:cout<<"Por favor, ingrese un valor valido.  ";break;
				//El mensaje de arriba se mostrara cuando el usuario ingrese un valor que no corresponde en la opcion "Tiene conocimiento del peso del articulo?"
	    }break;
	    
	    case 5:
	   
	    cout<<"\nTiene conocimiento del peso del articulo?: "<<endl;
	    cout<<"Si = 1, No= 0 "<<endl; //Aqui el usuario tendra que ingresar si conoce el peso del producto que quiere enviar, y se le dan diferentes opciones
	    cin>>siNo;
	    
	    switch (siNo) {
	    
	        case 1:
	        cout<<"Ingrese el peso del paquete en kg (el peso maximo es de 35 kg): "<<endl<<endl; 
		    cin>>pesoArticulo;
		    
		    if(pesoArticulo>35){
		    	
				cout<<"El peso del producto excede el limite permitido"<<endl<<endl;break;	
			}
			else{
				cout<<"A continuacion, se le muestra las distintas ubicaciones con su respectiva distancia a recorrer: "<<endl<<endl;
			}
				
					cout<<"1. Guatemala - 10km"<<endl;
					cout<<"2. Izabal - 300km"<<endl;
					cout<<"3. Peten - 460km"<<endl;
					cout<<"4. Chiquimula - 178km"<<endl;
					cout<<"5. Retalhuleu - 200km"<<endl<<endl;
					cout<<"Ingrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: "<<endl<<endl;
					cin>>km;
				
	        valorTarifa=(pesoArticulo*2.5)+(km*0.13);
					cout<<"El tipo mercaderia indicada es: Articulos Electronicos "<<endl<<endl;
					cout<<"La distancia es de "<<km;cout<<" kilometros"<<endl<<endl;
					cout<<"Su tarifa a pagar es de: Q"<<valorTarifa<<endl<<endl;break;
			
			case 0: 
		        	cout<<"-No conozco el paquete-"<<endl<<endl;
		        	cout<<"A continuacion, ingrese los siguientes valores para calcular el peso volumetrico. "<<endl<<endl;
		        	//Aqui el usuario debera de colocar las medidas del paquete para obtener el peso volumetrico 
		        	cout<<"Ingrese el largo del paquete en cm: "<<endl;
					cin>>largoP;
					
					cout<<"Ingrese la anchura del paquete en cm: "<<endl;
					cin>>anchuraP;
					
					cout<<"Ingrese la altura del paquete en cm: "<<endl;
					cin>>alturaP;
					
					pesoV=(largoP*anchuraP*alturaP)/2272; //Formula del peso volumetrico
					
				if(pesoV>50){//Aqui ponemos que no exceda el limite 50kg el peso volumetrico
					cout<<"El peso volumetrico excede el limite permitido.";break;
				}
				else{
					cout<<"El volumen volumetrico es de: " <<pesoV<<endl<<endl;
				}
					
					cout<<"A continuacion, se le muestra las distintas ubicaciones con su respectiva distancia a recorrer: "<<endl<<endl;
					
					cout<<"1. Guatemala-10km"<<endl<<endl;				
					cout<<"2. Izabal-300km"<<endl<<endl;					
					cout<<"3. Peten-460km"<<endl<<endl;			
					cout<<"4. Chiquimula-178km"<<endl<<endl;
					cout<<"5. Retalhuleu-200km"<<endl<<endl;
					
					cout<<"Ingrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: "<<endl<<endl;
					cin>>km;
					
					valorTarifa=(pesoArticulo*2.5)+(km*0.13);
					cout<<"El tipo mercaderia indicada es: Articulos Electronicos"<<endl<<endl;
					cout<<"La distancia es de "<<km;cout<<" kilometros"<<endl<<endl;
					cout<<"Su tarifa a pagar es de: Q"<<valorTarifa<<endl<<endl;break;
					//El resultado sera este, el tipo de mercaderia, la distancia a recorrer y el valor a pagar por el envio de paqueteria
					
					
				default:cout<<"Por favor, ingrese un valor valido.  ";break;
				//El mensaje de arriba se mostrara cuando el usuario ingrese un valor que no corresponde en la opcion "Tiene conocimiento del peso del articulo?"
	    }break;
	    
	
	}
	
    return 0;
}


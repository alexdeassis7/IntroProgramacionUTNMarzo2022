package ar.com.utn.clase9;

//definimos la clase Auto
public class Auto {
	//defino los atributos de la clase Auto
	
	String color ;
	String marca;
	String patente;
	int cantidadDePuertas;
	String modelo;
	String anioFabricacion;
	
	//metodos constructores : nos sirven para instanciar objetos 
	public Auto() {
		//constructor vacio : crea un objeto vacio
	}
	
	//sobrecarga de metodos constructores
	public Auto(String color , String marca, String patente , int cantidadDePuertas, String modelo ,String anioFabricacion) {
		//constructor con parametros  : crea un objeto permitiendome inicializar los atributos 
//		this.nombreAtributo = nombreDelParametro;
		this.color = color;
		this.marca = marca ;
		this.patente = patente;
		this.cantidadDePuertas = cantidadDePuertas;
		this.modelo = modelo;
		this.anioFabricacion = anioFabricacion;
	}
	
	//definimos el metodo toString de la clase auto 
	public String toString() {
		return "Auto [color=" + color + ", marca=" + marca + ", patente=" + patente + ", cantidadDePuertas="
				+ cantidadDePuertas + ", modelo=" + modelo + ", anioFabricacion=" + anioFabricacion + "]";
	}

	
	//TAREA: Crea tres metodos dentro de la clase auto 
//	1) metodo arrancar
//    2) metodo acelerar
//    3) metodo frenar
    
	
	
}

package ar.com.utn.clase9;

public class Persona {
	// cuerpo de clase

	// atributos
	String fechaNacimiento;
	int edad;
	String nombre;
	String apellido;
	String nacionalidad;
	long dni;
	String ocupacion;
	String estadoCivil;

	// Metodos : definen comportamientos de las clases y pueden ser funciones o
	// procedimientos.

	// metodo toString que no recibe parametros y nos retorna un Strin con el nombre
	// de la clase
	// y el estado de todos los atributos de la clase
	public String toString() {
		return "Persona [fechaNacimiento=" + fechaNacimiento + ", edad=" + edad + ", nombre=" + nombre + ", apellido="
				+ apellido + ", nacionalidad=" + nacionalidad + ", dni=" + dni + ", ocupacion=" + ocupacion
				+ ", estadoCivil=" + estadoCivil + "]";
	}

	// defino los metodos correr , caminar y estudiar
	public void correr(int cantidadDeKilometros) {
		System.out
				.println("soy " + nombre + " tengo " + edad + " años y corro " + cantidadDeKilometros + " Kilomentros a la semana");
	}

	public void caminar() {
		System.out.println("Hoy el dia esta soleado y saldre a caminar");
	}

	public void estudiar(String clima) {
		System.out.print("hoy el dia esta " + clima);

		if (clima == "nublado") {
			System.out.print(" entonces me quedare a estudiar programacion");
		} else {
			System.out.print(" saldre de paseo con mis amigos.");
		}
	}

}

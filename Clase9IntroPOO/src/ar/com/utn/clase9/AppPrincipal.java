package ar.com.utn.clase9;

public class AppPrincipal {

	public static void main(String[] args) {
		// mostrar mensajes por consola
		System.out.println("Inicio de la App");

		// Funcion principal o punto de inicio de ejecucion de la app

		// instanciar o crear objetos de la clase Persona

		// creamos el objeto p1 invocando al constructor de la clase Persona
		// nombreDeLaCLase NombreDelObjeto = new Constructor();
		Persona p1 = new Persona();
		Persona p2 = new Persona();
		System.out.println("P2: " + p2.toString());
		// mostramos por consola el estado inicial de los atributos del objeto p1
//		System.out.println("fecha nacimiento :" + p1.fechaNacimiento);
//		System.out.println("edad: " + p1.edad);
//		System.out.println("nombre: " + p1.nombre);
//		System.out.println("apellido: " + p1.apellido);
//		System.out.println("nacionalidad: " + p1.nacionalidad);
//		System.out.println("dni: " + p1.dni);
//		System.out.println("ocupacion: " + p1.ocupacion);
//		System.out.println("estadoCivil: " + p1.estadoCivil);

		// imvocamos al metodo toString() de la clase Persona para conocer el estado de
		// sus atributos
//		String retorno= p1.toString();
//		System.out.println(retorno);
		System.out.println("P1: " + p1.toString());

		// modificamos el Estado de los atributos del objeto p1
		p1.fechaNacimiento = "20 Jul 1992";
		p1.edad = 28;
		p1.nombre = "Alex";
		p1.apellido = "De Assis";
		p1.nacionalidad = "Argentino";
		p1.dni = 37899563;
		p1.ocupacion = "Docente";
		p1.estadoCivil = "soltero";
		System.out.println("P1: " + p1.toString());

		// modificamos el Estado de los atributos del objeto p2
		p2.fechaNacimiento = "13 May 1985";
		p2.edad = 37;
		p2.nombre = "Agustin";
		p2.apellido = "Martinez";
		p2.nacionalidad = "Chileno";
		p2.dni = 33123546;
		p2.ocupacion = "Ingeniero";
		p2.estadoCivil = "casado";
		System.out.println("P2: " + p2.toString());

		// mostramos por consola el estado una vez editados los atributos del objeto p1
//		System.out.println("************************ Atributos con estado nuevo del objeto P1 *********************");
//		System.out.println("fecha nacimiento :" + p1.fechaNacimiento);
//		System.out.println("edad: " + p1.edad);
//		System.out.println("nombre: " + p1.nombre);
//		System.out.println("apellido: " + p1.apellido);
//		System.out.println("nacionalidad: " + p1.nacionalidad);
//		System.out.println("dni: " + p1.dni);
//		System.out.println("ocupacion: " + p1.ocupacion);
//		System.out.println("estadoCivil: " + p1.estadoCivil);

		// mostramos por consola el estado una vez editados los atributos del objeto p2
//		System.out.println("************************ Atributos con estado nuevo del objeto P2 *********************");
//		System.out.println("fecha nacimiento :" + p2.fechaNacimiento);
//		System.out.println("edad: " + p2.edad);
//		System.out.println("nombre: " + p2.nombre);
//		System.out.println("apellido: " + p2.apellido);
//		System.out.println("nacionalidad: " + p2.nacionalidad);
//		System.out.println("dni: " + p2.dni);
//		System.out.println("ocupacion: " + p2.ocupacion);
//		System.out.println("estadoCivil: " + p2.estadoCivil);

		System.out.println("----------------------------Instanciamos objetos del tipo Auto------------------------");
		// invocamos al metodo constructor que recibe todos los parametros
		Auto a2 = new Auto("negro", "AUDI", "AA 888 FT", 5, "A6", "2021");
		Auto a1 = new Auto("rojo", "ferrari", "LAF999", 2, "carrera360", "1999");
		Auto a3 = new Auto("gris plata", "JEEP", "EFA111", 5, "Grand Cheroke", "2019");
		Auto a4 = new Auto();// invoco al constructor vacio
		System.out.println(
				"----------------------------estado de los atributos de los objetos p1 , p2 y p3------------------------");
		System.out.println("A1:" + a1.toString());
		System.out.println("A2:" + a2.toString());
		System.out.println("A3:" + a3.toString());
		System.out.println("A4:" + a4.toString());

		System.out.println(
				"-------------------------------------- Invocamos a los metodos de la clase persona -------------------------------------------");
		
		System.out.println("-----------------------------metodos objeto p1--------------------");
		p1.caminar();
		p1.correr(29);
		p1.estudiar("nublado");
		
		System.out.println();
		System.out.println("-----------------------------metodos objeto p2--------------------");
		p2.caminar();
		p2.correr(18);
		p2.estudiar("soleado");
		System.out.println();
		System.out.println("Fin de la App");
	}

}

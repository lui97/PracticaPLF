/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package animal;

/**
 *
 * @author Nah Be
 */
public class Animal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
     //Creamos un animal cuyo nombré será Falco
        aniclas miAnimal = new aniclas("Falco");
        //Le establecemos 3 años de edad a Falco.
        miAnimal.setEdad(3);
       
        miAnimal.setRaza("Rotbailer");
        //Mostraremos el nombre del animal por pantalla
        System.out.println("El nombre es: " + miAnimal.getNombre());
        //Mostramos la edad del animal por pantalla
        System.out.println(" y tiene " + miAnimal.getEdad() + " años");
        //Este código deberia imprimir "El nombre es: Falco y tiene 3 años"
         System.out.println(" y es de raza " + miAnimal.getRaza());

    }
}
     
    


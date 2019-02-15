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
public class aniclas {
     private String raza;
    private String nombre;
    private int edad;
    
    
    public aniclas(String nuevoNombre)
    {
        nombre = nuevoNombre; //Se le da un nombre al animal
    }

    //Método para obtener la edad del animal
    public int getEdad()
    {
        return edad;
    }

    //Método para establecer la edad del animal
    public void setEdad(int nuevaEdad)
    {
        edad = nuevaEdad;
    }

    //Método para obtener el nombre del animal
    public String getNombre()
    {
        return nombre;
    }
    
    public String getRaza()
    {
        return raza;
    }
     public void setRaza(String Raza)
    {
        raza=Raza;
    }
       
    
}

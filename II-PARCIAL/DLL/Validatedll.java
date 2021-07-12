
public class Validatedll {

    public static void main(String[] args) {
       int a = 0 , int b =  0;
       System.out.println("Ingrese el primer numero: ");
       a = (int) new Validatedll().validate_L();
       System.out.println("\n Ingrese el segundo numero: ");
       b = (int) new Validatedll().validate_L();
       System.out.println("La suma es: " + new Validatedll().suma(a, b));
       System.out.println("La resta es: " + new Validatedll().resta(a, b));
       System.out.println("La multiplicacion es: " + new Validatedll().multiplicacion(a, b));
       System.out.println("La division es: " + new Validatedll().division(a, b));
    }

    static{
    System.loadLibrary("Validatedll");
    }

    private native int suma(int a, int b);
    private native int resta(int a, int b);
    private native int multiplicacion(int a, int b);
    private native double division(int a, int b);
    private native int validate_L();

    }
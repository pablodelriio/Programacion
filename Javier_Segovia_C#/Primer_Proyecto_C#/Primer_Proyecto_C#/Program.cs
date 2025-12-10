using System;
using System.Collections.Generic;
using System.Linq;
namespace MyApp // Note: actual namespace depends on the project name.
{
    public class Program
    {
        /*
        public static void Main(string[] args)
        {
            int numero1 = 0;
            int numero2 = 0;

            Console.WriteLine("Dame un numero");
            numero1 = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("Dame otro numero");
            numero2 = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("La suma de " + numero1 + " y " + numero2 + " es " + (numero1 + numero2));
        }
        */
        public static void Main(string[] args)
        {
            int numero1 = 0;
            int numero2 = 0;

            Console.WriteLine("Dame un numero");
            numero1 = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("Dame otro numero");
            numero2 = Convert.ToInt16(Console.ReadLine());
            if (numero1 > numero2)
                Console.WriteLine("el numero " + numero1 + " es mayor al numero " + numero2);
            else if (numero2 > numero1)
                Console.WriteLine("el numero " + numero1 + " es menor al numero " + numero2);
            else Console.WriteLine("los numeros son iguales");
        }
    }
}

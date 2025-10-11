using System;

class Program {
    static void Main() {
        Console.Write("Digite um número inteiro positivo:\n");
        int numero = int.Parse(Console.ReadLine());

        while (numero >= 0) {
            Console.WriteLine(numero);
            numero--;
        }
    }
}
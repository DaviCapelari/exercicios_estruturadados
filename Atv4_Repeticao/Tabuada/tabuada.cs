using System;

class Program {
    static void Main() {
        Console.Write("Digite um número:\n");
        int numero = int.Parse(Console.ReadLine());

        for (int i = 1; i <= 10; i++) {
            Console.WriteLine($"{numero} x {i} = {numero * i}");
        }
    }
}
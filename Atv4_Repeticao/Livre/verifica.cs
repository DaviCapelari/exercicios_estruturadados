using System;

class Program {
    static void Main() {
        int a, b;

        while (true) {
            Console.Write("Digite o primeiro número (0 para sair): ");
            a = int.Parse(Console.ReadLine());
            Console.Write("Digite o segundo número (0 para sair): ");
            b = int.Parse(Console.ReadLine());

            if (a == 0 || b == 0) {
                Console.WriteLine("Programa encerrado.");
                break;
            }

            if (a > b)
                Console.WriteLine("O primeiro número é maior.");
            else if (a < b)
                Console.WriteLine("O segundo número é maior.");
            else
                Console.WriteLine("Os números são iguais.");
                break;
        }
    }
}
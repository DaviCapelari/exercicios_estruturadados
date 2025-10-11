using System;

class Program {
    static void Main() {
        Console.Write("Digite uma palavra:\n");
        string palavra = Console.ReadLine();
        int contador = 0;

        foreach (char letra in palavra) {
            if ("aeiouAEIOU".Contains(letra))
                contador++;
        }

        Console.WriteLine("Total de vogais: " + contador);
    }
}
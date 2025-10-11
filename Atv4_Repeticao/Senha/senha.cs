using System;

class Program {
    static void Main() {
        string senhaCorreta = "1234";
        string senha;

        do {
            Console.Write("Digite a senha: ");
            senha = Console.ReadLine();

            if (senha != senhaCorreta)
                Console.WriteLine("Senha incorreta!");
        } while (senha != senhaCorreta);

        Console.WriteLine("Senha correta!");
    }
}
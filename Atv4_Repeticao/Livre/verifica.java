import java.util.Scanner;

public class verifica {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;

        do {
            System.out.print("Digite o primeiro número (0 para sair): ");
            a = sc.nextInt();
            System.out.print("Digite o segundo número (0 para sair): ");
            b = sc.nextInt();

            if (a == 0 || b == 0) {
                System.out.println("Programa encerrado.");
                break;
            }

            if (a > b)
                System.out.println("O primeiro número é maior.");
            else if (a < b)
                System.out.println("O segundo número é maior.");
            else
                System.out.println("Os números são iguais.");
                break;
        } while (true);

        sc.close();
    }
}
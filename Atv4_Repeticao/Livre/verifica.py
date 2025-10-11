while True:
    a = int(input("Digite o primeiro número (0 para sair): "))
    b = int(input("Digite o segundo número (0 para sair): "))

    if a == 0 or b == 0:
        print("Programa encerrado.")
        break

    if a > b:
        print("O primeiro número é maior.\n")
    elif a < b:
        print("O segundo número é maior.\n")
    else:
        print("Os números são iguais.\n")
        break
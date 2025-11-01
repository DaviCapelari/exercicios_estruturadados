# Programa: Fila de Atendimento

fila = []  # Lista que representará a fila

while True:
    print("\n===== MENU DE ATENDIMENTO =====")
    print("1 - Adicionar pessoa à fila")
    print("2 - Atender pessoa")
    print("3 - Mostrar fila")
    print("4 - Sair")

    opcao = input("Escolha uma opção: ")

    if opcao == "1":
        nome = input("Digite o nome da pessoa: ")
        fila.append(nome)
        print(f"{nome} foi adicionado(a) à fila.")

    elif opcao == "2":
        if len(fila) > 0:
            atendido = fila.pop(0)
            print(f"{atendido} foi atendido(a).")
        else:
            print("A fila está vazia! Ninguém para atender.")

    elif opcao == "3":
        if len(fila) > 0:
            print("\nPessoas na fila:")
            for i, pessoa in enumerate(fila, start=1):
                print(f"{i}. {pessoa}")
        else:
            print("\nA fila está vazia!")

    elif opcao == "4":
        print("Encerrando o programa.")
        break

    else:
        print("Opção inválida! Tente novamente.")
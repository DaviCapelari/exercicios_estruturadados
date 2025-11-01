# Programa: Fila da Padaria

fila = []  # lista vazia representando a fila

while True:
    print("\n--- Fila da Padaria ---")
    print("1 - Adicionar cliente à fila")
    print("2 - Atender cliente")
    print("3 - Mostrar fila")
    print("4 - Sair")

    opcao = input("Escolha uma opção: ")

    if opcao == "1":
        nome = input("Digite o nome do cliente: ")
        fila.append(nome)
        print(f"{nome} entrou na fila.")

    elif opcao == "2":
        if len(fila) > 0:
            atendido = fila.pop(0)  # remove o primeiro da fila
            print(f"{atendido} foi atendido.")
        else:
            print("A fila está vazia!")

    elif opcao == "3":
        if len(fila) > 0:
            print("Fila atual:", fila)
        else:
            print("Nenhum cliente na fila.")

    elif opcao == "4":
        print("Encerrando o programa.")
        break

    else:
        print("Opção inválida! Tente novamente.")
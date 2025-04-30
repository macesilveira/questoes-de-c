# Aplicação simples de cadastro de usuários em Python

# Lista para armazenar os usuários
usuarios = []

def cadastrar_usuario():
    """Função para cadastrar um novo usuário."""
    print("\n=== Cadastro de Usuário ===")
    nome=input("Digite o nome: ").strip()
    email=input("Digite o e-mail: ").strip()
    idade=input("Digite a idade: ").strip()

    # Armazenando os dados do usuário em um dicionário
    usuario = {
        "nome": nome,
        "email": email,
        "idade": idade
    }

    # Adicionando o usuário na lista
    usuarios.append(usuario)
    print("Usuário cadastrado com sucesso!\n")

def listar_usuarios():
    """Função para listar todos os usuários cadastrados."""
    print("\n=== Lista de Usuários ===")
    if not usuarios:
        print("Nenhum usuário cadastrado.\n")
        return
    
    for id, usuario in enumerate(usuarios, start=1):
        print(f"Usuário {id}:")
        print(f"  Nome: {usuario['nome']}")
        print(f"  E-mail: {usuario['email']}")
        print(f"  Idade: {usuario['idade']}\n")

def buscar_usuario():
    """Função para buscar um usuário pelo nome."""
    print("\n=== Busca de Usuário ===")
    nome_busca = input("Digite o nome do usuário que deseja buscar: ").strip()
    encontrado = False

    for usuario in usuarios:
        if usuario['nome'].lower() == nome_busca.lower():
            print("\nUsuário encontrado:")
            print(f"  Nome: {usuario['nome']}")
            print(f"  E-mail: {usuario['email']}")
            print(f"  Idade: {usuario['idade']}\n")
            encontrado = True
            break

    if not encontrado:
        print("Usuário não encontrado.\n")

def menu():
    """Função principal que exibe o menu e trata a escolha do usuário."""
    while True:
        print("=== Menu ===")
        print("1. Cadastrar Usuário")
        print("2. Listar Usuários")
        print("3. Buscar Usuário")
        print("4. Sair")
        escolha = input("Escolha uma opção: ")

        if escolha=="1":
            cadastrar_usuario()
        elif escolha=="2":
            listar_usuarios()
        elif escolha=="3":
            buscar_usuario()
        elif escolha=="4":
            print("Encerrando o programa.")
            break
        else:
            print("Opção inválida. Tente novamente.\n")

# Ponto de entrada do programa
if __name__=="__main__":
    menu()
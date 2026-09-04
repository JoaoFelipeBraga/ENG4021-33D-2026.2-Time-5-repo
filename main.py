def Menu():
    print("--------------------------------------")
    print("           Calculadora v1.0           ")
    print("--------------------------------------") 
    
def opcoes():
    print("""Escolha qual operação realizar.\n\n
          
          1 - Adição\n
          2 - Subtração\n
          3 - Multiplicação\n
          4 - Divisão\n
          5 - Exponenciação\n
          6 - Radiciação\n
          7 - Divisão inteira\n
          8 - Resto\n
          9 - Percentual\n
          0 - Sair\n
          """) 
    opc = int(input(''))
    return opc  

def soma(x, y):
    return x + y

def multiplicacao(x, y):
    return x * y

def exponenciacao( x, y):
    return x ** y

def percentual(x, y):
    return (x * y) / 100    

def radiciacao(x, y):
    return x ** (1/y)

def divisao_inteira(x, y):
    return x // y

def resto(x, y):
    return x % y
    
Menu()
while True:
    opcao = opcoes()
    
    if opcao == 0:
            break
    
    a = float(input("\nInsira o primeiro número: "))
    b = float(input("Insira o segundo número: "))    
    
    if opcao == 1:
        print(f"\nResultado: {soma(a, b)}\n")
    elif opcao == 2:
        print(f"\nResultado: {subtracao(a, b)}\n")
    elif opcao == 3:
        print(f"\nResultado: {multiplicacao(a, b)}\n")
    elif opcao == 4:
        print(f"\nResultado: {divisao(a, b)}\n")
    elif opcao == 5:
        print(f"\nResultado: {exponenciacao(a, b)}\n")
    elif opcao == 6:
        print(f"\nResultado: {radiciacao(a, b)}\n")
    elif opcao == 7:
        print(f"\nResultado: {divisao_inteira(a, b)}\n")
    elif opcao == 8:
        print(f"\nResultado: {resto(a, b)}\n")
    elif opcao == 9:
        print(f"\nResultado: {percentual(a, b)}\n")
    
    x = input("")
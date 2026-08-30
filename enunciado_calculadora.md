# Enunciado Calculadora

A calculadora deve ser feita em um único arquivo python chamado 'main.py'.

Bem como uma calculadora tradicional, ela deve possuir as seguintes operações:

- Soma (+)
- Subtração (-)
- Multiplicação (x)
- Divisão (:)

E além das operações principais, devemos ter também exponenciação, radiciação, divisão inteira, resto e percentual (quero calcular x porcento de y).

Cada operação deve ser implementada através de uma função, tendo esta função um nome no seguinte formato: 

```
def calcula_operacao(x, y):
  return
```
Vocês devem trocar o nome "operacao" pelo nome da operação que está sendo implementada, como é o caso, por exemplo, da ```calcula_soma```.

Cada membro da equipe deve implementar duas dessas funções, e deve abrir um PR para o repositório criado pelo P.O.

O P.O. da equipe vai ser o responsável por fazer o merge de todas essas implementações e de implementar o programa que vai chamar a operação com base no input do usuário.

Por exemplo, deve ser mostrado para o usuário um menu como o abaixo, e a partir da opção escolhida, ele deve entrar com os valores de x e y, e por fim o programa deve mostrar o resultado final.

Exemplo:

```
Escolha uma das opções abaixo:

1 - Adição
2 - Subtração
3 - Mulitplicação
(...)
0 - Sair do programa
```

REGRA IMPORTANTE: O código NÃO PODE SER FEITO utilizando inteligência artifical.

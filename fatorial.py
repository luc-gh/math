n = int(input("Valor para retornar fatorial: "))
if n == 0:
    print("O fatorial de 0 é 1.")
elif n < 0:
    print("Números nagetivos não possuem fatorial (extensão da função Gamma desconsiderada)")
else:
    fatorial = 1
    for i in range(n):    # contagem de um até o valor descrito
        fatorial *= i+1   # fatorial (inicializado) recebe ele mesmo vezes os valores de índice da contagem (0,1,2...n)
    print(fatorial)

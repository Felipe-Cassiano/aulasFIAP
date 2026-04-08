#OBJETIVO: 

num = int(input('Digite um número! '))
paridade = bool(num%2==0) #Retorna True se num é par
maior100 = bool(num>=100) #Retorna True se num é maior que 100

ansParidade = 'Sim' if paridade else 'Não'
ansMaior100 = 'Sim' if maior100 else 'Não'

print(f'Numero escolhido: {num}. Par? {ansParidade}. Maior ou igual a 100? {ansMaior100}')
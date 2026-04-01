nomeUsuario = input('Olá, qual o seu nome? ').title()
vel = int(input(f'Olá, {nomeUsuario}, qual é sua velocidade? '))

excessoKm = vel - 110  

if excessoKm > 0:
    multa = 5*excessoKm
    formaPagamento = int(input(f'Sua multa e de R${multa}. Digite 1 caso queira pagar no credito (10% taxa) ou 2 caso queira pagar com PIX (desconto de 15%) '))
    if formaPagamento == 1:
        multa += (multa*.1)  
    elif formaPagamento == 0: 
        multa -= (multa*.15) 
    else:
        print('Você, por não escolher alguma forma de pagamento, pagará presencialmente em dinheiro.')
    print(f'Seu valor total a pagar será de R${multa}')
else:
    print('Você não excedeu o limite de velocidade, parabéns!')

print(f'Até mais, {nomeUsuario}!')


#Converta dias, horas, minutos e segundos em segundos totais

dia1 = 1
hora1 = 3
min1 = 46
sec1 = 40
 
print(f'{dia1} dia(s). {hora1} horas, {min1} minutos e {sec1} segundos equivalem a {dia1*86400+hora1*3600+min1*60+sec1} segundos totais ')

#Converta segundos totais em dias, horas, minutos e segundos 

secTotais = 100000

dia = secTotais//86400 
hora = secTotais%86400//3600
min = secTotais%86400%3600//60
sec = secTotais%86400%3600%60

print(f'{secTotais} segundos equivalem a {dia} dias, {hora} horas, {min} minutos e {sec} segundos')
# Ejercicio 1
# Declaración de variables
b = True
# Variable que almacena el monto de la tarjeta de crédito
while True:
	try:
		while b:
			tarjeta = float(input("Ingrese el monto a asignar a la tarjeta de crédito\n"))
			if tarjeta > 0:
				b = False
		while True:
			# Variable que almacena el tipo de tarjeta de crédito
			tipo = int(input("Ingrese el tipo de tarjeta que desea\n1. 25% de aumento\n2. 35% de aumento\n3. 40% de aumento\n4-10: 50% de aumento\n"))
			if tipo > 0 and tipo <= 10:
				break

	# Estructura condicional que evalúa y determina el aumento y el límite de crédito
		if(tipo == 1):
			aumento = tarjeta + (tarjeta * 0.25)
		else:
			if(tipo == 2):
				aumento = tarjeta + (tarjeta * 0.35)
			else:
				if(tipo == 3):
					aumento = tarjeta + (tarjeta * 0.40)
				else:
					if(tipo >= 4 and tipo <= 10):
						aumento = tarjeta + (tarjeta * 0.50)
					else:
						print("El valor ingresado no es el correcto")

		print("El aumento y límite de crédito de su tarjeta es de %.2f" % aumento)
		break
	except Exception as e:
		print ("Error al ingresar los datos verifique que sean numeros.")

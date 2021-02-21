# Creacion de variables
b = True
while b:
	tamV = int(input("Ingrese el tamaño de la matriz: "))
	if tamV >= 2:
		b = False
# Creacion del arreglo 
arreglo = [[None] * tamV] * tamV
# Ciclo para el ingreso de datos 
for x in range(tamV-1,-1,-1):
	for y in range(tamV-1,-1,-1):
		# Validacion para que solo se puedan ingresar enteros
		while True:			
			try:
				arreglo[x][y] = int(input("Ingrese el valor de la posicion ["+str(x)+"]["+str(y)+"]: "))
				break
			except Exception as e:
				print ("Los digitos deber ser enteros. Intente de nuevo.")
			
# Ciclo para presentar solo los impares separados por gion 
for x in range(tamV):
	for y in range(tamV):
		if int(arreglo[x][y]) % 2 != 0:
			if x == tamV - 1 and y == tamV - 1:
				print (arreglo[x][y], end="")
			else: 
				print (arreglo[x][y], end="-")


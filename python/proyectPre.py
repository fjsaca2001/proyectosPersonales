# -*- coding: utf-8 *-*

print("\tSistema calculador de presiones")
# Requerimiento al usuario del valor total de sustancias a ingresar
n = int(input("Ingrese el total de sustancias: "))
# Creación de un arreglo unidimesional
nombreSus = [None] * n
cantidadPeso = [None] * n
cantidadAltu = [None] * n
cantidadPres = [None] * n
totalP = 0
# ciclo for para el requerimieto de datos de cada sustancia
for i in range(0,n):
	# Ingreso del nombre de la sustancia
	nombreSus[i] = input("\nIngrese el nombre de la sustancia: ")
	# Bandera para el ciclo while
	bandera = True
	# ciclo repetitivo para controlar el correcto ingreso de datos
	while bandera:
		# Requrimiento al usuario de el peso y altura
		cantidadPeso[i] = float(input("Ingrese el peso específico de la sustancia '{}' (N/m³): ".format(nombreSus[i])))
		cantidadAltu[i] = float(input("Ingrese la altura de la sustancia '{}' (m): ".format(nombreSus[i])))	
		# Control para que el peso o altura no sean inferiores a cero
		if((cantidadPeso[i]) > 0 and (cantidadAltu[i] > 0)):
			# calculo de la presion 
			cantidadPres[i] = cantidadPeso[i] * cantidadAltu[i]
			# Suma de las presiones
			totalP += cantidadPres[i]
			# hacer que el ciclo se rompa
			bandera = False
		else:
			# hacer que vuelva a ingresar los datos
			print("No puede tener valores menores que cero. Vuelva a intentar")
# Impresion de datos
print("\nResultados: \n")
for x in range(0,n):
	print("Sustancia: %s\tPeso específico: %.1f N/m³\tAltura: %.1f m.\tPresión: %.2f N/m²\n"% (nombreSus[x],cantidadPeso[x],cantidadAltu[x],cantidadPres[x]))
print("La suma total de las presiones es: %.1f N/m²\n"%(totalP))
input("Presione Enter para salir.")
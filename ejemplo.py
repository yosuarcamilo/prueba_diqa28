#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Ejemplo de script Python para practicar con Git
"""

def saludar(nombre):
    """Función que saluda a una persona"""
    return f"¡Hola {nombre}! Bienvenido a Git y GitHub."

def calcular_suma(a, b):
    """Función que suma dos números"""
    return a + b

def main():
    """Función principal"""
    print("=== Ejemplo de Proyecto Git ===")
    
    # Ejemplo de uso de las funciones
    nombre = input("Ingresa tu nombre: ")
    print(saludar(nombre))
    
    # Ejemplo de cálculo
    num1 = float(input("Ingresa el primer número: "))
    num2 = float(input("Ingresa el segundo número: "))
    resultado = calcular_suma(num1, num2)
    print(f"La suma de {num1} + {num2} = {resultado}")
    
    print("\n¡Gracias por usar este ejemplo!")

if __name__ == "__main__":
    main() 
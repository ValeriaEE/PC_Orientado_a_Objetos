# PC_Orientado_a_Objetos
# Museo de bichos🐜🦋

## Descripción del problema
En este proyecto, se plantea el desarrollo de un sistema de gestión para un Museo de Bichos. Este museo contiene una colección variada de insectos. La gestión de esta colección implica manejar información sobre diferentes tipos de bichos, sus características, y su ubicación dentro del museo. 

El objetivo es diseñar un programa que permita al usuario consultar detalles sobre los bichos existentes y obtener información sobre sus exhibiciones. Cada tipo de bicho tiene atributos y comportamientos diferentes dependiendo de su grupo. Ademas de tener un registro de personas que llegan al museo y cobrarles una entrada dependiendo de si tienen subscripcion o no. 

## El programa debe permitir:
Consultar información detallada sobre cada tipo de bicho.
Obtener la ubicación dentro del museo donde se encuentran los bichos.
Mostrar comportamientos específicos de ciertos tipos de bichos.
Comprar entradas al museo. 
Verificar si la persona tiene subcripcion al museo. 
No dejar ver la informacion ni la entrada a personas sin boleto. 

## Las clases utilizadas son:

Bicho (Clase padre)
Atributos: nombre científico, nombre común, hábitat, dieta,tamaño.
Métodos: mostrar informacion, mostrar donde se encuentra dentro del museo. 

Insecto (Clase derivada de Bicho)
Atributos adicionales: número de patas, tipo de metamorfosis.
Métodos: mostrar informacion. 

Arácnido (Clase derivada de Bicho)
Atributos adicionales: tipo de veneno, número de ojos.
Métodos: mostrar informacion.

Miriapodo (Clase derivada de Bicho)
Atributos adicionales: numero de pata por segmento, largo. 
Métodos: mostrar informacion.

Museo (Clase)
Atributos: nombre, ubicacion, num de sede
Métodos: dejar entrar a las personas, mostrar exibiciones, mostrar mapa, vender boletos y subscripciones. 

Persona (Clase)
Atributos: nombre, edad, tipo de subscripcion, tiene boleto. 
Métodos: comprar boletos y/o subscribciones, entrar y salir del museo.  


![image](https://github.com/user-attachments/assets/afc66f30-7086-45d5-b804-993093e783d7)



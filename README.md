# PROYECTO FINAL 💻 USO DE CLASES Y OBJETOS EN C++ ⚙

**Participantes**  💡 

✔**Acosta Apunte Dayana Cristina** 🌸 

Encargada de realizar la primera parte del trabajo, donde crea una función llamada INGRESAR en la cual el usuario introduce sus datos personales y luego se muestran mediante una función creada llamada MOSTRAR. 

✔**Bravo Mendoza Shaden Brillith** 🌹

Encargada de crear una función de tipo void llamada EDAD donde se calcula esta misma, usando la fecha de nacimiento y la fecha actual.

✔**López Bone Fernando Joel** 🍀

Encargado de crear una función llamada IMC para el cálculo del índice de masa corporal mediante la división del peso sobre el doble de la estatura, además de crear la función Rym  para recuperar datos de archivo y mostrarlos.

✔**Llumiquinga Pincay Luisa María** 🌻

Encargada de crear el programa (principal.cpp) que contiene el menú y la llamada a las librerías de cada colaborador, asimismo la creación la función Guardar para almacenar los datos en un archivo .txt.

##  COMPOSICIÓN DEL PROYECTO 📁 

Nuestro proyecto está compuesto por dos archivos: PRINCIPAL.cpp y colaboradores.h

### Archivo PRINCIPAL.CPP  ![](https://i.ibb.co/R6DF9mZ/simbolo-de-formato-de-archivo-cpp-1.png)

Dentro de este archivo se encuentra la funcion principal (int main), en la cual se encuentra el menú que hace el llamado a cada funcion. 

### Archivo Colaboradores.h 🗃

🔹 Se encuentra implementado un Class Persona

🔹 Una funcion llamada INGRESAR para registrar los datos personales.

🔹 Una función llamada MOSTRAR para presentar los datos. 

🔹 Una función llamada EDAD para calcular esta misma.

🔹 Una funcion llamada IMC que calcule el Indice de Masa Corporal.

🔹 Una función llamada GUARDAR que nos permita almacenar los datos registrados.

🔹 Una función llamada RYM que permita recuperar y mostrar los datos ingresados.   

## DESCRIPCIÓN 📑

Este proyecto incluye los archivos antes mencionados ( PRINCIPAL.CPP y colaboradores.h ) 

![](https://i.ibb.co/c1frn8H/Whats-App-Image-2021-07-23-at-6-01-30-PM.jpg)

En el primer archivo llamado (PRINCIPAL.cpp) contiene librerias las cuales van acompañadas con un #include, mas abajo se encuentra el "using namespace std" que usamos para espacios de nombres y no colocar el std en cada linea, ademas de hacer el llamado al archivo colaboradores.h. Entre los tipos de librerias usadas estan: 

🔸 Iostream:es una libreria estándar de entrada y salida.  

🔸 Fstream: clase de flujo de entrada / salida para operar en archivos. 

🔸 String: sirve para guardar cadenas de texto.

🔸 Malloc: sirve para solicitar un bloque de memoria del tamaño suministrado como parámetro.

🔸 Stdlib: contiene los prototipos de funciones de C para gestión de memoria dinámica, control de procesos y otras. 

![](https://i.ibb.co/6WzJy0g/Whats-App-Image-2021-07-23-at-6-01-42-PM.jpg)

Encontramos en el archivo (PRINCIPAL.cpp) tenemos la funcion principal "int main"

En esta funcion se declaran las variables de tipo entero (int) y de tipo flotante (float) que nos transfieren los datos del otro archivo, además el llamado a la clase que se encuentra el el otro archivo (colaboradores.h). Se hace el llamado a una clase donde se coloca primero el nombre de la clase y luego  un apodo u otro nombre como se visualiza en la imagen. 

![](https://i.ibb.co/0mXPtjz/Whats-App-Image-2021-07-23-at-6-01-53-PM.jpg)

Luego se crea un menú que le permite al usuario ingresar una opción.

##### Opciones: 

1. Designa la función y  la clase (PEPE.ingresar)(PEPE.mostrar), esta opción le permite al usuario insertar sus datos personales y luego mostrarlos.

2. Llama a la clase y la funcion (PEPE.edad)(PEPE.edad2), esta opción permite la fecha actual y luego mediante la resta con la fecha de nacimiento hace el cálculo de la edad y la muestra en pantalla.

3. Hace el llamado a la clase y funcion (PEPE.IMC), esta opción le permite al usuario calcular su índice de masa corporal usando su peso y su altura.

4. Designa la clase y la función (PEPE.guardar), esta  le permite al usuario crear un archivo txt y guardar los datos registrados.

5. Hace el llamado a la clase y la función (PEPE.rym),esta opción le permite al usuario recuperar los datos guardados en el archivo txt y mostrarlo por pantalla.

![](https://i.ibb.co/MS3Mqg2/Whats-App-Image-2021-07-23-at-6-02-56-PM.jpg)
![](https://i.ibb.co/cN5JJTC/Whats-App-Image-2021-07-23-at-6-03-04-PM.jpg)

En el siguiente archivo (colaboradores.h) se encuentran la clase (class Persona) y las funciones empleadas. 

En Class Persona se declaran los datos privados del usuario, estos no pueden ser alterados.
![](https://i.ibb.co/DfYdZ7f/Whats-App-Image-2021-07-23-at-6-03-13-PM.jpg)

Se declara datos públicos, dentro de los estos se hacen las funciones y los procesos para cada una de las opciones del menú

Ahi se encuetran varios tipos de funciones con un proceso distinto cada una. 

◾La primer función(void ingresar), es donde se ingresan los datos personales y se usa el getline para leer una cadena (string). 
![](https://i.ibb.co/QmGppJf/Whats-App-Image-2021-07-23-at-6-03-26-PM.jpg)

◾La segunda función(void mostrar), es donde se muestran los datos ingresados en la primera funcion. 
![](https://i.ibb.co/jG9vg9p/Whats-App-Image-2021-07-23-at-6-03-33-PM.jpg)

◾La tercera función (void edad), es donde se va a calcula la edad del usuario. 

Se evalúa una condición para calcular los días: esta permite identificar si el dia actual es mayor al dia de nacimiento, si es cierto se resta dia actual menos el dia de nacimiento, caso contrario al dia actual se le aumenta 30, al mes actual se le resta 1 y luego se resta dia actual y el dia de nacimiento.

![](https://i.ibb.co/Sfjkyh6/Whats-App-Image-2021-07-23-at-6-03-45-PM.jpg)

Se usa una condición para evaluar el cálculo de meses, la cual permite identificar si el mes actual es mayor al mes de nacimiento, si es menor se resta mes actual con el mes de nacimiento, caso contrario al mes actual se le aumenta 12, luego se resta mes actual y el mes de nacimiento.

![](https://i.ibb.co/FnfZN2F/Whats-App-Image-2021-07-23-at-6-03-56-PM.jpg)

Luego se resta el año actual con el año de nacimiento. 

◾La cuarta función (void edad2), en la que se va a mostrar la edad, los meses que tiene y los dias.

![](https://i.ibb.co/xMHtNW1/Whats-App-Image-2021-07-23-at-6-04-06-PM.jpg)

◾La quinta función (void IMC), es donde se calcula el indice de masa corporal de una persona a partir del peso y la altura de la persona, luego se evalúa una condición, si el IMC es menor a 20 se muestra un mensaje indicando que debe subir de peso, si es menor a 24 lo felicita y si es mayor se indica que debe bajar su peso.

![](https://i.ibb.co/98n2WTX/Whats-App-Image-2021-07-23-at-6-04-16-PM.jpg)

◾La sexta funcíón (void guardar), es donde se alamacenan los datos ingresados y  se crea un archivo txt que se guarda donde el usuario tenga descargado el proyecto.
Alli se usa el ofstream para crear un archivo, se agrega una variable que sirve para crear el archivo txt; se coloca el "open" para decirle al programa que nos abra y crea un archivo con el nombre (trabajo.txt), luego evalua una condición, si el archivo falla o no se crea muestre un mensaje de error, caso contrario guarde los datos ingresados en la primera función. 

![](https://i.ibb.co/pWwwsGn/Whats-App-Image-2021-07-23-at-6-04-24-PM.jpg)

◾La septima función (void rym), se utiliza para recuperar y mostrar los datos guardados en la sexta función (void guardar), donde usa el ifstream que busca el archivo creado en la sexta función y creamos la misma variable que en la sexta función, ademas crear otra variable de tipo string que nos va a sirve para que el programa muestre todo el texto que hay en el archivo de texto. 

![](https://i.ibb.co/myG7NjW/Whats-App-Image-2021-07-23-at-6-04-31-PM.jpg)

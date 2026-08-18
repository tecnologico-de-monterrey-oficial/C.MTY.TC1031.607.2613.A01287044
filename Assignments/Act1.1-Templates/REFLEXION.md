# Reflexión - Templates

## 1. ¿Qué ventaja concreta noté al usar templates en mi clase Lista?

La principal ventaja que noté es que puedo utilizar la misma clase List para diferentes tipos de datos sin tener que hacer una clase diferente para cada tipo. Por ejemplo, en mi código utilicé la clase con enteros:

List<int> list;

y también con strings:

List<string> things;

En los dos casos pude usar los mismos métodos, como insert() y print(). Esto hace que el código sea más reutilizable y evita tener que escribir la misma clase varias veces.

## 2. ¿Qué parte de la actividad me costó más trabajo entender o depurar?

La parte que más trabajo me costó entender fue cómo hacer que los métodos insertAt y removeAt modificaran correctamente la posición de los elementos. Tuve que revisar cómo funcionaban los elementos dentro del vector y cómo debía cambiar el size después de insertar o eliminar.

Para resolverlo, probé las funciones con una lista pequeña de números. Primero inserté 5, 10 y 15, después hice un insertAt(1,7) y comprobé que la lista quedara como 5, 7, 10, 15. Después hice removeAt(2) y comprobé que el resultado fuera 5, 7, 15. Esto me ayudó a comprobar paso por paso que las funciones estaban funcionando correctamente.

## 3. ¿Cómo explicaría qué es un template en C++ con mis propias palabras?

Por mi parte, un template es un forma de hacer una clase o una función que pueda trabajar con diferentes tipos de datos sin tener que hacer una versión diferente para cada uno. Es como dejar un espacio para decidir qué tipo de dato se va a utilizar después.

En mi caso, en vez de hacer una lista solamente para int, hice:

template <typename T>
class List

y después puedo decidir el tipo cuando creo la lista, por ejemplo:

List<int> list;
List<string> things;

Así puedo usar la misma clase para diferentes tipos de datos.
// Eduardo López Lozano
// A01287044

#include <iostream>
using namespace std;

// sumIterative
int sumIterative(int n){
    int suma = 0;
    for(int i = 1; i <= n; i++){
        suma += i;
    }
    return suma;
}

// sumRecursive
int sumRecursive(int n){
    if(n == 1){
        return 1;
    }
    return n + sumRecursive(n - 1);
}

// sumFormula
int sumFormula(int n){
    return n * (n + 1) / 2;
}

// fibonacciIterative
int fibonacciIterative(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    int a = 1;
    int b = 1;
    int c;
    for(int i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// fibonacciRecursive
int fibonacciRecursive(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// bacteriasIterative
int bacteriasIterative(int n){
    double born = 3.78;
    double died = 2.34; 
    int sum = 1;
    for (int i = 1; i <= n; i++){
        int bacterias;
        int bacteriasBorn = sum * born;
        int bacteriasDied = sum * died;
        sum += bacteriasBorn - bacteriasDied;
    }
    return sum;
}

// bacteriasRecursive
int bacteriasRecursive(int n){
    if(n == 0){
        return 1;
    }
    int bacteria = bacteriasRecursive(n - 1);
    int bacteriaBorn = bacteria * 3.78;
    int bacteriaDied = bacteria * 2.34;
    return bacteria + bacteriaBorn - bacteriaDied;
}

// investmentIterative
double investmentIterative(int n, double cantidad){
    for(int i = 1; i <= n; i++){
        cantidad = cantidad + cantidad * 18.75 / 100;
    }
    return cantidad;
}
// investmentRecursive
double investmentRecursive(int n, double cantidad){
    if(n == 0){
        return cantidad;
    }
    cantidad = cantidad + cantidad * 18.75 / 100;
    return investmentRecursive(n - 1, cantidad);
}

// powIterative
int powIterative(int n, int exp){
    int resultado = 1;
    for(int i = 1; i <= exp; i++){
        resultado *= n;
    }
    return resultado;
}

// powRecursive
int powRecursive(int n, int exp){
    if(exp == 0){
        return 1;
    }
    return n * powRecursive(n, exp - 1);
}

int main(){
    // Suma iterativa
    cout << "La suma iterativa de 5 es: " << sumIterative(5) << endl;
    // Suma recursiva
    cout << "La suma recursiva de 5 es: " << sumRecursive(5) << endl;
    // Suma con formula
    cout << "La suma con formula de 5 es: " << sumFormula(5) << endl;
    // Fibonacci iterativa
    cout << "El numero de Fibonacci iterativo de 7 es: " << fibonacciIterative(7) << endl;
    // Fibonacci recursiva
    cout << "El numero de Fibonacci recursivo de 7 es: " << fibonacciRecursive(7) << endl;
    // Bacterias iterativa
    cout << "El numero de bacterias despues de 5 dias es: " << bacteriasIterative(5) << endl;
    // Bacterias recursiva
    cout << "El numero de bacterias despues de 5 dias es: " << bacteriasRecursive(5) << endl;
    // Inversion iterativa
    cout << "La inversion iterativa de 5 meses es: " << investmentIterative(5, 1000) << endl;
    // Inversion recursiva
    cout << "La inversion recursiva de 5 meses es: " << investmentRecursive(5, 1000) << endl;
    // Potencia iterativa
    cout << "La potencia iterativa de 2^5 es: " << powIterative(2, 5) << endl;
    // Potencia recursiva
    cout << "La potencia recursiva de 2^5 es: " << powRecursive(2, 5) << endl;
    return 0;
}

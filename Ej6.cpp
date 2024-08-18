#include <iostream>
int contar (int n, int cifras,int pos=1);
int main(){
    int n,cifras;
    std::cout << "Ingrese un numero entero positivo: ";
    std::cin >> n;
        std::cout << "Ingrese un numero de cifras: ";
    std::cin >> cifras;

    // Contar dígitos pares en posiciones impares usando la función recursiva
    int resultado = contar(n,cifras);
    std::cout << "Cantidad de dígitos pares en posiciones impares: " << resultado << std::endl;

}
int contar (int n, int cifras,int pos){
    if (n == 0) {
        return 0;
    }else{
        int digitoActual = n % 10;
    if (cifras%2==0){
    if (pos % 2 == 0 && digitoActual % 2 == 0) {
        // Incrementar el contador y realizar la llamada recursiva
        return 1 + contar(n / 10, cifras - 1);
    } else {
        // Realizar la llamada recursiva sin incrementar el contador
        return contar(n / 10, cifras- 1);
    }
    }else{
    if (pos % 2 != 0 && digitoActual % 2 == 0) {
        // Incrementar el contador y realizar la llamada recursiva
        return 1 + contar(n / 10, cifras - 1);
    } else {
        // Realizar la llamada recursiva sin incrementar el contador
        return contar(n / 10, cifras- 1);
    }
    }
}}
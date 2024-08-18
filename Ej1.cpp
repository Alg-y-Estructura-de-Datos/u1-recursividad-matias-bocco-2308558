#include <iostream>
int potencia (int a, int b);
int main() {
    int base,exponente;
    std::cout << "Ingrese el numero que desdea elevar.\n";
    std::cin>>base;
    std::cout << "Ingrese el exponenete.\n";
    std::cin>>exponente;
    std::cout<<"El resultado es: "<<potencia(base,exponente)<<"\n";
    return 0;
}
int potencia (int a, int b){
    if (b==0){
        return 1;
    }else {
        int resultado = a * potencia(a,b-1);
        return resultado;
    }
}

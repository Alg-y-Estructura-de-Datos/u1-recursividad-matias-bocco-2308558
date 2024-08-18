#include <iostream>
int sumatoria (int a);
void sumar (int a,int n);
int main() {
    int n;
    std::cout << "ingrese el numero a evaluar" <<std::endl;
    std::cin>>n;
    sumar(1,n);
    std::cout<<sumatoria(n);
    return 0;
}
int sumatoria (int a){
    if (a==0){
        return 0;
    }else {
        int resultado = a+sumatoria(a-1);
        return resultado;
    }}
void sumar (int a,int n){
    if (a==n){
        std::cout<<"5=";
    }else{
        std::cout<<a<<"+";
        sumar(a+1,n);
    }
}

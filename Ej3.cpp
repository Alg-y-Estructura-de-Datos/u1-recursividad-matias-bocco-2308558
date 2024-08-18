#include <iostream>
void invertir(int a);
int main() {
int a;
    std::cout << "Ingrese el numero a evaluar\n";
std::cin>>a;
invertir(a);
    return 0;
}
void invertir(int a){
    if (a<0 || a==0){
        std::cout<<"Ingrese un numero positivo\n";}
    else if (a<10){
        std::cout<<a;
    }else{
        std::cout<<a%10;
        invertir(a/10);
    }}

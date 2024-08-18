//Crear un programa que pida al usuario un número entero positivo "n" y un dígito
//"d". Luego crear una función recursiva que determine si “d” está en “n”. Si está, la
//función debe retornar verdadero y si no está debe retornar falso.
//Ej.: si n=1323 y d = 5, retorna Falso y si d= 1 retorna verdadero.

#include <iostream>
bool valor (int n, int d);
int main (){
int n,d;
std::cout<<"Ingrese el numero n\n";
std::cin>>n;
std::cout<<"Ingrese el numero d\n";
std::cin>>d;
if (valor(n,d)==true){
    std::cout<<"True\n";
}else{
std::cout<<"False\n";
}
}
bool valor (int n, int d){
if (n&10==d){
return true;}
else if (n==0){
    return false;}else {
return valor(n/10,d);
    };}


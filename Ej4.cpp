#include <iostream>
int maximoValor (int max, int arr[],int tam);
int main(){
    int n;
    std::cout<<"Ingrese el tamaño del alegro\n";
    std::cin>>n;
    int numero[n];
    std::cout<<"Ingrese sus valores \n";
    for (int i=0;i<n;i++){
        std::cin>>numero[i];
    }
    std::cout<<"El mayor es: "<<maximoValor(0,numero,n);
}
int maximoValor (int max, int arr[], int tam){
    if (tam<0){
        return max;}else{
        tam=tam-1;
    if (max<arr[tam]){
        return maximoValor(arr[tam],arr,tam-1);
    }else{
       return maximoValor(max,arr,tam-1);
    }
        };
}
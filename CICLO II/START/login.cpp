#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char pass[] = "password";
    char passin[9] = "";
    int i = 0;

    cout<<"*************************\n";
    cout<<"**********LOGIN**********\n";
    cout<<"*************************\n\n";

    cout<<"DIGITE SU PASSWORD"<<endl;
    do{
        i++;
        cout << "INTENTO NUMERO: "<<i<<endl;
        cin>>passin;

        
    }while((strcmp(pass,passin) != 0) && (i<3));

    if(strcmp(pass,passin) != 0){
        cout<<"\nACCESO DENEGADO";
    }else{
        cout<<"\nACCESO CONCEDIDO";
    }

}
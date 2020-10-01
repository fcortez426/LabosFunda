#include <iostream>
#include <string.h>
#include <string>

const int longCad = 50;

using namespace std;

struct Capa {
    char tipo[50];
    int grosor;
    int dureza;

    struct Capa *next;
};
typedef struct Capa *Stack;

void initiliaze(Stack *s){
    *s = NULL;
}

bool empty(Stack *s){
    return *s == NULL;
}

void push(Stack *s, string t, int g, int d){

    struct Capa *capa;
    capa = (struct Capa *)malloc(sizeof(struct Capa));
    strcpy(capa->tipo,t.c_str());
    /*capa->tipo = t;*/
    capa->grosor = g;
    capa->dureza = d;
    capa->next = *s;

    *s = capa;
}

void pop(Stack *s){
    if (!empty(s)){
        struct Capa *aux = *s;
        *s = (*s)->next;
        delete(aux);
    }else{
        return;
    }
}

void showStack(Stack *s){
    struct Capa *clone = *s;
    bool isEmpty = false;
    while(!isEmpty){
        if(!empty(&clone)){
            cout << "TIPO: "<<clone->tipo << "; ";
            cout << "GROSOR: "<<clone->grosor << "; ";
            cout << "DUREZA: "<<clone->dureza << "; "<<endl;
            clone = clone->next;
        }else{
            isEmpty = true;
        }
    }
}

void promDureza(Stack *s){
    int i=0;
    float cant=0;
    float prom;

    struct Capa *clone = *s;
    bool isEmpty = false;
    while(!isEmpty){
        if(!empty(&clone)){

            i++;
            cant += clone->dureza;
            
            clone = clone->next;

        }else{
            isEmpty = true;
        }
    }

    prom=cant/i;

    cout<<"La dureza promedio del suelo es: "<<endl;
    cout<<prom<<endl;

}

void menu(Stack *s){
    int option;
    string tipo;
    bool status = true;

    while(status){
        cout << "\n" << "***** PERFIL LITOLOGICO *****" << endl;
        cout << "1. Ingresar capas a la pila" << endl;
        cout << "2. Eliminar la ultima capa" << endl;
        cout << "3. Eliminar todas las capas" << endl;
        cout << "4. Calcular la dureza promedio" << endl;
        cout << "5. Salir del menu" << endl;

        cout << "\n" << "Ingrese la opcion que desea ejecutar: ";
        cin >> option;
        cin.ignore(100, '\n');

        switch (option)
        {
        case 1:
            int grosor;
            int dureza;

            cout << "Ingrese el tipo de suelo: ";
            getline(cin,tipo);
            cout << "Ingrese el grosor: ";
            cin >> grosor;
            cout << "Ingrese la dureza: ";
            cin >> dureza;

            push(s,tipo,grosor,dureza);

            cout << "\nMostrando la pila actualizada:" << endl;
            showStack(s);

            break;
        case 2:
            cout<<"\nBorrando ultimo elemento ingresado..." << endl;
            pop(s);

            cout << "\nMostrando la pila actualizada" << endl;
            showStack(s);

            break;
        case 3:
            cout<<"\nBorrando toda la pila..." << endl;
            initiliaze(s);

            cout << "\nMostrando la pila actualizada" << endl;
            showStack(s);
            break;
        case 4:
            cout<<"\nCalculando promedio de dureza..." << endl;
            promDureza(s);
            break;
        case 5:
            cout<< "Fin del programa" << endl;        
            status = false;    
            break;
        
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

    }
}

int main(){
    Stack stack;
    initiliaze(&stack);

    menu(&stack);

    return 0;

}
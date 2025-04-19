#include <iostream>
#include <stdlib.h>

using namespace std;

class persona{
    private://atributos
        int edad;
        string nombre;
    public://metodos
        persona(int,string);//constructor
        void leer();
        void correr();
};

//constructor, nos sirve para inicializar los atributos
persona::persona(int _edad, string _nombre){
    edad=_edad;
    nombre=_nombre;
}

void persona::leer(){
cout<<"Soy "<<nombre<<" y estoy leyendo un libro y tengo "<<edad<<"anios"<<endl;
}

void persona::correr(){
cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<"anios"<<endl;
}

int main()
{
    persona p1=persona(20,"Franco");
    persona p2=persona(22,"Santi");


    p1.leer();
    p2.correr();
    system("pause");

    return 0;
}

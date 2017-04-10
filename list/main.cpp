#include<iostream>
#include"snode.h"
#include"circularduplarecur.h"

using namespace std;

int main(){

    //CIRCULAR DUPLA RECURVA

    listaCR lista;
    string imput;
    int imp;
    while (true) {
        cout << "r-> remover i -> insert - sh -> show - s -> size rev -> reverse - d -> destruir\n"
                << "fin->find \n";
         cin >> imput;

        if(imput == "sh"){
            lista.show();
        }

        if (imput == "s") {
            cout << lista.size() << "\n";
        }

        if(imput == "i"){
            cin >> imp;
              lista.insert(imp);
            lista.show();
        }

        if(imput == "rev"){
            lista.show_rev();
        }

        if(imput == "r"){
            cin >> imp;
            lista.remove(imp);
            lista.show();
        }

        if (imput == "fin") {
            cin >> imp;
           cout<<lista.find(imp)->value <<"\n";
        }
    }
}

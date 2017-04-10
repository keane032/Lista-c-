//#ifndef ORDELIST_H
//#define ORDELIST_H

//#include"snode.h"

//using namespace std;

//struct ordelist{
//    snode * head ;

//    ordelist(){
//        head = new snode;
//    }

//    void clone(ordelist lista){
//        snode *node = lista.head;
//        while (node ->next != nullptr) {
//            node = node->next;
//            this->insertar(node->value);
//        }
//    }

//    void pop_back(){
//        snode * node =head->next;
//        snode * anterior = head;
//        while (node->next != nullptr) {
//            node= node->next;
//            anterior = anterior->next;
//        }
//        delete node;
//        anterior->next=nullptr;


//    }

//    void insertar(int valor){
//        if (isEmpit()){
//        snode *node = new snode(valor,head->next);
//               head -> next= node;
//               return;
//            }

//       snode *node = this->head->next;
//       snode *no = new snode(valor);
//       snode *anterior = this->head;

//       while (node != nullptr) {
//            if (node->value > no->value){
//                no->next=node;
//                anterior->next=no;
//                return;
//            }
//            node = node->next;
//            anterior = anterior->next;
//        }

//       anterior->next=no;

//    }


//    void pop_front(){
//        snode *node = head->next;
//        head->next = node->next;
//        delete node;
//    }


//    int size(){
//        int cont = 0;
//        snode * node = head->next;
//        while (node->next != nullptr) {
//            cont = cont + 1;
//            node = node->next;
//        }
//        return cont;
//    }

//    void destroy(){
//        snode *node = this->head;
//        while (node->next != nullptr){
//            this->pop_front();
//        }
//    }


//    snode front(){
//        snode *node = this->head->next;
//        return *node;
//    }

//    snode back(){
//        snode *node = this->head->next;
//        while (node->next != nullptr) {
//            node = node->next;
//        }
//        return *node;
//    }

//    void removels(int numero){
//        snode *anterior = this->head;
//        snode *node = this->head->next;
//        while (anterior->next != nullptr) {
//            if (node->value == numero){
//                anterior->next = node->next;
//                return;
//            }
//            node=node->next;
//            anterior=anterior->next;
//        }
//    }


//    void show(){
//        snode * node = head->next;
//        while (node != nullptr){
//            cout << node->value<<" ";
//            node = node->next;
//        }
//        cout <<"\n";
//    }

//    void reverseShow(){
//        snode *node = this->head->next;
//        ordelist lista;
//        while (node != nullptr) {
//                   snode *nod = new snode(node->value,lista.head->next);
//                  lista.head -> next= nod;
//            node = node->next;
//        }
//        lista.show();
//        lista.destroy();
//    }

//    bool isEmpit(){
//        snode *node = this->head;
//        if(node->next == nullptr){
//            return true;
//        }else{
//            return false;
//        }
//    }

//    snode find(int value){
//        snode *node = this->head;

//        while (node->next != nullptr) {
//            node = node->next;
//            if(node->value == value){
//                return *node;
//            }
//        }

//        node = nullptr;
//        return *node;

//    }

//    bool equal(ordelist lista){
//        snode *node1 = this->head;
//        snode *node2 = lista.head;
//        if (this->size() != lista.size()){
//            return false;
//        }
//        while (node1->next != nullptr) {
//            node1 = node1->next;
//            node2 = node2->next;
//            if (node1->value != node2->value){
//                return false;
//            }
//        }
//        return true;
//    }

//};
//#endif // ORDELIST_H

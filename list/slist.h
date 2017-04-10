//#ifndef SLIST_H
//#define SLIST_H
//#include"snode.h"
//#include<iostream>

//using namespace std;

//struct slista{
//    snode * head ;

//    slista(){
//        head = new snode;
//    }

//    void clone(slista lista){
//        snode *node = lista.head;
//        while (node ->next != nullptr) {
//            node = node->next;
//            this->push_back(node->value);
//        }
//    }

//    void push_front(int value){

//        snode * node = new snode(value,head->next);
//        head -> next= node;
//    }


//    void push_back(int value){
//        if(head->next == nullptr){
//            head->next = new snode(value) ;
//        }else{
//            snode *node = head->next;
//            while(node->next != nullptr){
//                node = node->next;
//            }
//            node->next = new snode(value);
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
//        slista lista;
//        while (node != nullptr) {
//            lista.push_front(node->value);
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

//    bool equal(slista lista){
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

//#endif // SLIST_H



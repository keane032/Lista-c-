//#ifndef LISTADUPLA_H
//#define LISTADUPLA_H
//#include"snode.h"
//#include<iostream>

//using namespace std;

//struct listadupla{

//    snode *head;
//    snode *tail;

//    listadupla(){
//        head = new snode;
//        tail = new snode;
//        head->next = tail;
//        tail->previus = head;
//    }

//    void push_front(int valor){
//        snode *node = new snode(valor,head->next,head);
//        head->next = node;
//        node->next->previus = node;
//    }

//    void push_back(int valor){
//        snode *no = new snode(valor);
//        snode *node = tail->previus;
//        no->next = tail;
//        no->previus = node;
//        tail->previus = no;
//        node->next = no;
//    }

//    void show(){
//        _show(head->next);
//        cout << "\n";
//    }

//    void _show(snode *node){
//        if (node->next == nullptr) {
//            return;
//        }
//        cout << node->value << " ";
//        _show(node->next);
//    }

//    void reverse_show(){
//        snode *node = this->head;
//        listadupla lista ;
//        while (node->next != tail) {
//            lista.push_front(node->value);
//            node = node->next;
//        }
//        lista.show();
//        lista.destroy();
//    }

//    void pop_front(){
//        if(this->head->next == tail){
//            return;
//        }
//        snode *node = head->next;
//        head->next = node->next;
//        node->next->previus = head;
//        delete node;

//    }

//    int size(){
//        int cont = 0;
//        snode * node = head->next;
//        while (node->next != tail) {
//            cont = cont + 1;
//            node = node->next;
//        }
//        return cont;

//    }

//    void pop_back(){
//        snode *node = tail->previus;
//        snode *no = node->previus;
//        tail->previus = no;
//        no->next = tail;
//        delete node;

//    }

//    void destroy(){
//        snode *node = this->head;
//        while (node->next != tail){
//            this->pop_front();
//            node=node->next;
//        }
//        this->head->next=tail;
//        this->tail->previus=head;
//    }

//    bool is_empty(){
//        if(head->next == tail){
//            return true;
//        }else{
//            return false;
//        }
//    }


//    void removels(int numero){
//        snode *node = this->head->next;
//        while (node != tail) {
//            if (node->value == numero){
//                node->previus->next = node->next;
//                node->next->previus = node->previus;
//                delate node;
//                return;
//            }
//            node=node->next;
//        }
//    }

//    snode front(){
//        snode *node = this->head->next;
//        return *node;
//    }

//    snode back(){
//        snode *node = this->tail->previus;
//        return *node;
//    }

//    void clone(listadupla lista){
//        snode *cabe = lista.head->next;
//        snode *rabo = lista.tail;
//        while (cabe != rabo) {
//            this->push_back(cabe->value);
//            cabe = cabe->next;
//        }
//    }

//    snode * _find(int valor,snode *node){
//        if(valor == node->value){
//            return node;
//        }else if (node->next == tail){
//            return tail;
//        }
//        _find(valor,node->next);
//    }

//    snode find(int valor){
//       snode *node = this->head->next;
//       return *_find(valor,node);
//    }


//        bool equal(listadupla lista){
//            snode *node1 = this->head;
//            snode *node2 = lista.head;
//            if (this->size() != lista.size()){
//                return false;
//            }
//            while(node1->next != tail) {
//                node1 = node1->next;
//                node2 = node2->next;
//                if (node1->value != node2->value){
//                    return false;
//                }
//            }
//            return true;
//        }



//};





//#endif // LISTADUPLA_H

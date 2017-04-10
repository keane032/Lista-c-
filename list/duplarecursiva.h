#ifndef DUPLARECURSIVA_H
#define DUPLARECURSIVA_H
#include"snoded.h"
#include<iostream>

using namespace std;

struct ListaR{

    snoded *head;
    snoded *tail;

    ListaR(){
        head = new snoded;
        tail = new snoded;
        head->next = tail;
        tail->previus = head;
    }

    void push_front(int valor){
        snoded *nod = new snoded(valor,head->next,head);
        head->next = nod;
        head->next->previus = nod;
    }

    void push_back(int valor){
        snoded *nod = new snoded(valor,tail,tail->previus);
        tail->previus->next = nod;
        tail->previus = nod;
    }

    void pop_back(){
        snoded *node = tail->previus;
        node->previus->next = tail;
        tail->previus = node->previus;
        delete node;
    }

    void pop_fromt(){
        snoded *node = head->next;
        head->next = node->next;
        node->next->previus = head;
        delete node;
    }

    void _rdestruir(snoded *node){
        if(node == tail){
            return;
        }
        this->pop_fromt();
        _rdestruir(node->next);

    }

    void destruir(){
        _rdestruir(head->next);
        delete this->tail;
        delete this->head;
    }

    int _rsize(snoded *node){
        if(node == tail){
            return 0;
        }
        return 1 + _rsize(node->next);
    }

    int size(){
        return _rsize(head->next);
    }

    void show(){
        cout << "[";
        _rshow(this->head->next);
        cout << "] \n";
    }

    void _rshow(snoded *node){
        if(node == tail){
            return;
        }
        cout << node->value << " ";
        _rshow(node->next);
    }

    snoded *_rfind(int valor , snoded *node){
        if(node == tail){
            return nullptr;
        }
        if(node->value == valor){
            return node;
        }
        _rfind(valor,node->next);
    }

    snoded *find(int valor){
        return  _rfind(valor , head->next);
    }

    void _reverse(snoded *node){
        if(node == tail){
            return;
        }
        _reverse(node->next);
        cout << node->value << " ";
    }

    void reverseShow(){
        cout << "[";
        _reverse(head->next);
        cout << "]\n";
    }
    void _remover(int valor, snoded *node , snoded *anterior){
        if(node == nullptr){
            return;
        }
        if(node->value == valor){
            anterior->next=node->next;
            delete node;
            return;
        }
        _remover(valor,node->next,anterior->next);
    }

    void remover(int valor){
        _remover(valor,head->next,head);
        delete this->head;
        delete this->tail;
    }

    void _rclone(snoded *no,snoded *rabo){
        if(no == rabo){
            return;
        }
        this->push_back(no->value);
        _rclone(no->next,rabo);
    }

    void clone(ListaR lista){
        this->destruir();
        _rclone(lista.head->next,lista.tail);
    }

    bool is_empit(){
        if(head->next == tail){
            return true;
        }
        return false;
    }

    bool _requals(snoded *node , snoded *nod){
        if(nod == tail){
            return true;
        }
        if(node->value != node->value){
            return false;
        }
        _requals(node->next,nod->next);

    }

    bool equals(ListaR lista){
        if(lista.size() != this->size()){
            return false;
        }
        return _requals(lista.head->next,this->head->next);
    }

    snoded *front(){
      snoded *node = this->head->next;
        return node;
    }
    snoded *back(){
        snoded *node = this->tail->previus;
        return node;
    }

};


#endif // DUPLARECURSIVA_H

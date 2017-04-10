#ifndef CIRCULARDUPLARECUR_H
#define CIRCULARDUPLARECUR_H
#include"snoded.h"
#include<iostream>

using namespace std;

struct listaCR{

    snoded *head;
    snoded *tail;

    listaCR(){
        head = new snoded();
    }

    void insert(int valor){
        if(this->head->next == nullptr){
            snoded *node = new snoded(valor);
            this->head->next =  node;
            this->head->previus = node;
            return;
        }
        snoded *node = new snoded(valor,head->next,head->previus);
        head->next->previus = node;
        head->previus->next = node;
        head->next = node;
    }

    void _rshow(snoded *node){
        if(node == head->next){
            return;
        }
        cout << node->value << " ";
        _rshow(node->next);
    }

    void show(){
        if(this->head->next == nullptr){
            cout << "[";
            cout << "]\n";
            return;
        }
        cout << "[";
        cout << this->head->next->value<<" ";
        if(this->head->next->next != nullptr){
            _rshow(this->head->next->next);
            cout << "]\n";
            return;
        }
        cout << "]\n";
    }

    int  _rsize(snoded *node){

        if(node == head->next){
            return 0;
        }
        return 1 + _rsize(node->next);
    }

    int size(){
        if(head->next == nullptr){
            return 0;
        }
        return 1 + _rsize(head->next->next);
    }

    bool is_empty(){
        if (head->next == nullptr){
            return true;
        }else{
            return false;
        }
    }

    void _rshow_rev(snoded *node){
         if(node == head->next){
             return;
         }
         cout << node->value << " ";
         _rshow_rev(node->previus);
    }

    void show_rev(){
        if(head->next == nullptr){
         cout << "[ ]";
            return;
        }

        cout << "[";
        _rshow_rev(head->previus);
        cout << head->next;
        cout << "]";
    }

   void remove(int valor){
       if(this->find(valor)== nullptr){
            return;
       }
        snoded *node = this->find(valor);
        node->previus->next = node->next;
        node->next->previus = node->previus;

        if(head->next == node){
            head->next = node->next;
        }
        if(head->previus == node){
           head->previus = node->previus;

        }

    }

    snoded *_rfind(int valor,snoded *node){
        if(node == head->next){
            return nullptr;
        }
        if(node->value == valor){
            return node;
        }
        _rfind(valor,node->next);
    }

    snoded *find(int valor){
        if (head->next->value == valor){
            return head->next;
        }
        return _rfind(valor,head->next->next);
    }

};


#endif // CIRCULARDUPLARECUR_H

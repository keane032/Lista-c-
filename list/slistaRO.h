#ifndef SLISTAORDRECU_H
#define SLISTAORDRECU_H
#include"snode.h"
using namespace std;

struct Lista{

    snode *head;

    Lista(){
        head = new snode;
    }

    void _rinsert(snode *node,snode *new_node){
        if(node->next == nullptr){
            node->next = new_node;
            return;
        }

        if(node->next->value  >= new_node->value){
            new_node->next = node->next;
            node->next = new_node;
            return;
        }
        _rinsert(node->next,new_node);
    }

    void insert(int valor){
        snode *node = new snode(valor);
        if(this->head->next==nullptr){
            this->head->next = node;
            return;
        }
        _rinsert(this->head,node);
    }

    int _rsize(snode *node){
        if(node == nullptr){
            return 0;
        }
        return 1 + _rsize(node->next);
    }

    int size(){
        return _rsize(head->next);
    }

    void _rshow(snode *node){
        if(node == nullptr){
            return;
        }
        cout << node->value << " ";
        _rshow(node->next);
    }

    void show(){
        cout << "[";
        _rshow(this->head->next);
        cout << "]\n";
    }

    void _reverse(snode *node){
        if(node == nullptr){
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

    void _rpop_back(snode *node,snode *nod){
        if(node->next == nullptr){
            nod->next=nullptr;
            delete node;
            return;
        }
        _rpop_back(node->next,nod->next);
    }

    void pop_back(){
        _rpop_back(head->next,head);
    }

    void pop_fromt(){
        snode *node = head->next;
        head->next = node->next;
        delete node;
    }

    bool is_empit(){
        if(head->next == nullptr){
            return true;
        }
        return false;
    }

    void _rdestruir(snode *node){
        if(node == nullptr){
            return;
        }
        this->pop_fromt();
        _rdestruir(node->next);
    }

    void destruir(){
        _rdestruir(head->next);
    }

    void _remover(int valor, snode *node , snode *anterior){
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
        if(this->find(valor)){
            _remover(valor,head->next,head);
        }

    }

    snode front(){
            snode *node = this->head->next;
            return *node;
        }

        snode *_rback(snode *node){
            if(this->is_empit()){
                return nullptr;
            }
            if(node->next == nullptr){
                return node;
            }
            _rback(node->next);
        }

        snode *back(){
            return _rback(head->next);
        }


        snode *_rfind(int valor , snode *node){
            if(node == nullptr){
                return nullptr;
            }
            if(node->value == valor){
                return node;
            }
            _rfind(valor,node->next);
        }

        snode *find(int valor){
            return  _rfind(valor , head->next);
        }


        bool _requals(snode *node , snode *nod){
            if(node->value != node->value){
                return false;
            }
            if(nod == nullptr){
                return true;
            }
            _requals(node->next,nod->next);

        }

        bool equals(Lista lista){
            if(lista.size() != this->size()){
                return false;
            }
            return _requals(lista.head->next,this->head->next);

        }
        void _rclone(snode *no){
            if(no == nullptr){
                return;
            }
            this->insert(no->value);
            _rclone(no->next);
        }

        void clone(Lista lista){
            this->destruir();
            _rclone(lista.head->next);
        }


};

#endif // SLISTAORDRECU_H

#ifndef SNODE_H
#define SNODE_H

struct snode{

    int value;
    snode * next;
    snode(int value=0,snode * next=nullptr){
       this->value=value;
        this->next=next;

    }

};

#endif // SNODE_H


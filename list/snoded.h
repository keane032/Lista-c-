#ifndef SNODED_H
#define SNODED_H

struct snoded{

    int value;

    snoded *next;
    snoded *previus;

    snoded(int value = 0, snoded *next=nullptr, snoded *previus=nullptr){
       this->value = value;
        this->next = next;
        this->previus = previus;
    }

};

#endif // SNODED_H

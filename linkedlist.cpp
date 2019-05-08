#include "linkedlist.h"
#include <fstream>


linkedlist::linkedlist() {
    head = new node;
    head = nullptr;


}

linkedlist::~linkedlist() {
    delete head;

}

int linkedlist::count(node * &ptr) {
    int count = 0;
    node * curr = ptr;
    while(curr != NULL)
    {
        count ++;
        curr = curr -> next;
    }
    return count;
}

void linkedlist::addToFront(int n) {
    if(head == nullptr)
    {
    head = new node;
    head -> data = n;
    }
    node * temp;
    temp = new node;
    temp -> data = n;
    temp -> next = head;
    head = temp;
    temp = nullptr;
}

double linkedlist::average(int total, int result) 
{
    double avg = 0.0;
    avg = (double)result/(double)total;
    return avg;
}

int linkedlist::sum(node * &ptr) 
{
    if(ptr == nullptr)
    {
        return 0;
    }

    return (ptr->data) + sum(ptr->next);
}

void linkedlist::writeInorder(string & file) {
    ofstream fileout;
    fileout.open(file);
    while(head!=NULL)
    {
        fileout << head -> data;
        head = head -> next;
    }

    fileout.close();

}

//void linkedlist::writeReversed(string & file) {
    
//}
int linkedlist::sum()
{
    return sum(head);
}
int linkedlist::count()
{
    return count(head);
}
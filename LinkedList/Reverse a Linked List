LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{

  //return the heaad of reversed linkedlist

    LinkedListNode<int>* ptr1 = NULL;
    LinkedListNode<int>* ptr2 = head;
    LinkedListNode<int>* ptr3 = head;

    while(ptr2!=NULL){
        ptr3 = ptr3->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr3;
    }
    
    return ptr1;

}

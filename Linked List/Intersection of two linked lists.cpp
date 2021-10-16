
int intersection(int d,Node* head1, Node* head2) {
    Node* curr1 =head1;
    Node* curr2 = head2;
    for(int i=0;i<d;i++){
        if(curr1==NULL) return -1;
        curr1=curr1->next;
    }
    while(curr1 && curr2){
        if(curr1==curr2) return curr1->data;
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;
}

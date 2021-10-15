
void removeloop(Node *head){
    Node* slow = head;
    Node* fast = head;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) break;
    }
    if(slow==head){
        while(fast->next!=slow) fast=fast->next;
        fast->next=NULL;
    } else if(slow==fast){
        slow=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
    }
}

/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
       Node*prev=NULL,*next=NULL,*curr=head;
      while(curr!=nullptr)
      {
          next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
      }
     return prev;
    }
};
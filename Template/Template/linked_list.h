//
//  linked_list.h
//  Template
//
//  Created by Mehedi Hasan on 19/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef linked_list_h
#define linked_list_h

struct Node {
   int data;
   struct Node *next;
};

struct Node* head = NULL;

void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void display() {
   struct Node* ptr;
   ptr = head;
   
    while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

#endif /* linked_list_h */

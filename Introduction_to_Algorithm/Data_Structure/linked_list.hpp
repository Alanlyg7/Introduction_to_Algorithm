//
//  linked_list.hpp
//  Introduction_to_Algorithm
//
//  Created by Edith on 4/30/20.
//  Copyright © 2020 Edith. All rights reserved.
//

#ifndef linked_list_hpp
#define linked_list_hpp

#include <stdio.h>
#include <iostream>

struct Node{
	int data = 0;
	Node* next = nullptr;
};

class Linked_list{
private:
	Node* head;
	Node* tail;
	
public:
	Linked_list(){
		head = nullptr;
		tail = nullptr;
	}
	
	void push_back(int n){
		Node *added_node = new Node;
		added_node->data = n;
		added_node->next = nullptr;
		
		if(head == nullptr){
			head = added_node;
			tail = added_node;
		}
		else{
			tail->next = added_node;
			tail = tail->next;
		}
	}
	
	void printList(){
		
		Node* printed_node = head;
		
		while (printed_node != nullptr) {
			std::cout << printed_node->data << " ";
			printed_node = printed_node->next;
		}
	}
	
	Node* findMiddle(){
		Node* slow = head;
		Node* fast = head;
		
		while(fast && fast->next){
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
		
	}
		
};

struct DLL_Node{

};




#endif /* linked_list_hpp */

#include<iostream>
using namespace std;
class Node {
	int value;
	Node next;
	Node() {
		value = 0;
		next = null;
	}
	Node(int value) {
		this.value = value;
		next = null;
	}
};
class SingleList {
	Node head;
	SingleList() {
		head(1);
		Node node1 = new Node(1);
		Node node2 = new Node(1);
		Node node3 = new Node(1);
		Node node4 = new Node(1);
		head.next = node1;
		node1.next = node2;
		node2.next = node3;
		node3.next = node4;
	}
};
int main()
{
	
}

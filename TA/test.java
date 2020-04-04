import java.util.*;


public class Linkedlist {
	Node head;

	class Node {
		int data;
		Node right, down;

		Node(int data) {
			this.data = data;
			right = null;
			down = null;
		}
	}

	Node merge(Node a, Node b) {
		if (a == null)
			return b;
		if (b == null)
			return a;

		Node result;

		if (a.data < b.data) {
			result = a;
			result.down = merge(a.down, b);
		}

		else {
			result = b;
			result.down = merge(a, b.down);
		}

		return result;
	}

	Node flatten(Node root) {

		if (root == null || root.right == null)
			return root;

		root.right = flatten(root.right);

		root = merge(root, root.right);
		return root;
	}

	Node push(Node head_ref, int data) {

		Node new_node = new Node(data);

		new_node.down = head_ref;

		head_ref = new_node;

		return head_ref;
	}

	void attach(Node head_ref, Node node) {

		if (head_ref == null) {
			this.head = node;
			return;
		}

		Node temp = head_ref;
		while (temp.right != null) {
			temp = temp.right;
		}
		temp.right = node;

	}

	void addLast(Node head_ref, int data) {

		Node nn = new Node(data);
		if (head_ref == null) {
			this.head = nn;
			return;
		}

		Node temp = head_ref;

		while (temp.down != null) {

			temp = temp.down;
		}

		temp.down = nn;

	}

	void printListT() {
		Node temp = head;
		while (temp != null) {
			Node temp2 = temp;
			while (temp2 != null) {
				System.out.print(temp2.data + " ");
				temp2 = temp2.down;
			}
			System.out.println();
			temp = temp.right;
		}
		System.out.println();
	}

	void print() {
		Node temp = head;
		while (temp != null) {
			System.out.print(temp.data + " ");
			temp = temp.down;
		}
		System.out.println();
	}

	public static void main(String args[]) {
		Linkedlist L = new Linkedlist();

		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		int[] input = new int[n];
		for (int i = 0; i < n; i++) {
			input[i] = scn.nextInt();
		}
		for (int i = 0; i < n; i++) {

			int j = input[i];
			Linkedlist ll = new Linkedlist();
			for (int k = 0; k < j; k++) {
				ll.addLast(ll.head, scn.nextInt());
			}

			L.attach(L.head, ll.head);
		}

		L.head = L.flatten(L.head);
//		L.printListT();
		L.print();
	}
}
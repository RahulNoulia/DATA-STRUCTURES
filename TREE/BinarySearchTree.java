import java.util.Scanner;

class Node {
	int data;
	Node left;
	Node right;

	public Node(int data) {
		this.data = data;
		left = null;
		right = null;
	}
}

public class BinarySearchTree {

	public static Node root;

	public BinarySearchTree() {
		this.root = null;
	}

	public boolean find(int id) {
		Node current = root;
		while (current != null) {
			if (current.data == id) {
				return true;
			} else if (current.data > id) {
				current = current.left;
			} else {
				current = current.right;
			}
		}
		return false;
	}

	public boolean delete(int id) {

		Node parent = root;
		Node current = root;
		boolean isLeftChild = false;
		while (current.data != id) {
			parent = current;
			if (current.data > id) {
				isLeftChild = true;
				current = current.left;
			} else {
				isLeftChild = false;
				current = current.right;
			}
			if (current == null) {
				return false;
			}
		}
		// Case 1: if node to be deleted has no children
		if (current.left == null && current.right == null) {
			if (current == root) {
				root = null;
			}
			if (isLeftChild == true) {
				parent.left = null;
			} else {
				parent.right = null;
			}
		}
		// Case 2 : if node to be deleted has only one child
		else if (current.right == null) {
			if (current == root) {
				root = current.left;
			} else if (isLeftChild) {
				parent.left = current.left;
			} else {
				parent.right = current.left;
			}
		} else if (current.left == null) {
			if (current == root) {
				root = current.right;
			} else if (isLeftChild) {
				parent.left = current.right;
			} else {
				parent.right = current.right;
			}
		} else if (current.left != null && current.right != null) {

			// now we have found the minimum element in the right sub tree
			Node successor = getSuccessor(current);
			if (current == root) {
				root = successor;
			} else if (isLeftChild) {
				parent.left = successor;
			} else {
				parent.right = successor;
			}
			successor.left = current.left;
		}
		return true;
	}

	public Node getSuccessor(Node deleleNode) {
		Node successsor = null;
		Node successsorParent = null;
		Node current = deleleNode.right;
		while (current != null) {
			successsorParent = successsor;
			successsor = current;
			current = current.left;
		}
		if (successsor != deleleNode.right) {
			successsorParent.left = successsor.right;
			successsor.right = deleleNode.right;
		}
		return successsor;
	}

	/**
	 * This method is used to insert element in Tree
	 * 
	 * @param id
	 */
	public void insert(int id) {
		Node newNode = new Node(id);
		if (root == null) {
			root = newNode;
			return;
		}
		Node current = root;
		Node parent = null;
		while (true) {
			parent = current;
			if (id < current.data) {
				current = current.left;
				if (current == null) {
					parent.left = newNode;
					return;
				}
			} else {
				current = current.right;
				if (current == null) {
					parent.right = newNode;
					return;
				}
			}
		}
	}

	/**
	 * This method is used to display Tree element
	 * 
	 * @param root
	 */
	public void display(Node root) {
		if (root != null) {
			display(root.left);
			System.out.print(" " + root.data + " ");
			display(root.right);
		}
	}

	public static void main(String arg[]) {
		BinarySearchTree bsTree = new BinarySearchTree();
		while (true) {
			System.out.println(" \n\n\t\t\t..... Binary Search Tree .....");
			System.out
					.println("\n\n 1. Intert Node \n\n 2. Delete \n \n 3 .Display \n\n 4. Find Element \n\n 5. Exit ");
			System.out.println("\n\n Enter Choice : ");
			Scanner input = new Scanner(System.in);
			switch (input.nextInt()) {
			case 1:
				System.out.println("\n\n Enter Element to Insert : ");
				bsTree.insert(input.nextInt());
				break;
			case 2:
				System.out.println("\n\n Enter Element to delete : ");
				bsTree.delete(input.nextInt());
				break;
			case 3:
				System.out.print("\n\n Binary Seacrh Tree Elements are ->  ");
				bsTree.display(bsTree.root);
				break;
			case 4:
				System.out.println("\n\n Enter Element to Find : ");
				if (Boolean.TRUE.equals(bsTree.find(input.nextInt()))) {
					System.out.println("\n\n Element is in Tree !! ");
				} else {
					System.out.println("\n\n Element not in Tree !! ");
				}
				break;
			case 5:
				System.out.println(" \n Programm Terminated !! \n");
				System.exit(0);
			default:
				System.out.println(" \n Please Enter correct Input !! \n");
				break;
			}
		}
	}
}
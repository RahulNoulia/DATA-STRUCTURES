
class LinkedList:
    def __init__(self):
        self.head = None

    def push(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node
   
    def reverse(self):
        prev = None
        current = self.head
        while current is not None:
            next = current.next
            current.next = prev
            prev = current
            current = next
        self.head = prev

    def print(self):
        temp = self.head
        while temp is not None:
            print(temp.data, end="\t")
            temp = temp.next

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None



ll = LinkedList()

while True:
    print("\n 1 . Insert \n 2 . Print \n 3 . Reverse \n 4 . Quit ")
    choice = input("\n Enter choice ->")
    if '1' == choice:
        element = input("\n Enter element -> ")
        ll.push(element)
    elif '2' == choice:
        print("\n LinkedList Element is  ->", end="\t")
        ll.print()
        print()
    elif '3' == choice:
        ll.reverse()
        print("\n Reversed LinkedList is ->" , end="\t")
        ll.print()
        print()
    else:
        break




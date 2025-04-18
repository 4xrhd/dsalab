class Node():
	"""docstring for Node"""
	def __init__(self, data):
		self.data = data
		self.next = None
class Circular:
	def __init__(self):
		self.head = None

	def append(self,data):
		new_node = Node(data)
		if not self.head:
			new_node.next = new_node
			self.head = new_node
		else:
			current = self.head
			while current.next != self.head:
				current = current.next
			current.next = new_node
			new_node.next = self.head


	def traverse(self):
		if not self.head:
			print("circular linked list empty")
			return
		current =self.head
		while 1:
			print(current.data ,end="->")
			current = current.next
			if current == self.head:
				break


circular_list = Circular()
circular_list.append(1)
circular_list.append(2)
circular_list.append(3)

circular_list.traverse()
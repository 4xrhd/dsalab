class Node():
	"""docstring for Node"""
	def __init__(self, data):
		self.data = data
		self.next = None

def insert_head(head, data):
	new_node = Node(data)
	new_node.next = head
	return new_node

def traverse(head):
	current= head
	while current: # print head untill false
		print(str(current.data) +"->",end=" ")
		current=current.next
	print("None")

head = None
head=insert_head(head,5)
head=insert_head(head,4)
head=insert_head(head,3)
head=insert_head(head,2)
head=insert_head(head,1)


traverse(head)
		
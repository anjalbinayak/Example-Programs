class node:
    def __init__(self, data):
        self.data = data
        self.right = self.left = None

    def __str__(self):
        return str(self.data)


class bstConverter(node):
    def __init__(self):
        self.root = None

    def add(self, data):
        if not self.root:
            self.root = node(data)
        else:
            self._add(self.root, data)

    def _add(self, start, data):
        if data < start.data:
            if not start.left:
                start.left = node(data)
            else:
                self._add(start.left, data)
        else:
            if not start.right:
                start.right = node(data)
            else:
                self._add(start.right, data)

    # Overriding the default print method for easier outputs
    def __str__(self):
        return self._print(self.root, "")

    def _print(self, start, c):
        if start:
            c = self._print(start.left, c)
            c = self._print(start.right, c)
            c += str(start.data) + " "
        return c


bTree = bstConverter()
treeInput = list(map(int, input("Provide the input seperated by spaces : ").split()))
if treeInput == []:
    print("Tree is empty")
elif len(treeInput) == 1:
    print("Only root is present")
    print(treeInput[0])
else:
    # Add the elements to the binary tree
    for i in treeInput:
        bTree.add(i)
    print("Post order traversal of the given binary tree is as follows")
    print(str(bTree)[:-1])

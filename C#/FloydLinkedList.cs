    public class FloydLinkedList
    {
        public Node head;

        public class Node
        {
            private int data;
            public Node next;

            public Node(int data)
            {
                this.data = data;
                next = null;
            }
        }

        public void Push(int node)
        {
            var newNode = new Node(node)
            {
                next = head
            };
            head = newNode;
        }

        public static bool IsLoopDetected(Node n)
        {
            var nodes = new HashSet<Node>();
            while (n != null)
            {
                if (nodes.Contains(n)) return true;
                nodes.Add(n);

                n = n.next;
            }
            return false;
        }
        
    }
}

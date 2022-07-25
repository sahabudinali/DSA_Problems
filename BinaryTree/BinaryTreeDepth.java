class Node
{
	int data;
	Node left, right;

	Node(int item)
	{
		data = item;
		left = right = null;
	}
}
class Binary {
        // purpose of the Node root is to define root, if we are not mention the Node root then it say can't find the symbol of root which we are sending the data.
	Node root;
	int maxDepth(Node node)
	{
		if (node == null)
			return 0;
		else
		{

// 			1				
// 		   2	       3
// 		 	    4	    5
				
                  return Math.max(maxDepth(node.left),maxDepth(node.right))+1; 
			// first left hand side if the left hand side of the root has not children then both will come 0 and 0 and max value is 0 and then add into 1.
			// it means that from the left hand side value comes 1.
			// comes to right hand side suppose if the right side of the root have two children then from the both side we are getting 1, 1 max value is 1
			// and add into 1 which becomes 2.
			// then we are going to the main root from left side value is 1 and right side value is 2 max value is 2 after into 1 which becomes 3.
			
			// this statement take little bit as compare to max function because first it store the value and then compare the values and in math function
			// only it time for recursion call every time
			// both the solution hvae big O(n) time complexity.
			// Math.max(maxDepth(node.left),maxDepth(node.right))+1; here we are basically count only the  
			//ages and the last we add the 1 becuase we didn't the count the root node that's we are adding one into it.
		}
	}
	public static void main(String[] args)
	{
		Binary tree = new Binary();

		tree.root = new Node(1);
		tree.root.left = new Node(2);
		tree.root.right = new Node(3);
		tree.root.left.left = new Node(4);
		tree.root.left.right = new Node(5);

		System.out.println("Height of tree is : " +
									tree.maxDepth(tree.root));
	}
}

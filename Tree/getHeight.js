// Start of function Node
function Node(data) {
  this.data = data;
  this.left = null;
  this.right = null;
} // End of function Node

// Start of function BinarySearchTree
function BinarySearchTree() {
  this.insert = function (root, data) {
    if (root === null) {
      this.root = new Node(data);

      return this.root;
    }

    if (data <= root.data) {
      if (root.left) {
        this.insert(root.left, data);
      } else {
        root.left = new Node(data);
      }
    } else {
      if (root.right) {
        this.insert(root.right, data);
      } else {
        root.right = new Node(data);
      }
    }

    return this.root;
  };

  // Start of function getHeight
  this.getHeight = function (root) {
    // Add your code here
    if (!root) {
      return -1;
    }
    let leftHeigth = this.getHeight(root.left);
    let rightHeigth = this.getHeight(root.right);

    return Math.max(leftHeigth, rightHeigth) + 1;
  }; // End of function getHeight
} // End of function BinarySearchTree
(function () {
  var tree = new BinarySearchTree();
  var root = null;
  let _input = "73521467";
  var values = _input.split("").map(Number);

  for (var i = 1; i < values.length; i++) {
    root = tree.insert(root, values[i]);
  }
  console.log(tree.getHeight(root));
})();

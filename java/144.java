class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> res = new LinkedList<Integer>();
        LinkedList<TreeNode> stack = new LinkedList<TreeNode>();

        if(root == null){
            return res;
        }

        stack.add(root);

        while(!stack.isEmpty()){
            TreeNode node = stack.pollLast();
            res.add(node.val);

            if(node.right != null){
                stack.add(node.right);
            }
            if(node.left != null){
                stack.add(node.left);
            }
        }


        return res;
    }
}
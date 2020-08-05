class Solution {
    public int rob(TreeNode root) {
        if (root == null)
            return 0;
        if (root.left == null && root.right == null)
            return root.val;

        if (root.left != null && root.right != null)
            return Math.max(root.val + (rob(root.left.left) + rob(root.left.right) + rob(root.right.left) + rob(root.right.right)), (rob(root.left) + rob(root.right)));
        if(root.left == null)
            return Math.max(root.val + (rob(root.right.left) + rob(root.right.right)), ( rob(root.right)));

        return Math.max(root.val + (rob(root.left.left) + rob(root.left.right)), (rob(root.left)));
    }
}

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
//To find the maximum path sum of a Binary Tree
class Solution {
    int sum=Integer.MIN_VALUE;
    public int maxPathSum(TreeNode root) {
        if(root.left==null && root.right==null)
            return root.val;
        find(root);
        return sum;
    }
    public int find(TreeNode root)
    {
        if(root==null)
            return 0;
        
        int lr=Math.max(0,find(root.left));
        int rh=Math.max(0,find(root.right));
        int max=lr+rh+root.val;
        if(max>=sum)
        {
            sum=max;
        }
        int l1=lr+root.val;
        int l2=rh+root.val;
        if(l1>=l2)
            return l1;
        return l2;
    }
}

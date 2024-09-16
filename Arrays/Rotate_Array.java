class Solution {
    public static void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;
        int[] temp = new int[n];
        
        for(int i =0; i<k; i++){
            temp[i] = nums[n-k+i];
        }
        for(int i=k; i<n; i++){
            temp[i] = nums[i-k];
        }
        for(int i=0; i<n; i++){
            nums[i] = temp[i];
        }
        System.out.println(nums);
    }
    
    public static void main(String[] args) {
    int[] nums = {1, 2, 3, 4, 5, 6, 7};
    rotate(nums, 3);
}

}

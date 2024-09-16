class Solution {
    public void moveZeroes(int[] nums) {
        int n = nums.length;
        int k = 0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                int temp = nums[k]; //k= nonZero element
                nums[k] = nums[i];
                nums[i] = temp;
                k++;
            }
        }
        System.out.println(nums);
    }
    public void main(String args[]){
        int[] nums= {0,1,0,3,12};
        moveZeroes(nums);
    }
}

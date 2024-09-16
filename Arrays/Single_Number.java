class Solution {
    public static int singleNumber(int[] nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;//XOR
        }
        return result;
    }

    public static void main(String[] args) {
        int[] nums = {4, 1, 2, 1, 2};
        int singleNum = singleNumber(nums);
        System.out.println(singleNum);
    }
}

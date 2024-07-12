class Solution {
    public void majorElement(HashMap<Integer, Integer> hs, int[] nums, List<Integer> majorEle, int totalCount,
            boolean isLessThanThree, int n) {
        for (int i = 0; i < n; i++) {
            hs.put(nums[i], hs.getOrDefault(nums[i], 0) + 1);
        }
        for (Integer key : hs.keySet()) {
            int value = hs.get(key);
            System.out.print(value + " ");
            if (value > totalCount) {
                majorEle.add(key);
            }
            if (isLessThanThree && (value < totalCount)) {
                majorEle.add(key);
            }
        }
    }

    public List<Integer> majorityElement(int[] nums) {
        int n = nums.length;
        List<Integer> majorEle = new ArrayList<>();
        int totalCount = n / 3;
        HashMap<Integer, Integer> hs = new HashMap<>();
        if (n < 3) {
            majorElement(hs, nums, majorEle, totalCount, true, n);
        } else {
            majorElement(hs, nums, majorEle, totalCount, false, n);
        }
        return majorEle;
    }
}

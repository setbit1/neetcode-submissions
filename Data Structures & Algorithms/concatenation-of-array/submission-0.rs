impl Solution {
    pub fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
        let result = [nums.clone(), nums].concat();
        return result;
    }
}

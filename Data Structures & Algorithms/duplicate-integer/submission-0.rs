impl Solution {
    pub fn has_duplicate(nums: Vec<i32>) -> bool {
        let mut found = HashSet::new();
        for number in nums {
            if !found.insert(number){
                return true;
            }
        }
        return false;
    }
}

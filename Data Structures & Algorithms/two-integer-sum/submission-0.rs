impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut finder = HashMap::new();

        for (index, &num) in nums.iter().enumerate() {
            let y = target - num;
            if let Some(&j) = finder.get(&y) {
                return vec![j as i32, index as i32];
            }
            finder.insert(num, index);
        }
        vec![]
    }
}
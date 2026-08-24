func twoSum(nums []int, target int) []int {
	hashmap := make(map[int]int)
	for index, value := range nums {
		diff := target - value
		if _, value := hashmap[diff]; value {
			return []int{hashmap[diff], index}
		}
		hashmap[value] = index
	}
	return []int{}
}

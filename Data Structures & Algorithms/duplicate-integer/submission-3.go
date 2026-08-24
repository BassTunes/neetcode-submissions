func hasDuplicate(nums []int) bool {
	var maps = make(map[int]struct{})
	for _, value := range nums {
		maps[value] = struct{}{}
	}
	if len(nums) == len(maps) {
		return false
	} else {
		return true
	}
}

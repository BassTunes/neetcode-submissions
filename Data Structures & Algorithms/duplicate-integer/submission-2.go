func hasDuplicate(nums []int) bool {
    var maps = make(map[int]int)
    for _, value := range nums {
        if maps[value] != 0 {
            return true
        } else {
            maps[value]++
        }
    }
    return false
}

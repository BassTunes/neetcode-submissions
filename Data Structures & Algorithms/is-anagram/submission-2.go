func isAnagram(s string, t string) bool {
   	checkS := make(map[rune]int)
	checkT := make(map[rune]int)

	for _, value := range s {
		checkS[value]++
	}

	for _, value := range t {
		checkT[value]++
	}

	if len(s) != len(t) {
		return false;
	}

	for _, value := range t {
		if checkS[value] != checkT[value] {
			return false
		}
	}

	return true
}

func groupAnagrams(myStrings []string) [][]string {
	var group [][]string
	for i, value := range myStrings {
		if value == "/" {
			continue
		}
		word := value
		var similar []string
		similar = append(similar, word)
		for j := i + 1; j < len(myStrings); j++ {
			if myStrings[j] == "/" {
				continue
			}
			if occur := checkAnagram(word, myStrings[j]); occur {
				similar = append(similar, myStrings[j])
				myStrings[j] = "/"
			}
		}
		myStrings[i] = "/"
		group = append(group, similar)
	}
	return group
}

func checkAnagram(word1 string, word2 string) bool {
	var occur [26]int
	if len(word1) != len(word2) {
		return false
	}

	for i := range word1 {
		occur[word1[i]-'a']++
		occur[word2[i]-'a']--
	}

	for _, value := range occur {
		if value != 0 {
			return false
		}
	}
	return true
}


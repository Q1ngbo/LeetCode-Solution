class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        sentenceList = sentence.split(" ")

        length = len(searchWord)

        for idx, word in enumerate(sentenceList):
            if len(word) >= length:
                if word[:length] == searchWord:
                    return idx + 1

        return -1

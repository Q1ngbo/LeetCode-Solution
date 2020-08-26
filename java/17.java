class Solution {
    public Map<Character, String> maps;
    public List<String> letterCombinations(String digits) {
        List<String> res = new ArrayList<String>();

        if(digits.length() < 1)
            return  res;
        maps = new HashMap<Character, String>();
        maps.put('2', "abc");
        maps.put('3', "def");
        maps.put('4', "ghi");
        maps.put('5', "jkl");
        maps.put('6', "mno");
        maps.put('7', "pqrs");
        maps.put('8', "tuv");
        maps.put('9', "wxyz");

        backTrack(res, digits, 0, new StringBuffer());


        return res;
    }

    public void backTrack(List<String> res, String digits, int index, StringBuffer comb){
        if(index == digits.length()){
            res.add(comb.toString());
            return;
        }

        char dight = digits.charAt(index);
        String letters = maps.get(dight);
        for(int i=0; i<letters.length(); i++){
            comb.append(letters.charAt(i));
            backTrack(res, digits, index+1, comb);
            comb.deleteCharAt(index);
        }
    }
}
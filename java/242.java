class Solution {
    public boolean isAnagram(String s, String t) {

        if(s.length() != t.length())
            return false;

        int[] chart = new int[26];

        for(int i=0; i<s.length(); i++){
            chart[s.charAt(i) - 'a']++;
            chart[t.charAt(i) - 'a']--;

        }

        for (int value : chart)
            if (value != 0)
                return false;

        return true;
    }
}
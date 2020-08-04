class Solution {
    public boolean isPalindrome(String s) {
        int length = s.length();
        int i = 0, k = length - 1;

        while (i < k) {
            if (!Character.isLetter(s.charAt(i)) && !Character.isDigit(s.charAt(i))) {
                i++;
                continue;
            }
            if (!Character.isLetter(s.charAt(k))&& !Character.isDigit(s.charAt(k))) {
                k--;
                continue;
            }
            if (Character.toLowerCase(s.charAt(i)) != Character.toLowerCase(s.charAt(k)))
                return false;
            i++;
            k--;
        }

        return true;
    }

}
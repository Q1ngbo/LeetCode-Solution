class Solution {
    public String reverseVowels(String s) {
        char[] sc = s.toCharArray();
        int i=0, k=s.length()-1;

        while (i<=k){
            char ci = Character.toLowerCase(sc[i]);
            char ck = Character.toLowerCase(sc[k]);
            if(ci != 'a' && ci != 'e' && ci != 'i' && ci != 'o' && ci != 'u'){
                i++;
            }else if(ck != 'a' && ck != 'e' && ck != 'i' && ck != 'o' && ck != 'u'){
                k--;
            }else {
                char ch = sc[i];
                sc[i] = sc[k];
                sc[k] = ch;
                i++;
                k--;
            }
        }
        StringBuilder res = new StringBuilder();
        for(char ch : sc)
            res.append(ch);
        return res.toString();
    }
}
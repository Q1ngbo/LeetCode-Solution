class Solution {
    public String addStrings(String num1, String num2) {
        while(num1.length() < num2.length()){
            num1 = "0" + num1;
        }
        while(num2.length() < num1.length()){
            num2 = "0" + num2;
        }
        int m = num1.length();
        String res = "";
        int cin=0;
        for(int i=m-1; i>=0; i--){
            char a=num1.charAt(i), b=num2.charAt(i);
            int sum = (a-'0') + (b-'0') + cin;
            if (sum >=10){
                cin = 1;
            }else {
                cin = 0;
            }
            res = (sum%10) + res;
        }
        if(cin == 1){
            res = "1" + res;
        }

        return res;
    }
}
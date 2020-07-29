class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();

        int length = s.length();
        char ch, topCh;

        for(int i=0; i<length; i++){
            ch = s.charAt(i);
            if(ch == '(' || ch == '{' || ch == '['){
                stack.push(ch);
            }else {
                if(stack.isEmpty()){
                    return false;
                }
                topCh = stack.peek();
                if(ch == ')' && topCh == '('){
                    stack.pop();
                }
                else if(ch == ']' && topCh == '['){
                    stack.pop();
                }
                else if(ch == '}' && topCh == '{'){
                    stack.pop();
                }else {
                    return false;
                }
            }
        }
        if(stack.isEmpty()){
            return true;
        }

        return false;

    }
}
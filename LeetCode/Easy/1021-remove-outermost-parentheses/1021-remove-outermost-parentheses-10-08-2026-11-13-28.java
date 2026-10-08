class Solution {
    public String removeOuterParentheses(String s) {
        String str = "";
int n = s.length();
int count = 0;
int left = 0;

for (int i = 0; i < n; i++) {
    if (s.charAt(i) == '(') {
        if (count > 0) {
            str += s.charAt(i);
            left++;
        } else {
            count++;
        }
    } else {
        if (left > 0) {
            str += s.charAt(i);
            left--;
        } else {
            count--;
        }
    }
}

return str;
    }
}
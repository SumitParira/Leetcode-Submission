class Solution {
public:
    int countCollisions(string directions) {
        int n = s.size();
        int i = 0, j = n - 1;

         while (i < n && s[i] == 'L') i++;
         while (j >= 0 && s[j] == 'R') j--;

          int ans = 0;
        for (int k = i; k <= j; k++) {
            if (s[k] != 'S') ans++;  // All moving cars in middle will collide
        }
    return ans;
    }
};
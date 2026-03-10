class Solution {
public:

vector<string> ones = {
        "", "One", "Two", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten",
        "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
        "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };
    vector<string> tens = {
        "", "", "Twenty", "Thirty", "Forty", "Fifty",
        "Sixty", "Seventy", "Eighty", "Ninety"
    };

string helper(int n){
    if(n==0) return "";
    if (n < 20)  return ones[n] + " ";
    if (n < 100) return tens[n / 10] + " " + helper(n % 10);
    return ones[n / 100] + " Hundred " + helper(n % 100);
    
}

    string numberToWords(int num) {
        if(num==0) return "Zero";
        string result = "";
        if(num>=1000000000){
            result+= helper(num/1000000000) + "Billion" + " ";
            num=num%1000000000;
        }
        if(num>=1000000){
            result+=helper(num/1000000)+"Million" +' ';
            num=num%1000000;
        }
        if(num>=1000){
            result+=helper(num/1000)+"Thousand"+' ' ;
            num=num%1000;
        }
        result+=helper(num);

        while (result.back() == ' ') result.pop_back();
        return result;
    }
};
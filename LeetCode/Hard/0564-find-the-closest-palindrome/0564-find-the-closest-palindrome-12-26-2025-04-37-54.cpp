class Solution {
public:

long long func (long long left,bool even){
    long long resultnum=left;
    if(!even){
        left=left/10;
    }
    while(left>0){
        resultnum=(resultnum*10)+left%10;
        left/=10;
    }
    cout<<resultnum<<endl;
    return resultnum;
}

    string nearestPalindromic(string n) {
        int L = n.size();
        vector<long long> possibleValue;
        int mid = L/2;
        int firstHalf=stoll(n.substr(0,L%2==0?mid:mid+1));
        possibleValue.push_back(func(firstHalf,L%2==0));
        possibleValue.push_back(func(firstHalf-1,L%2==0));
        possibleValue.push_back(func(firstHalf+1,L%2==0));
        possibleValue.push_back(pow(10,L-1)-1);
        possibleValue.push_back(pow(10,L)+1);
        
        long long diff =  LLONG_MAX;
        long long  result=LLONG_MAX;
        long long originalNum = stoll(n);

        for(long long &num:possibleValue){
            if(num==originalNum) continue;
            if(abs(num-originalNum)<diff){
                diff=abs(num-originalNum);
                result=num;
                cout<<num<<endl;
            }else if(abs(num-originalNum)==diff){
                result=min(result,num);
            }
        }
return to_string(result);
    }
};
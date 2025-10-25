class Solution {
public:

bool balanced(int num){
    vector<int> v(10,0);

    while(num!=0){
        v[num%10]++;
        num/=10;
    }

    for(int i=0;i<=9;i++){
        if(v[i]>0 && v[i]!=i) return false;
    }

    return true;
}

    int nextBeautifulNumber(int n) {
        for(int num=n+1;num<=12224444;num++){
            if(balanced(num)) return num;
        }

        return -1;
    }
};
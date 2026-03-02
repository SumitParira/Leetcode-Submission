class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        int swaps=0;

        int arr[n];

        for(int i=0;i<n;i++){
            int count=0;
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]==0) count++;
                else break;
            }
            arr[i]=count;
        }

        for(int i=0;i<n;i++){
                int required=n-i-1;
                int j=i;
                while(j<n && arr[j]<required) j++;

                if(j==n) return -1;
                else{
                    while(j>i){
                        int temp=arr[j];
                        arr[j]=arr[j-1];
                        arr[j-1]=temp;
                        j--;
                        swaps++;
                    }

                }
                
            }
            return swaps;
    }
};
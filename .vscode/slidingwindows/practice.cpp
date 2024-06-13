class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum;
        int size = INT_MAX;
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            sum = 0;
            int x = 0;
            // cout<<"i"<<i<<" ";
            int j = i;
            while(j<n){
                // cout<<"j"<<j<<" ";
                if(sum==target){
                    // size = min(size, x);
                    int x1 = x;
                    size = x; 
                    cout<<size<<" ";
                    // cout<<"x"<<x<<endl;
                    break;
                }
                else if(sum>target){
                    break;
                }
                else if(sum!=target){
                    x++;//1 2
                    
                    sum = sum + nums[j]; // 4 7
                    // cout<<"sum"<<sum<<" ";
                    // cout<<"x"<<x<<" ";
                }
                j++;
            }
        }
        return size;
    }
};
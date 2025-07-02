class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            int n=nums.size();
            if(n==0)
                return 0;
            else if(n==1)
                return 1;
            priority_queue<int, vector<int>, greater<int>> minHeap;
            int temp=1;
            int max_length=1;
            for(int i=0;i<n;i++){
                minHeap.push(nums[i]);
            }
            int prev=minHeap.top();
            int next;
            minHeap.pop();
            for(int i=0;i<n-1;i++){
                next=minHeap.top();
                minHeap.pop();
                if(prev==next)
                    continue;
                else if(prev+1==next)
                    temp++;
                else{
                    max_length=max(max_length,temp);
                    temp=1;
                }
                prev=next;
            
            }
            max_length = max(max_length, temp);
            return max_length;
    
        }
    };

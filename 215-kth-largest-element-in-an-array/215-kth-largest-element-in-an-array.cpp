class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>, greater<int>>minpq;
        
        for(int i=0;i<nums.size();i++){
            if(minpq.size()<k){
                minpq.push(nums[i]);
            }else{
                if(minpq.top()<nums[i]){
                    minpq.pop();
                    minpq.push(nums[i]);
                }
            }
        }
        return minpq.top();
        
//         //For kth largest element in an array we will have to take min heap.
//         //In c++, by default the priority queue is max heap so we have to convert it into min heap
//         //by adding a negative sign to it will inserting
        
//         priority_queue<int> pq;
        
//         for(int i=0;i<k;i++){
//             pq.push(-1*nums[i]);   ///push first k elements in queue
//         }
        
//         for(int i=k;i<nums.size();i++){
//             if(pq.top()<nums[i]){  //replace upcoming element is greater we have to replace the peak
//                 pq.pop();
//                 pq.push(-1*nums[i]);
//             }
//         }
//         return (-1*pq.top());
    }
};
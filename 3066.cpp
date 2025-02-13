// LEETCODE POTD 13-02-2025
// PROBLEM NUMBER 3066
// Minimum Operations to Exceed Threshold Value II


class Solution {
    #define ll long long
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<ll,vector<ll>,greater<ll>> minheap(nums.begin(),nums.end());

        int count=0;
        while(!minheap.empty()){
            ll x=minheap.top();
            minheap.pop();
            if(x>=k)
                break;
            ll y=minheap.top();
            minheap.pop();

            minheap.push(min(x, y) * 2 + max(x, y));
            count++;
        }
        return count;
    }
};


// This code finds the minimum number of operations required to make all elements in the array at least
// **k** by repeatedly combining the two smallest elements. It uses a **min-heap**
// (priority queue) to efficiently retrieve and merge the smallest values. In each step,
// it removes the two smallest numbers, combines them using the formula **min(x, y) * 2 + max(x, y)**,
// and pushes the result back into the heap until the smallest element is **≥ k**.
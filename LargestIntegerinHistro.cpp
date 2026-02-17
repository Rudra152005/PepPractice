class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         stack<int> st;
         int n = heights.size();
         int maxlen = 0;

         for(int i=0; i<=n; i++){
            int currh = (i == n) ? 0 : heights[i];

            while(!st.empty() && currh < heights[st.top()]){
                int height = heights[st.top()];
                st.pop();

                int right = i;
                int ledt = st.empty() ? -1 : st.top();
                int width = right - ledt - 1;

                maxlen = max(maxlen, height*width); 
            }
            st.push(i);
         }

         return maxlen;
        
    }
};

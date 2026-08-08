class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size();
       int maxArea=0,i=0,j=n-1;
       while(i<j){
        int length = j-i;
        int width=min(height[i],height[j]);
        int area = length*width;
        maxArea = max(maxArea,area);
        if(height[i]<=height[j]) i++;
        else j--;
       } 
       return maxArea;
    }
};
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end()) ;
        int count = 0 ; 
        int i = 0 ; 
        while(i<costs.size()){
            if(costs[i]<=coins){
                coins-=costs[i];
                count++ ;
                i++ ; 
            }
            else{
                break ; 
            }
        }
        return count ; 
    }
};
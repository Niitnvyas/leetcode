class Solution {
public:
    bool isPowerOfFour(int n) {
        int x ;
        if(n==1){
            return true;
        }
        if(n<=0){
            return false;
        }
        if(n%4!=0){
            return false;
        }
        while(n>=2){
            x = n%4; 
            if(x!=0){
                return false;
            }
        n= n/4;
        }
        
        
        
        return true;
    }
};
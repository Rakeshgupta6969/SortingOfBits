class Solution {
    public:
    
        static bool compare(int a,int b){
         
         int countA = __builtin_popcount(a);
         int countB = __builtin_popcount(b);
    
    
        if(countA == countB){
    
          return a<b;
    
        }
        
    
        return countA<countB;
    
    
    
    
        }
        vector<int> sortByBits(vector<int>& arr) {
              
          // using the comprator method.
    
    
          sort(arr.begin(),arr.end(),compare);
    
          return arr;
    
    
    
    
        }
    };
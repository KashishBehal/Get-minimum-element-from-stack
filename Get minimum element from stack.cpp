class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
          stack<int> s1;
            
            if(s.empty()){
                return -1;
            }
        
            s1 = s;
        
            int min = s1.top();
        
            s1.pop();
            while(!s1.empty()){
                if(min > s1.top()){
                    min = s1.top();
                    s1.pop();
                }
                else{
                    s1.pop();
                }
            }
        
            return min;
       }
       
       /*returns poped element from stack*/
       int pop(){
          if(s.empty()){
               return -1;
           }
           int temp = s.top();
           s.pop();
           
           return temp;
       }
       
       /*push element x into the stack*/
       void push(int x){
           s.push(x);
           //Write your code here
       }
};

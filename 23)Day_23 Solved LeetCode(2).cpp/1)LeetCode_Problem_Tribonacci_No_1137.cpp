class Solution {
public:
    int tribonacci(int n) {
       if(n==0 || n==1) return n;

       int t0=0,t1=1,t2=1;
       for(int i=1;i<n;i++){
       int t3=t0+t1+t2;

       t0=t1;
       t1=t2;
       t2=t3;
      }  return t1;
    } 
};
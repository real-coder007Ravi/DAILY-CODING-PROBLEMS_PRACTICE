class Solution {
public:
    // DP
// int fib(int n) {
//         int *dp=new int[n+1];
//          dp[0]=0;
//          dp[1]=1;
//          for(int i=2;i<=n;i++){
//                dp[i]=dp[i-1]+dp[i-2];
//          }
//          return dp[n];  
//      }
//     };
    // MEMORIZATION
// int helper(int n,int *arr){
//         if(n==0||n==1){
//             return n;
//            }
//          if(arr[n]!=-1){
//              return arr[n];
//          }
//          int ans=helper(n-1,arr)+helper(n-2,arr);
//          arr[n]=ans;
//          return ans;
// }
// int fib(int n) {
//          int *arr=new int[n+1];
//          for(int i=0;i<=n;i++){
//              arr[i]=-1;
//          }
//          return helper(n,arr);}
 //    //BRUTE FORCE
 // int fib(int n) {
 //        if(n==0||n==1){
 //           return n;
 //        }
 //        return fib(n-1)+fib(n-2);
 //    }
    // int fib(int n){
    //      if(n<2)return n;
    //     int a=0,b=1,c=0;
    //     for(int i=1;i<n;i++){
    //         c=a+b;
    //         a=b;
    //         b=c;
    //     }
    //     return c;
    // }
    //USE BINET'S FORMULA FOR CALCULATING FIBONACCI NUMBER THAT IS 
        /*
        FIB(N)=ROUND((PHI^N)/SQRT(5)) WHERE PHI=(SQRT(5)+1)/2
        */
      int fib(int n){
          double phi=((sqrt(5)+1)/2);
          return round((pow(phi,n)/sqrt(5)));
      }
        
   
};

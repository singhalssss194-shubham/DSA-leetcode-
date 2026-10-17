class Solution {
public:
   int divide(int dividend, int divisor) {
    if(dividend==INT_MAX && divisor == -1){
        return -2147483647;
    }
    if(dividend==INT_MIN && divisor == -1){
        return INT_MAX;
    }
    // if(dividend==INT_MIN && divisor == 1){
    //     return INT_MIN;
    // }
    // if(dividend==INT_MAX && divisor == 1){
    //     return INT_MAX;
    // }
    if(divisor==1){
        return dividend;
    }
   long long divs=llabs((long long)divisor);
   long long  divd=llabs((long long)dividend);
     
     long long count=0;
     long long sum=divs;
     while(sum<=divd){
        sum+=divs;
        count++;
     }
     if((dividend<0 && divisor<0)||(dividend>0 && divisor>0)){
        return count;
     }
       
     return count-(count+count);
    }
};
  long long power(int N,int R)
    {
       //Your code here
       if(R==0) return 1;
       long long temp = power(N , R/2);
       temp = (temp * temp )%1000000007;
       if(R%2==0){
           return temp;
       }
       return (temp*N)%1000000007;
        
    }
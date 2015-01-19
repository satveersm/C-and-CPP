==========================================================================
Problem1

bool isPalindrome(int n)
{
    if(n < 0) return 0;
    
    int num = n;
    int factor = 1;
 
    while(num>= 10)
    {
       factor = factor*10;
       num = num/10;
    }
    
    while(n>0)
    {
       if(n/factor == n%10)
       {
          n=n%factor;
          n=n/10;
          factor=factor/100;
       }
       else return false;
    }
 
    return true;
}
====================================================================================

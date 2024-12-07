   int myAtoi(char *s) {
        // Your code here
        int i=0;//index
        while(s[i]==' ')
        {
            i++;
            //whenever we encounter space in the string we are simply skipping
            
        }
        //lets handle the sign
        int sign=1;
        if(s[i]=='+'||s[i]=='-')
        {
            if(s[i]=='-')
            {
                sign=-1;
            }
            i++;
            
        }
        int res=0;
        while(isdigit(s[i]))
        {
            //if curr index is digit then we are going  cobert it into int
            int digit=s[i]-'0';
            
            //lets handle the overflow condition
            if(res>INT_MAX/10 || res==INT_MAX/10 &&(digit>7))
            {
                return (sign==1)? INT_MAX:INT_MIN;
            }
            res=res*10+digit;
            i++;
        }
        
        return res*sign;
    }

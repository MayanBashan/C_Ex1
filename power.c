#define EX 2.71828 
double Exponent(int x){
    if (x==0){
        return 1;
    }
        
    else if (x>0){
        double ans=1;
        while (x!=0){
            ans = ans*EX;
            x--;             
        }
        return ans;
    }
        double ans=1;
        while (x!=0){
            ans = ans*EX;
            x++;             
        }
         return 1/ans;
}

double Power(double x , int y){
     if (y==0){
         return 1;
     }
     
     else if (y>0){
        double ans=1;
        while (y!=0){
            ans = ans*x;
            y--;             
        }
    return ans;
    }

        double ans=1;
        while (y!=0){
            ans = ans*x;
            y++;             
        }
    return 1/ans;
}
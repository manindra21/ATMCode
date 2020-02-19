#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0, r = 0, k = 0, c = 0, l = 0, odd = 0, mid = 0, x = 0, 
        y = 0, a = 0, z = 0, b = 1, m = 1, n = 0;
   
    cout << "Please enter the number\n";
    cin >> l;
   
    if((l % 2 == 0) || l < 2){
       
       cout << "Please Enter valid number which should be greater than 2 and odd number\n";
       
    }
    else {
       
       odd = int(l/2) + 1;
       
       r = odd + l + 1;
       c = odd * 2 + l;
       mid = l;
       
       for(i = 0, k = mid, x = mid; i < r; ++i, x--, k++){
           
           if(i < odd + 1){
               
               for(j = 0; j < c; ++j){
                    
                    if(j < x)
                        cout << " ";
                    
                    if( j == mid){
                        
                        y = x;
                        while(y <= k){
                            
                            cout << "@";
                            y++;
                                
                        }
                        
                    }
                   
               }
               cout << endl;
           }
            else {
             
                mid = odd + 1 + l / 2;
              
                for(j = 0, x = odd - 1; j < c - odd; ++j){
                    
                    if( i <= mid){
                        if( j + a >= x && i <= mid){
                            if(j > x && j ){
                                
                                if(i != mid)
                                    cout << " ";
                                else
                                    cout << "@";
                                
                            }
                            else
                                cout << "*";
                                
                        
                        } else if( j + a < x && i <= mid) {
                            
                            cout << " ";
        
                        }
                    } else {
                        
                
                        if(j >= b && j <= x)
                            cout << "*";
                        else
                            cout << " ";
                        
                        
                    }
                  
                }
                z = a + 1;
                n = c - m - odd - l;
                for(j = c - odd, x = odd - 1; j < c; ++j){
                    
                   if( i <= mid){
                        while(z > 0){
                            cout << "*";
                            z--;
                        }
                    } else {
                        
                        while(n > 0){
                            cout << "*";
                            n--;
                        }
                        
                    }
                  
                }
                cout << endl;
                
                if(i <= mid)
                    a++;
                else{
                    b++;
                    m++;
                }
               
            }
           
        }
    }
   
   return 0;
}
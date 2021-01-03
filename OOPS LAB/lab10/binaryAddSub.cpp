#include<iostream>
using namespace std;
class Binary
{
    public: int b1,b2;
    public: 
    void getData()
    {
        cout<<"enter two binary numbers\n";
        cin>>b1>>b2;
    }
    void add ()
    {
        int sum[10];
        int r,i=0;
        while (b1 != 0 || b2 != 0) 
        {
            sum[i++] = (int)((b1 % 10 + b2 % 10 + r) % 2);
            r = (int)((b1 % 10 + b2 % 10 + r) / 2);
            b1 = b1 / 10;
            b2 = b2 / 10;
        }
        if (r != 0) {
         sum[i++] = r;
        }
        --i;
        cout<<" The sum of two binary numbers is: ";
        while (i >= 0) {
         cout<<(sum[i--]);
        }
         cout<<("\n");  
    }

    void subtract() 
    {   
        int a[5],b[5];
        int n=5,c=0;
        for(int i=b1;i>0;i/=10){
            int dig=b1%10;
            a[c]=dig;
            c++;
        }
        c=0;
        for(int i=b2;i>0;i/=10){
            int dig=b2%10;
            b[c]=dig;
            c++;
        }

    // 1's Complement 
    for(int i = 0; i < n; i++)    
    { 
          
        //Replace 1 by 0 
        if(b[i] == 1)  
        { 
            b[i] = 0; 
        } 
        
        //Replace 0 by 1 
        else
        { 
            b[i] = 1;  
        } 
    } 
    
    //Add 1 at end to get 2's Compliment 
    for(int i = n - 1; i >= 0; i--)  
    {                        
        if(b[i] == 0) 
        { 
            b[i] = 1; 
            break; 
        } 
        else
        { 
            b[i] = 0; 
        } 
    } 
    
    // Represents carry   
    int t = 0;                             
    for(int i = n - 1; i >= 0; i--) 
    { 
          
        // Add a, b and carry 
        a[i] = a[i] + b[i] + t;   
        
        // If a[i] is 2 
        if(a[i] == 2) 
        { 
            a[i] = 0; 
            t = 1; 
  
        } 
        
        // If a[i] is 3 
        else if(a[i] == 3) 
        { 
            a[i] = 1; 
            t = 1; 
        } 
        else
            t = 0; 
    } 
    
    cout << endl; 
      
    // If carry is generated 
    // discard the carry  
    if(t==1)  
    {         
        
       // print the result  
       for(int i = 0; i < n; i++) 
       { 
             
         // Print the result 
         cout<<a[i];        
       } 
    } 
    
    // if carry is not generated 
    else                 
    {                   
          
        // Calculate 2's Compliment 
        // of the obtained result 
        for(int i = 0; i < n; i++)  
        {                   
            if(a[i] == 1) 
                a[i] = 0; 
            else
                a[i] = 1; 
        } 
        for(int i = n - 1; i >= 0; i--) 
        { 
            if(a[i] == 0) 
            { 
                a[i] = 1; 
                break; 
            } 
        else
            a[i] = 0; 
        } 
        
        // Add -ve sign to represnt 
        cout << "-";          
        
        // -ve result 
        // Print the resultant array 
        for(int i = 0; i < n; i++) 
        { 
            cout << a[i];     
        } 
    }   
} 
};
int main()
{
    Binary ob;
    ob.getData();
    cout<<"added binarys are: \n";
    ob.add();
    cout<<"added binarys are: \n";
    ob.subtract();
    return 0;

}
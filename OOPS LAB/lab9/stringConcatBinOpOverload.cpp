#include <iostream> 
#include <cstring> 
using namespace std; 
  
class concat
{ 
  
public: 
    char str[100]; 

    concat()
    {

    } 
  
    concat(char str[]) 
    { 
        strcpy(this->str, str); 
    } 
  
    concat operator+(concat& S2) 
    { 
        concat S3; 
        strcat(this->str, S2.str); 
        strcpy(S3.str, this->str); 
        return S3; 
    } 
}; 
  
int main() 
{ 
    char str1[] = "Hello"; 
    char str2[] = "World"; 
  
    concat a1(str1); 
    concat a2(str2); 
    concat a3; 
  
    a3 = a1 + a2; 
    cout << "Concatenation: " << a3.str; 
  
    return 0; 
} 
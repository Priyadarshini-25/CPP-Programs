#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;            
      int inches;       
      
   public:
      Distance()
      {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i)
      {
         feet = f;
         inches = i;
      }
      
      void displayDistance() {
         cout << "Feet: " << feet << " Inches:" << inches <<endl;
      }
      
      bool operator >(const Distance& d) {
         if(feet > d.feet) {
            return true;
         }
         if(feet == d.feet && inches > d.inches) {
            return true;
         }
         
         return false;
      }
};

int main() {
   Distance d1(11, 10), d2(5, 11);
 
   if( d1 > d2 ) {
      cout << "d1 is greater than d2 " << endl;
   } else {
      cout << "d2 is greater than d1 " << endl;
   }
   
   return 0;
}
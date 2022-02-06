#include <iostream>
using namespace std;

int main(){
   int x, n;
   double y;
   //Input x
   cout << "Enter x = ";
   cin >> x;

    if(x > 0){
        //Input n
        cout << "Enter n: (n >= 1)  n = ";
        cin >> n; 
        y = 1;
        if(n >= 1){
           
            for (double i = 1.0; i <= n; i++)
            {
                y *= ((1.0/x) - (1.0/i));
            }
            //Output result
            cout << "Result: y = " << y << endl;
        }else{
            cout << "'n' must be more or equal than 1 "<<endl;
            cout << "You've inputted: " << n << endl;
        }
    }else{
        //Input n
        cout << "Enter n: (n >= 0)  n = ";
        cin >> n;
        y = 0;
        if(n >= 0){
            double tmp;
            for (double i = 0; i <= n - 1; i++)
            {
                tmp = 0;
                for (double j = 0; j <= n - 1; j++)
                {
                   tmp += 1.0/(x - i +j);
                }
                y += tmp;
            }
            //Output result
            cout << "Result: y = " << y << endl;
        }else{
            cout << "'n' must be more or equal than 0 "<<endl;
            cout << "You've inputted: " << n << endl;
        }
    }

   return 0;
}
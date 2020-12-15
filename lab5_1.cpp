#include<iostream>
using namespace std;

int main()
{
    int n=0,even=0,odd=0;
    
	do 
    {
           cout << "Enter an integer: ";
           cin >> n;
           if(n!=0){
            	if(n%2==0)
					{
                 		even=even+1;
            		}
            	else
            		{
                 		odd=odd+1;
            		}
                }
    }while(n!=0);
        
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}


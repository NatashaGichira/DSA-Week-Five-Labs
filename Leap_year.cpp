//pseudocode to check if a year is leap or not

//Steps
//request user input
//read input
//check if divisible by 4,100 or 400 
//if modulus = 0, leap year else false
//Output

/*Group members: 124255-Natasha Gichira-A
                 124413-Samya Badhawi-A
				 124405-Ben Otieno-A
				 124422-Dennis Muriuki-A */

#include <iostream>
using namespace std;

int main() {
	
	int year;
	bool lyear = true;
	
cout<< "Please enter any year to check if it is a leap year: " <<endl;
cin>> year;
	
	lyear = true;
	
	     if(year % 4 == 0)
	        
			{
	    	   if( year % 100 == 0)
	    	
	    	      {
	    	   	
	    	    	if (year % 400 == 0)
	    	   	
			   
			    cout<< "It is a leap year!" <<endl;
	    	
		          } 
		    } 
		
		else
	
		  lyear = false;
		  
		         if (year % 4 && year % 100 || year % 400 != 0)
		              
					  {
		                cout<< "False,not a leap year!"  <<endl;
	                  }
	    
 
 return 0;
	
}

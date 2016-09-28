/**********************************************
*This program is a Calculator that will allow *
* (+, -, *, /, !, ^,%, L) or (q,Q) to quit    *
*                                   	      *
*  Written by Wesley Gue                      *
***********************************************/


 
#include <iostream> 
#include <stdlib.h>
#include <cmath>
using namespace std;




// all the prototypes from the functions
double add(double,double);
double sub(double,double);
double  mult(double,double);
double div1(double,double);
int fac(int);
int exp(int,int);
double log(double);
double getOperand(double);
int getOperator(char);
char theSwitch(char,double,double);
int operBool(int);
int rem(int,int);



int main()
{
	// Ol bob keeps things running over and over until 'q' or 'Q' is entered.
	// 'a' is for the Operator. op1, and op2 are for the operands.
	int bob=23;
	char a;
  double op1=0;
  double op2=0;
	
	// Greeting to the Calculator
	cout<<"Welcome to Calculator"<<endl;
	 while (bob==23) // here's bob keeping most of main  wrapped in a while loop. 
	  {
	  	// gets operand, then operator. if need be it will get a second operand.
	  	// It will quit if 'Q' or 'q' is entered at getOperator() function.
	  	// goes to a switch, does the math and prints out answer. 
      
			op1= getOperand(a);
      char opr= getOperator(a);
  	  if (opr=='+' || opr=='-' || opr=='/' || opr=='^' || opr=='*' || opr=='%')
	    { 
	      op2=getOperand(a);
      } 
			 
      theSwitch(opr,op1,op2);
    }
 
 return EXIT_SUCCESS;
}




int rem(int a,int b) // remainder function
{
  int c=a%b;
	return c;	
}

double add(double a,double b) // addition function
	{
		double c=a+b;
		return c;
	}

double sub(double a,double b) // subtraction function
	{
		double c=a-b;
		return c;
	}


double mult(double a,double b) // multiplication function
	{
		double c=a*b;
		return c;
	}

double div1(double a,double b) // divisio function
	{
		int c=(a/b);
		return c;
	}

int fac(int i) // factorial function
{
  int result = 1;
  while (i > 0 && i < 15) 
	{
    result = result * i;
    i = i-1;		
  }
  return(result);
}
	
int exp(int a,int b) // exponentiation function

	{
    int c=pow(a,b);
	  return c;
	}

double log(double a) // log10 function
	{
			double c=log10(a);
			return c;
	}

double getOperand(double a) // function that gets a operand from user
{ 
 a=50000;
 while (a>46340 || a<-46340)
 {
 cout<<"Enter an operand: ";
 cin>>a;
 }
 
 
 return a;
 
}

int getOperator(char a) //  function that get's a operator from user. 
                        //  if 'q' or 'Q' is entered program will quit.
{
	char q='q';
	char Q='Q';
	


 cout<<"Select the Operation ('Q' to quit)\n+, -, *, /, !, ^,%, L\n>";
 cin>>a;
 if (a == '+'||a == '-'||a == '*'||a == '/'||a == '!'||a == '^'||a == '%'||a == 'L')
 {
 	if(a==q || a==Q)
 {	
 cout<<"Program Terminated"<<endl;
  system("PAUSE");
  return EXIT_SUCCESS;
 }
 return a;
 }
 else
 {
 	cout<<"You have to choose one of the following (+, -, *, /, !, ^,%, L) or (q,Q) to quit: ";
 	cin>>a;
 	if(a==q || a==Q)
  {	
  cout<<"Program Terminated"<<endl;
  system("PAUSE");
  return EXIT_SUCCESS;
  }
  return a;
 	
 }
 
 }
 
  
  char theSwitch(char opr, double op1, double op2) //  this function uses a switch case to
  {                                                //  do the math that is needed and print 
  	int answer =0;                                 // print the results.
	switch (opr)
   {
    case '!':
    		if(op1>=0 && op1<=12)
    		{
    		 	answer=fac(op1);
  	      cout<<op1<<"!"<<"="<<answer<<endl<<endl;
  	      break;
  	    }
  	    else
  	    {
  	    cout<<"You need to pick a number between 0 and 12 for factorial"<<endl;	
  	    break;
  	    }
  	
		case '^':
  	answer=exp(op1,op2);
  	cout<<op1<<"^"<<op2<<"="<<answer<<endl<<endl;
  	break;
  	
		case 'L':
			if(op1>=1||op1<=46340)
			{
    	answer=log(op1);
  	cout<<op1<<"L"<<"="<<answer<<endl<<endl;
  	  break;
  	  }
  	  else
  	  {
  	  cout<<"You need to pick a number between 1 and 46340"<<endl;
			break;	
  	  }
  	
	 case '+':
	 answer=add(op1,op2);
	 cout<<op1<<"+"<<op2<<"="<<answer<<endl<<endl;
	 break;
	 
	 case '-':
	 answer=sub(op1,op2);
	 cout<<op1<<"-"<<op2<<"="<<answer<<endl<<endl;
	 break;
	
	 case '*':
	 answer=mult(op1,op2);
	 cout<<op1<<"*"<<op2<<"="<<answer<<endl<<endl;
	 break;
	 
	 case '/':
	 answer=div1(op1,op2);
	 cout<<op1<<"/"<<op2<<"="<<answer<<endl<<endl;
	 break;
	 
	 case '%':
	 answer=rem(op1,op2);
	 cout<<op1<<"%"<<op2<<"="<<answer<<endl<<endl;
	 break;
	 }
   }
 


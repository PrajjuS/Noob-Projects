/**************************************************
 *        C++ Program Written By PRAJWAL.S        *
 * Found any bugs? Report to @PrajjuS in Telegram *
 **************************************************/

#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
void main()
{
clrscr();
char human;
start:
cout<<"Type Y or y to prove that you are human\n";
cin>>human;
if(human=='Y' || human=='y')
{
{
cout<<"What you wanna do?\nType the Consecutive number\n\n";
cout<<"                           MENU                         \n";
cout<<"========================================================\n";
cout<<" 1. Addition.\n";
cout<<" 2. Subtraction.\n";
cout<<" 3. Multiplication.\n";
cout<<" 4. Division.\n";
cout<<" 5. Remainder.\n";
cout<<" 6. Area of Square.\n";
cout<<" 7. Area of Rectangl.e\n";
cout<<" 8. Area of Triangle.\n";
cout<<" 9. Area of Circle.\n";
cout<<"10. Area of Rhombus.\n";
cout<<"11. Area of Parallelogram.\n";
cout<<"12. Find Even or Odd.\n";
cout<<"13. Find Biggest 2 Numbers.\n";
cout<<"14. Find Biggest,Smallest and Second Smallest.\n";
cout<<"15. Find type of Character.\n";
cout<<"16. Leap Year Checker.\n";
cout<<"17. Everything about Triangle.\n";
cout<<"18. Generate numbers from 1 to n.\n";
cout<<"19. Generate numbers from n to 1.\n";
cout<<"20. Print a letter n times (spam).\n";
cout<<"21. Generate even numbers from 0 to n.\n";
cout<<"22. Generate odd numbers from 1 to n.\n";
cout<<"23. Generate the Sum of n numbers.\n";
cout<<"24. Find the Factorial of a number.\n";
cout<<"25. Check whether the Number is Prime or Not.\n";
cout<<"26. Check whether the Number is Power of 2 or Not.\n";
cout<<"27. Generate Tables of any Number\n";
cout<<"28. Reverse any Number\n";
cout<<"29. Check whether the Number is Palindrome or Not.\n";
cout<<"30. Check whether the Number is Armstrong Number or Not.\n";
cout<<"31. Generate Fibonacci Series.\n";
cout<<"32. Generate Five types of Character Patterns.\n";
cout<<"33. Generate Five Types of Number Patters.\n";
cout<<"34. Generate Alphabet Pattern.\n";
cour<<"35. About Me\n";
cout<<"========================================================\n";
cout<<"Kek now input your choice\n\n";
int choice;
cin>>choice;
switch(choice)
{
case 1:
int x,y,sum;
cout<<"Enter any two numbers\n";
cin>>x>>y;
sum = x + y;
cout<<"Sum = "<<sum<<"\n";
break;

case 2:
cout<<"Enter any two numbers\n";
cin>>x>>y;
int sub;
sub = x - y;
cout<<"Difference = "<<sub<<"\n";
break;

case 3:
cout<<"Enter any two numbers\n";
cin>>x>>y;
int prod;
prod = x * y;
cout<<"Product = "<<prod<<"\n";
break;

case 4:
cout<<"Enter any two numbers\n";
cin>>x>>y;
float div;
div = x / y;
cout<<"Division = "<<div<<"\n";
break;

case 5:
cout<<"Enter any two numbers\n";
cin>>x>>y;
float reminder;
reminder = x % y;
cout<<"Reminder = "<<reminder<<"\n";
break;

case 6:
float area,r,l,b,h;
cout<<"Enter length of square\n";
cin>>l;
area = l * l;
cout<<"Area = "<<area<<"\n";
break;

case 7:
cout<<"Enter the value of length and breadth of rectangle\n";
cin>>l>>b;
area = l * b;
cout<<"Area = "<<area<<"\n";
break;

case 8:
cout<<"Enter the value of base and height of triangle\n";
cin>>b>>h;
area = 0.5 * b * h;
cout<<"Area = " <<area<<"\n";
break;

case 9:
cout<<"Enter the value of radius of circle\n";
cin>>r;
area = 3.14 * r * r;
cout<<"Area = "<<area<<"\n";
break;

case 10:
int d1,d2;
cout<<"Enter vales of two diagonals of Rhombus\n";
cin>>d1>>d2;
area = 0.5 * (d1*d2);
cout<<"Area = "<<area<<"\n";
break;

case 11:
cout<<"Enter the value of base and height of Parallelogram\n";
cin>>b>>h;
area = b * h;
cout<<"Area = "<<area<<"\n";
break;

case 12:
cout<<"Enter any number\n";
cin>>x;
if(x%2==0)
cout<<"Even numbrr\n";
else
cout<<"Odd number\n";
break;

case 13:
cout<<"Enter any two numbers\n";
cin>>x>>y;
if(x>y)
cout<<"Number "<<x<<" is Biggest\n";
if(x==y)
cout<<"Both are Equal numbers\n";
else
cout<<"Number "<<y<<" is Biggest\n";
break;

case 14:
int z,big,small,second;
cout<<"Enter any three numbers";
cin>>x>>y>>z;
big=x;
if(y>big)
big=y;
if(z>big)
big=z;
small=x;
if(y<small)
small=y;
if(z<small)
small=z;
second=(x+y+z)-(big+small);
cout<<"Biggest = "<<big<<"\n";
cout<<"Smallest = "<<small<<"\n";
cout<<"Second Small = "<<second<<"\n";
break;

case 15:
char ch;
cout<<"Enter any character\n";
cin>>ch;
if(ch>='a' && ch<='z')
cout<<"Its lower case character\n";
if(ch>='A' && ch<='Z')
cout<<"Its upper case character\n";
if(ch>='0' && ch<='9')
cout<<"It is a digit\n";
else
cout<<"It is special case character\n";
break;

case 16:
int year;
cout<<"Enter any year in YYYY format\n";
cin>>year;
if(year%4==0 || year%100!=0 || year%400==0)
cout<<"It is Leap Year\n";
else
cout<<"It is not a Leap Year\n";
break;

case 17:
int s1,s2,s3,p1,p2,p3;
cout<<"Enter the values of three sides of triangle\n";
cin>>x>>y>>z;
s1=x+y;
s2=x+z;
s3=y+z;
if(x>=s1 || y>=s2 || z>=s3)
cout<<"Triangle cannot be formed\n";
else
if(x==y && x==z && y==z)
cout<<"It is Equilateral Triangle\n";
else
if(x!=y && x==z && y==z)
if(x==y && x!=z && y==z)
if(x==y && x==z && y!=z)
cout<<"It is Isoceles Triangle\n";
else
if(x!=y && y!=z && x!=z)
cout<<"It is Scalene Triangle\n";
p1=x*x+y*y;
p2=x*x+z*z;
p3=y*y+z*z;
if(p1==z*z || p2==y*y || p3==x*x)
cout<<"It is Right Angled Triangle\n";
break;

case 18:
int n,i;
cout<<"Enter the nth number\n";
cin>>n;
cout<<"Numbers from 1 to "<<n<<" is\n";
for(i=1;i<=n;i++)
cout<<i<<"\n";
break;

case 19:
cout<<"Enter the nth number\n";
cin>>n;
cout<<"Number from "<<n<<" to 1 is\n";
for(i=n;i>=1;i--)
cout<<i<<"\n";
break;

case 20:
char p;
cout<<"Enter any letter \n";
cin>>p;
cout<<"Enter how many times you wanna spam\n";
cin>>n;
cout<<"Spamming.....\n";
for(i=1;i<=n;i++)
cout<<p<<"\n";
break;

case 21:
cout<<"Enter the nth value\n";
cin>>n;
cout<<"Even numbers from 0 to "<<n<<" is\n";
for(i=0;i<=n;i+=2)
cout<<i<<"\n";
break;

case 22:
cout<<"Enter the nth value\n";
cin>>n;
cout<<"Odd numbers from 1 to "<<n<<" is\n";
for(i=1;i<=n;i+=2)
cout<<i<<"\n";
break;

case 23:
cout<<"Enter the nth value\n";
cin>>n;
cout<<"Sum of first "<<n<<" numbers is\n";
sum=0;
for(i=1;i<=n;i++)
{
sum=sum+i;
}
cout<<"Sum = "<<sum<<"\n";
break;

case 24:
int fact=1;
cout<<"Enter any number to find its Factorial\n";
cin>>n;
cout<<"Factorial of the number "<<n<<" is\n";
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"Factorial = "<<fact<<"\n";
break;

case 25:
int flag=0;
cout<<"Enter any Number\n";
cin>>n;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
cout<<"The Number "<<n<<" is Prime\n";
else
cout<<"The Number "<<n<<" is Not a Prime\n";
break;

case 26:
cout<<"Enter any number\n";
cin>>n;
flag=0;
for(i=1;n>2;n=n/2)
{
if(n%2==1)
{
flag=1;
break;
}
}
if(flag==0)
cout<<"The Number "<<n<<" is Power of 2\n";
else
cout<<"The Number "<<n<<" is Not a Power of 2\n";
break;

case 27:
cout<<"Enter any NUmber\n";
cin>>n;
cout<<"Table for the number "<<n<<" is \n";
for(i=1;i<=10;i++)
{
prod=n*i;
cout<<n<<" x "<<i<<" = "<<prod<<"\n";
}
break;

case 28:
cout<<"Enter any +ve Integer\n";
cin>>n;
if(n>0)
{
int rem,rev,orig;
orig=n;
for(rev=0;n>0;n/=10)
{
rem=n%10;
rev=rev*10+rem;
}
cout<<"Original Number = "<<orig<<"\n";
cout<<"Reversed Number = "<<rev<<"\n";
}
else
cout<<"BRUH Enter +ve Integer Kthx bye.\n";
break;

case 29:
cout<<"Enter any +ve Integer\n";
cin>>n;
if(n>0)
{
int rem,rev,orig;
orig=n;
for(rev=0;n>0;n/=10)
{
rem=n%10;
rev=rev*10+rem;
}
cout<<"Given Number = "<<orig<<"\n";
cout<<"Reversed Number = "<<rev<<"\n";
if(orig==rev)
cout<<"The Number "<<orig<<" is Palindrome\n";
else
cout<<"The Number "<<orig<<" is Not a Palindrome\n";
}
else
cout<<"BRUH Enter +ve Integer Kthx bye.\n";
break;

case 30:
cout<<"Enter any +ve Integer\n";
cin>>n;
if(n>0)
{
int orig,rem;
orig=n;
int res;
for(res=0;n>0;n/=10)
{
rem=n%10;
res=res+rem*rem*rem;
}
cout<<"Result = "<<res<<"\n";
if(res==orig)
cout<<"The Number "<<orig<<" is Armstrong Number\n";
else
cout<<"The Number "<<orig<<" is Not a Armstrong Number\n";
}
else
cout<<"BRUH, Enter +ve Integer\n";
break;

case 31:
cout<<"Enter any +ve Number\n";
cin>>n;
if(n>0)
{
int f,f1=-1,f2;
cout<<"Fibonacci Series of the number "<<n<<"is..\n";
for(f2=1;n>0;n--)
{
f=f1+f2;
f1=f2;
f2=f;
cout<<f<<"\n";
}
}
else
cout<<"BRUH, Enter +ve Integer\n";
break;


case 32:
int j,rows;
cout<<"Enter the Character you want to print as pattern\n";
cin>>ch;
cout<<"Enter the number of rows\n";
cin>>rows;
cout<<"Pattern 1\n";
for(i=1;i<=rows;i++)
{
for(j=1;j<=rows;j++)
{
cout<<ch;
}
cout<<"\n";
}
cout<<"\n";
cout<<"Pattern 2\n";
for(i=1;i<=rows;i++)
{
for(j=1;j<=i;j++)
{
cout<<ch;
}
cout<<"\n";
}
cout<<"\n";
cout<<"Pattern 3\n";
for(i=rows;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<ch;
}
cout<<"\n";
}
cout<<"\n";
cout<<"Pattern 4\n";
for(i=1;i<=rows;i++)
{
for(j=1;j<=rows-i;j++)
{
cout<<" ";
}
for(p=0;p!=2*i-1;p++)
{
cout<<ch;
}
cout<<"\n";
}

cout<<"\n";
cout<<"Pattern 5\n";
for(i=rows;i>=1;i--)
{
for(j=1;j<=rows-i;j++)
{
cout<<" ";
}
for(p=0;p!=2*i-1;p++)
{
cout<<ch;
}
cout<<"\n";
}
break;

case 33:
cout<<"Number Patterns\n";
cout<<"Enter the number of rows\n";
cin>>rows;
cout<<"\nPattern 1\n";
for(i=1;i<=rows;i++)
{
for(j=1;j<=rows;j++)
{
cout<<j<<" ";
}
cout<<"\n";
}

cout<<"\n";
cout<<"Pattern 2\n";
for(i=1;i<=rows;i++)
{
for(j=1;j<=i;j++)
{
cout<<j<<" ";
}
cout<<"\n";
}

cout<<"\n";
cout<<"Pattern 3\n";
for(i=rows;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<j<<" ";
}
cout<<"\n";
}

cout<<"\n";
cout<<"Pattern 4\n";
for(i=1;i<=rows;i++)
{
for(j=1;j<=rows-i;j++)
{
cout<<" ";
}
for(p=0;p!=2*i-1;p++)
{
cout<<j<<" ";
}
cout<<"\n";
}

cout<<"\n";
cout<<"Pattern 5\n";
for(i=rows;i>=1;i--)
{
for(j=1;j<=rows-i;j++)
{
cout<<" ";
}
for(p=0;p!=2*i-1;p++)
{
cout<<j<<" ";
}
cout<<"\n";
}
break;

case 34:
char alpha='A';
cout<<"Enter any Upper Case charatcher \n";
cin>>ch;
for(i=1;i<=(ch-'A'+1);i++)
{
for(j=1;j<=i;j++)
{
cout<<alpha<<" ";
}
alpha++;
cout<<"\n";
}
break;

case 35:
cout<<"Myself Prajwal\nLearning C++\n#NOOB\nKthx\n";
break;

default:
cout<<"Invalid Input";
break;
}
cout<<"\n\n\nMade by PRAJWAL.S\n";
char K;
cout<<"Do you want to start again\nType K\n";
cin>>K;
if(K=='k' || K=='K')
goto start;
}
}
else
cout<<"Bot found Kek Bye\n";
getch();
}

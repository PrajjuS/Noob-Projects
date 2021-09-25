/**************************************************
 *        C++ Program Written By PRAJWAL.S        *
 * Found any bugs? Report to @PrajjuS in Telegram *
 **************************************************/

#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<math.h>

using namespace std;
int main()
{
    char human,again;
    cout<<"\nType Y or y to prove that you are Human: ";
    cin>>human;
    if (human=='Y' || human=='y')
    {
        start:
        cout<<"\n";
        cout<<" ---------------------------------- \n";
        cout<<"|            KONICHIWA             |\n";
        cout<<"| Welcome to PrajjuS's C++ Project |\n";
        cout<<" ---------------------------------- \n\n";
        cout<<"Program starting...\n";
        usleep(3*1000000);

        /******************** VARIABLES ********************/
        float A[100], x, y, z, big, small, ans=0, pd=1, prod=1, sum=0, area, r, l, b, h, d1, d2;
        int n, i, B[100], ans2, eod, j, p, rows, fact, flag, s1, s2, s3, p1, p2, p3, year, orig, rem, res, rev, f, f1, f2, ele, first, last, index, mid, pass=0, temp, t, a, b2, c, d, root1, root2, M[100][100], ro, cl, rsum, csum, M1[100][100], M2[100][100];
        string spam, pt;
        unsigned int slsec = 1000000;
        char ch, alpha = 'A';
        /***************************************************/

        /*************************** MENU *******************************/
        cout<<"\nA Very Useful Program Written in C++\n";
        cout<<"What you wanna do?\nType the Consecutive number\n";
        cout<<"============================================================\n";
        cout<<"                            MENU                            \n";
        cout<<"============================================================\n";
        usleep(1*slsec);
        cout<<" 1. Addition.\n";usleep(0.2*slsec);
        cout<<" 2. Subtraction.\n";usleep(0.2*slsec);
        cout<<" 3. Multiplication.\n";usleep(0.2*slsec);
        cout<<" 4. Division.\n";usleep(0.2*slsec);
        cout<<" 5. Remainder.\n";usleep(0.2*slsec);
        cout<<" 6. Area of Square.\n";usleep(0.2*slsec);
        cout<<" 7. Area of Rectangle.\n";usleep(0.2*slsec);
        cout<<" 8. Area of Triangle.\n";usleep(0.2*slsec);
        cout<<" 9. Area of Circle.\n";usleep(0.2*slsec);
        cout<<"10. Area of Rhombus.\n";usleep(0.2*slsec);
        cout<<"11. Area of Parallelogram.\n";usleep(0.2*slsec);
        cout<<"12. Find Even or Odd.\n";usleep(0.2*slsec);
        cout<<"13. Find Biggest, Smallest, Second Smallest and Second Biggest Numbers.\n";usleep(0.2*slsec);
        cout<<"14. Find type of Character.\n";usleep(0.2*slsec);
        cout<<"15. Leap Year Checker.\n";usleep(0.2*slsec);
        cout<<"16. Everything about Triangle.\n";usleep(0.2*slsec);
        cout<<"17. Generate numbers from 1 to n.\n";usleep(0.2*slsec);
        cout<<"18. Generate numbers from n to 1.\n";usleep(0.2*slsec);
        cout<<"19. Print anything n times (spam).\n";usleep(0.2*slsec);
        cout<<"20. Generate even numbers from 0 to n.\n";usleep(0.2*slsec);
        cout<<"21. Generate odd numbers from 1 to n.\n";usleep(0.2*slsec);
        cout<<"22. Generate the Sum of n numbers.\n";usleep(0.2*slsec);
        cout<<"23. Find the Factorial of a number.\n";usleep(0.2*slsec);
        cout<<"24. Check whether the Number is Prime or Not.\n";usleep(0.2*slsec);
        cout<<"25. Check whether the Number is Power of 2 or Not.\n";usleep(0.2*slsec);
        cout<<"26. Generate Tables of any Number\n";usleep(0.2*slsec);
        cout<<"27. Reverse any Number\n";usleep(0.2*slsec);
        cout<<"28. Check whether the Number is Palindrome or Not.\n";usleep(0.2*slsec);
        cout<<"29. Check whether the Number is Armstrong Number or Not.\n";usleep(0.2*slsec);
        cout<<"30. Generate Fibonacci Series.\n";usleep(0.2*slsec);
        cout<<"31. Generate Five types of Character or String Patterns.\n";usleep(0.2*slsec);
        cout<<"32. Generate Five Types of Number Patters.\n";usleep(0.2*slsec);
        cout<<"33. Generate Alphabet Pattern.\n";usleep(0.2*slsec);
        cout<<"34. Search any Element in given Set of Element.\n";usleep(0.2*slsec);
        cout<<"35. Sort Elements in Ascending order.\n";usleep(0.2*slsec);
        cout<<"36. Find the Roots of Quadratic Equation\n";usleep(0.2*slsec);
        cout<<"37. Print a Matrix with its Transpose.\n";usleep(0.2*slsec);
        cout<<"38. Find the Sum of Rows and Cloumns in Matrix.\n";usleep(0.2*slsec);
        cout<<"39. Find the Addition and Subtraction of Two Square Martices.\n";usleep(0.2*slsec);
        cout<<"40. About Me\n";usleep(0.2*slsec);
        cout<<"============================================================\n";usleep(1*slsec);
        /*****************************************************************/

        /**************************** BODY START *****************************/
        int choice;
        cout<<"KeK Now input your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the number of elements you want to add\n";
                cin>>n;
                cout<<"Enter "<<n<<" elements\n";
                for (i = 0; i < n; i++)
                {
                    cin>>A[i];
                }
                for (i = 0; i < n; i++)
                {
                    ans = ans + A[i];
                }
                cout<<"Sum = "<<ans<<"\n";
                break;

            case 2:
                cout<<"Enter the number of elements you want to subtract\n";
                cin>>n;
                cout<<"Enter "<<n<<" elements\n";
                for (i = 0; i < n; i++)
                {
                    cin>>A[i];
                }
                for (i = 0; i < n; i++)
                {
                    ans = A[i] - ans;
                }
                cout<<"Difference = "<<ans<<"\n";
                break;

            case 3:
                cout<<"Enter the number of elements you want to multiply\n";
                cin>>n;
                cout<<"Enter "<<n<<" elements\n";
                for (i = 0; i < n; i++)
                {
                    cin>>A[i];
                }
                for (i = 0; i < n; i++)
                {
                    pd = A[i] * pd;
                }
                cout<<"Product = "<<pd<<"\n";
                break;

            case 4:
                cout<<"Enter the number of elements you want to divide\n";
                cin>>n;
                cout<<"Enter "<<n<<" elements\n";
                for (i = 0; i < n; i++)
                {
                    cin>>A[i];
                }
                for (i = 0; i < n; i++)
                {
                    pd = A[i] / pd;
                }
                cout<<"Division = "<<pd<<"\n";
                break;

            case 5:
                cout<<"Enter the number of elements you want to find reminder\n";
                cin>>n;
                cout<<"Enter "<<n<<" elements\n";
                for (i = 0; i < n; i++)
                {
                    cin>>A[i];
                }
                for (i = 0; i < n; i++)
                {
                    ans2 = B[i] % ans2;
                }
                cout<<"Reminder = "<<pd<<"\n";
                break;

            case 6:
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
                cin>>eod;
                if (eod%2==0)
                {
                    cout<<"Even numbrr\n";
                }
                else
                cout<<"Odd number\n";
                break;

            case 13:
                cout<<"Enter the number of elements you want to use\n";
                cin>>n;
                cout<<"Enter the "<<n<<" elements\n";
                for (i = 0; i < n; i++)
                {
                    cin>>A[i];
                }
                big=A[0];
                for (i = 0; i < n; i++)
                {
                    if(big<A[i])
                    big=A[i];
                }
                small=A[0];
                for (i = 0; i < n; i++)
                {
                if(small>A[i])
                small=A[i];
                }
                for (i = 0; i < n; i++)
                {
                    for (j = i + 1; j < n; j++)
                    {
                        if (A[i]<A[j])
                        {
                            x=A[i];
                            A[i]=A[j];
                            A[j]=x;
                        }
                    }
                }
                cout<<"Biggest Number = "<<big<<"\n";
                cout<<"Second Largest Number = "<<A[1]<<"\n";
                cout<<"Smallest Number = "<<small<<"\n";
                cout<<"Second Smallest Number = "<<A[n - 2]<<"\n";
                break;

            case 14:
                cout<<"Enter any character\n";
                cin>>ch;
                if (ch>='a' && ch<='z')
                {
                    cout<<"Its lower case character\n";
                }
                if (ch>='A' && ch<='Z')
                {
                    cout<<"Its upper case character\n";
                }
                if (ch>='0' && ch<='9')
                {
                    cout<<"It is a digit\n";
                }
                else
                cout<<"It is special case character\n";
                break;

            case 15:
                cout<<"Enter any year in YYYY format\n";
                cin>>year;
                if (year%4==0 || year%100!=0 || year%400==0)
                {
                    cout<<"It is Leap Year\n";
                }
                else
                cout<<"It is not a Leap Year\n";
                break;

            case 16:
                cout<<"Enter the values of three sides of triangle\n";
                cin>>x>>y>>z;
                s1=x+y;
                s2=x+z;
                s3=y+z;
                if (x >= s1 || y >= s2 || z >= s3)
                {
                    cout<<"Triangle cannot be formed\n";
                }
                else
                if (x == y && x == z && y == z)
                {
                    cout<<"It is Equilateral Triangle\n";
                }
                if (x != y && x == z && y ==z || x == y && x != z && y == z || x == y && x == z && y != z)
                {
                    cout<<"It is Isoceles Triangle\n";
                }
                if (x != y && y != z && x != z)
                {
                    cout<<"It is Scalene Triangle\n";
                }
                p1=x*x+y*y;
                p2=x*x+z*z;
                p3=y*y+z*z;
                if (p1 == z*z || p2 == y*y || p3 == x*x)
                {
                    cout<<"It is Right Angled Triangle\n";
                }
                break;

            case 17:
                cout<<"Enter the nth number\n";
                cin>>n;
                cout<<"Numbers from 1 to "<<n<<" is\n";
                for (i = 1; i <= n; i++)
                {
                    cout<<i<<"\n";
                }
                break;

            case 18:
                cout<<"Enter the nth number\n";
                cin>>n;
                cout<<"Number from "<<n<<" to 1 is\n";
                for (i = n; i >= 1; i--)
                {
                    cout<<i<<"\n";
                }
                break;

            case 19:
                cout<<"Enter anything \n";
                cin>>spam;
                cout<<"Enter how many times you wanna spam\n";
                cin>>n;
                cout<<"Spamming.....\n";
                for (i = 1; i <= n; i++)
                {
                    cout<<spam<<"\n";
                    usleep(0.5*slsec);
                }
                break;

            case 20:
                cout<<"Enter the nth value\n";
                cin>>n;
                cout<<"Even numbers from 0 to "<<n<<" is\n";
                for (i = 0; i <= n; i+2)
                {
                    cout<<i<<"\n";
                }
                break;

            case 21:
                cout<<"Enter the nth value\n";
                cin>>n;
                cout<<"Odd numbers from 1 to "<<n<<" is\n";
                for (i = 0; i <= n; i++)
                {
                    cout<<i<<"\n";
                }
                break;

            case 22:
                cout<<"Enter the nth value\n";
                cin>>n;
                cout<<"Sum of first "<<n<<" numbers is\n";
                sum=0;
                for (i = 0; i <= n; i++)
                {
                sum=sum+i;
                }
                cout<<"Sum = "<<sum<<"\n";
                break;

            case 23:
                fact=1;
                cout<<"Enter any number to find its Factorial\n";
                cin>>n;
                cout<<"Factorial of the number "<<n<<" is\n";
                for (i = 1; i <= n; i++)
                {
                    fact=fact*i;
                }
                cout<<"Factorial = "<<fact<<"\n";
                break;

            case 24:
                flag=0;
                cout<<"Enter any Number\n";
                cin>>n;
                for (i = 2; i <= n/2; i++)
                {
                    if (n%i == 0)
                    {
                        flag=1;
                       break;
                    }
                }
                if (flag == 0)
                {
                    cout<<"The Number "<<n<<" is Prime\n";
                }
                else
                cout<<"The Number "<<n<<" is Not a Prime\n";
                break;

            case 25:
                cout<<"Enter any number\n";
                cin>>n;
                flag=0;for (i = 1; n > 2; n = n/2)
                {
                    if (n%2 == 1)
                    {
                        flag=1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    cout<<"The Number "<<n<<" is Power of 2\n";
                }
                else
                cout<<"The Number "<<n<<" is Not a Power of 2\n";
                break;

            case 26:
                cout<<"Enter any Number\n";
                cin>>n;
                cout<<"Table for the number "<<n<<" is \n";
                for (i = 1; i <= 10; i++)
                {
                    prod=n*i;
                    cout<<n<<" x "<<i<<" = "<<prod<<"\n";
                }
                break;

            case 27:
                cout<<"Enter any +ve Integer\n";
                cin>>n;
                if (n > 0)
                {
                    orig=n;
                    for (rev=0;n>0;n/=10)
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

            case 28:
                cout<<"Enter any +ve Integer\n";
                cin>>n;
                if (n > 0)
                {
                    orig=n;
                    for (rev = 0; n > 0; n/=10)
                    {
                        rem=n%10;
                        rev=rev*10+rem;
                    }
                    cout<<"Given Number = "<<orig<<"\n";
                    cout<<"Reversed Number = "<<rev<<"\n";
                    if (orig == rev)
                    {
                    cout<<"The Number "<<orig<<" is Palindrome\n";
                    }
                    else
                    cout<<"The Number "<<orig<<" is Not a Palindrome\n";
                }
                else
                cout<<"BRUH Enter +ve Integer Kthx bye.\n";
                break;

            case 29:
                cout<<"Enter any +ve Integer\n";
                cin>>n;
                if (n > 0)
                {
                    orig=n;
                    for(res=0;n>0;n/=10)
                    {
                        rem=n%10;
                        res=res+rem*rem*rem;
                    }
                    cout<<"Result = "<<res<<"\n";
                    if (res == orig)
                    {
                    cout<<"The Number "<<orig<<" is Armstrong Number\n";
                    }
                    else
                    cout<<"The Number "<<orig<<" is Not a Armstrong Number\n";
                }
                else
                cout<<"BRUH, Enter +ve Integer\n";
                break;

            case 30:
                cout<<"Enter any +ve Number\n";
                cin>>n;
                if (n > 0)
                {
                    f1=-1;
                    cout<<"Fibonacci Series of the number "<<n<<"is..\n";
                    for (f2 = 1; n>0; n--)
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

            case 31:
                cout<<"Enter the string you want to print as pattern\n";
                cin>>pt;
                cout<<"Enter the number of rows\n";
                cin>>rows;
                cout<<"Pattern 1\n";
                for (i = 1; i <= rows; i++)
                {
                    for (j = 1;j <= rows; j++)
                    {
                        cout<<pt<<" ";
                    }
                    cout<<"\n";
                }

                cout<<"\nPattern 2\n";
                for (i = 1; i <= rows; i++)
                {
                    for (j = 1; j <= i; j++)
                    {
                        cout<<pt<<" ";
                    }
                    cout<<"\n";
                }

                cout<<"\nPattern 3\n";
                for (i = rows; i >= 1; i--)
                {
                    for (j = 1; j <= i; j++)
                    {
                        cout<<pt<<" ";
                    }
                    cout<<"\n";
                }

                cout<<"\nPattern 4\n";
                for (i = 1; i <= rows; i++)
                {
                    for (j = 1; j <= rows-i; j++)
                    {
                        cout<<" ";
                    }
                    for (p = 0; p != 2*i-1; p++)
                    {
                        cout<<pt<<" ";
                    }
                    cout<<"\n";
                }

                cout<<"\nPattern 5\n";
                for (i = rows; i >= 1; i--)
                {
                    for (j = 1; j <= rows-i; j++)
                    {
                        cout<<" ";
                    }
                    for (p = 0; p !=2*i-1; p++)
                    {
                        cout<<pt<<" ";
                    }
                    cout<<"\n";
                }
                break;

            case 32:
                cout<<"Number Patterns\n";
                cout<<"Enter the number of rows\n";
                cin>>rows;
                cout<<"\nPattern 1\n";
                for (i = 1; i <= rows; i++)
                {
                    for (j = 1; j <= rows; j++)
                    {
                        cout<<j<<" ";
                    }
                cout<<"\n";
                }

                cout<<"\nPattern 2\n";
                for (i = 1; i <= rows; i++)
                {
                    for(j = 1; j<= i; j++)
                    {
                        cout<<j<<" ";
                    }
                    cout<<"\n";
                }

                cout<<"\nPattern 3\n";
                for (i = rows; i >= 1; i--)
                {
                    for (j = 1; j <= i; j++)
                    {
                        cout<<j<<" ";
                    }
                    cout<<"\n";
                }

                cout<<"\nPattern 4\n";
                for (i = 1; i <= rows; i++)
                {
                    for (j = 1; j <= rows-i; j++)
                    {
                        cout<<" ";
                    }
                    for (p = 0; p != 2*i-1; p++)
                    {
                        cout<<j<<" ";
                    }
                cout<<"\n";
                }

                cout<<"\nPattern 5\n";
                for (i = rows; i >= 1; i--)
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

            case 33:
                cout<<"Enter any Upper Case charatcher \n";
                cin>>ch;
                for (i = 1; i <= (ch-'A'+1); i++)
                {
                    for(j=1;j<=i;j++)
                    {
                        cout<<alpha<<" ";
                    }
                    alpha++;
                cout<<"\n";
                }
                break;

            case 34:
                cout<<"Enter the numebr of elements u want to use\n";
                cin>>n;
                cout<<"Enter "<<n<<" elements in ascending order only (else u will get element not found)\n";
                for (i = 0; i < n; i++)
                {
                    cin>>A[i];
                }
                first=0;
                last=n-1;
                mid=(first+last)/2;
                cout<<"Enter the element to search\n";
                cin>>ele;
                while (first<=last)
                {
                    if (A[mid] < ele)
                    {
                        first=mid+1;
                    }
                    else if(A[mid] == ele)
                    {
                        cout<<"The element "<<ele<<" found at position "<<mid+1<<"\n";
                        break;
                    }
                    else
                    {
                        last=mid-1;
                        mid=(first+last)/2;
                    }
                }
                if (first > last)
                {
                    cout<<"The element "<<ele<<" is not found\n";
                }
                break;

            case 35:
                cout<<"Enter the number of elements you want to use\n";
                cin>>n;
                cout<<"Enter the "<<n<<" elements\n";
                for (i = 0; i < n; i++)
                {
                    cin>>A[i];
                }
                cout<<"Elements before sorting\n";
                for (i = 0; i < n; i++)
                {
                    cout<<A[i]<<"\n";
                }
                for (i = 0; i < n; i++)
                {
                    for (j = i+1; j < n; j++)
                    {
                        if (A[j] < A[i])
                        {
                            temp=A[i];
                            A[i]=A[j];
                            A[j]=temp;
                        }
                    }
                }
                pass ++;
                cout<<"Elements after sorting\n";
                for (i = 0; i < n; i++)
                {
                    cout<<A[i]<<"\n";
                }
                cout<<"Number of Passes = "<<pass<<"\n";
                break;

            case 36:
                cout<<"Enter the coefficients of the quadratic equation a, b and c\n";
                cout<<"a: ";cin>>a;
                cout<<"b: ";cin>>b2;
                cout<<"c: ";cin>>c;
                cout<<"The entered equation is: "<<a<<"x2 + ("<<b2<<")x + ("<<c<<")\n";
                if (a == 0)
                {
                    cout<<"Value of a cannot be 0\n";
                }
                else
                {
                    d=b2*b2-4*a*c;
                    if (d > 0)
                    {
                        root1=(-b2+sqrt(d))/(2*a);
                        root2=(-b2-sqrt(d))/(2*a);
                        cout<<"There exist Real and Unequal Roots because the Determinant is "<<d<<"\n";
                        cout<<"The Roots are "<<root1<<" and "<<root2<<"\n";
                    }
                    else if (d == 0)
                    {
                        root1=root2;
                        root1=(-b+sqrt(d))/(2*a);
                        cout<<"There exists Equal and Real Roots because the Determinant is "<<d<<"\n";
                        cout<<"The Roots are "<<root1<<" and "<<root2<<"\n";
                    }
                    else
                    {
                        cout<<"There exists Complex and Imaginary Roots because the Determinant is "<<d<<"\n";
                    }
                }
                break;

            case 37:
                cout<<"Enter the order of matrix\n";
                cout<<"Rows: ";cin>>ro;
                cout<<"Columns: ";cin>>cl;
                cout<<"Enter the Elements\n";
                for (i = 0; i < ro; i++)
                {
                    for (j = 0; j < cl; j++)
                    {
                        cin>>M[i][j];
                    }
                }
                cout<<"The Matrix is\n";
                for (i = 0; i < ro; i++)
                {
                    for (j = 0; j < cl; j++)
                    {
                        cout<<M[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
                cout<<"The Transpose of Matrix is\n";
                for (i = 0; i < ro; i++)
                {
                    for (j = 0; j < cl; j++)
                    {
                        cout<<M[j][i]<<"\t";
                    }
                    cout<<"\n";
                }
                break;

            case 38:
                cout<<"Enter the order of matrix\n";
                cout<<"Rows: ";cin>>ro;
                cout<<"Columns: ";cin>>cl;
                cout<<"Enter the elements of matrix\n";
                for (i = 0; i < ro; i++)
                {
                    for (j = 0; j < cl; j++)
                    {
                        cin>>M[i][j];
                    }
                }
                for (i = 0; i < ro; i++)
                {
                    rsum=0;
                    for (j = 0; j < ro; j++)
                    {
                        rsum=rsum+M[i][j];
                        cout<<"Sum of Rows of Martix = "<<rsum<<"\n";
                    }
                }
                for (i = 0; i < cl; i++)
                {
                    csum=0;
                    for (j = 0; j < cl; j++)
                    {
                        csum=csum+M[i][j];
                        cout<<"Sum of Colums of Matrix = "<<csum<<"\n";
                    }
                }
                break;

            case 39:
                cout<<"Enter the order of Square Matrices\n";
                cin>>n;
                cout<<"Enter the elements of Matrix A\n";
                for (i = 0; i < n; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        cin>>M1[i][j];
                    }
                }
                cout<<"Enter the elements of Matrix B\n";
                for (i = 0; i < n; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        cin>>M2[i][j];
                    }
                }
                cout<<"Matrix A\n";
                for (i = 0; i < n; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        cout<<M1[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
                cout<<"Matrix B\n";
                for (i = 0; i < n; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        cout<<M2[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
                cout<<"Addition of Square Matrices A and B is\n";
                for (i = 0; i < n; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        cout<<M1[i][j]+M2[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
                cout<<"Subtraction of Square Matrices A and B is\n";
                for (i = 0; i < n; i++)
                {
                    for (j = 0; j < n; j++)
                    {
                        cout<<M1[i][j]-M2[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
                break;

            case 40:
                cout<<"\nMyself PRAJWAL.S\n";
                cout<<"Noob Learning C++\nMade a Simple and Very Useful C++ Program\n";
                cout<<"Telegram: @PrajjuS\nGithub: https://github.com/PrajjuS\n";
                break;

            default:
            cout<<"Invalid Input";
            break;
        }
        /************************** BODY END ******************************/
        cout<<"\nMore features will be added soon\nThank you\nMade by Prajwal.S\n\n";
        cout<<"Do you want to start again?(Y/N): ";
        wrong:
        cin.clear ();
        cin.ignore ( 100 , '\n' );
        cin>>again;
        if (again=='y' || again=='Y')
        {
            goto start;
        }
        else if (again=='n' || again=='N')
        {
            cout<<"Kthnx bye\nProgram Exiting...\n";
            usleep(3*slsec);
            exit;
        }
        else
        {
            cout<<"Invalid Input Enter Again(Y/N): ";
            goto wrong;
        }
        return 0;
    }
    else
    cout<<"\nKek Bot Found\nGTFO\n";
    cout<<"Program Exiting...\n";
    usleep(3*1000000);
    exit;
    return 0;
}
/******************************************* THE END ******************************************/

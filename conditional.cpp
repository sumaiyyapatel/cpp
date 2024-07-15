// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     long factorial = 1.0;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     for (int i = 1; i <= n; ++i)
//     {
//         factorial *= i;
//     }
//     cout << "Factorial of " << n << " = " << factorial;

//     return 0;
// }
// ______________________________________________________________________________________________________________________________________
// //WAP to calculate table of a number

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 1; i <= 10; i++)
//     {
//             cout<< n<<"*"<<i<<"=" <<i*n<<"\n";
//     }

//     return 0;
// }
// ______________________________________________________________________________________________________________________________________
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x,y,p;

//     cout << "Enter x and y: ";
//     cin >>x>> y;
//     p=16;
//     for (int i = 1; i <= y; ++i)
//     {
//         p=p*x;
//     }
//     cout << "x^y= " << p ;

//     return 0;
// }
// ______________________________________________________________________________________________________________________________________
// #include <iostream>
// using namespace std;

// int main() {
//     int n, i;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     cout << "Factors of " << n << " are: ";  
//     for(i = 1; i <= n; ++i) {
//         if(n % i == 0)
//             cout << i << " ";
//     }

//     return 0;
// }
// ______________________________________________________________________________________________________________________________________
#include<iostream>
using namespace std;
int main ()
{  
    int i, num, div, sum=0;
    cout << "Enter the number : ";
    cin >> num;
    for (i=1; i < num; i++)
    {
        div = num % i;
        if (div == 0)
            sum = sum + i;
    }
    if (sum == num)
        cout << "\n" << num <<" is a perfect number.";
    else
        cout << "\n" << num <<" is not a perfect number.";
    return 0;
}
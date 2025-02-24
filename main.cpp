//Problem1A
// #include<iostream>
// using namespace std;
// int main () {
//     int a=1, sum;
//     for (int i=1; i<=100; ++i)
//         sum+=i;
//     cout<<"The sum of the values till 100: "<<sum<<endl;
//     return 0;
// }

//Problem1B
// #include<iostream>
// using namespace std;
// int main () {
//     int a, sum=0, i=1;
//     cout<<"Enter positive integer: ";
//     cin>>a;
//     if (a<=0) {
//         cout<<"Please, enter a positive integer: ";
//         return 1;
//     }
//     while (i<=a) {
//         sum+=i;
//         i++;
//     }
//         cout<<"The sum of  "<<a<<" natural numbers is "<<sum<<endl;
//     return 0;
// }

//Problem 2
// #include<iostream>
// using namespace std;
// bool isPrime(int num) {
//     if (num <= 1) return false;
//     for (int i = 2; i <= num / 2; ++i) {
//         if (num % i == 0) {
//             return false;  // Not prime
//         }
//     }
//     return true;  // Is prime
// }
// int main() {
//     int count = 0;  // Counter for prime numbers
//     int num = 2;    // Start checking from the first prime number
//     cout << "First 10 prime numbers are:" << endl;
//     // Loop until we find 10 prime numbers
//     for (int i = 1; count < 10; ++i) {
//         if (isPrime(num)) {
//             cout << num << " ";
//             count++;
//         }
//         num++;
//     }
//     cout << endl;
//     return 0;
// }

//ProblemB
// #include<iostream>
// using namespace std;
// bool isPrime(int num) {
//     if (num<=1) return false;
//     for (int i=2; i<=num/2; ++i) {
//         if (i<=num%i==0) {
//             return false;
//         }
//     }
//     return true;
// }
//
// int main () {
//     int num=2, count=0,n;
//     cout<<"Enter numbers to display:  ";
//     cin>>n;
//     cout<<"The first "<<n<<" prime numbers are "<<endl;
//     while (count<n) {
//         if (isPrime(num)) {
//             cout<<num<<""<<endl;
//             count++;
//         }
//         num++;
//     }
//     cout<<endl;
//     return 0;
// }

//Problem 3

//Problem 4
// #include<iostream>
// using namespace std;
// int main () {
//     int number, digit_count=0;
//     cout<<"Enter a positive number: ";
//     cin>>number;
//     if (number<=0) {
//         cout<<"Pls, enter a positive number: ";
//         return 1;
//     }
//     while (number !=0) {
//         number/=10;
//         digit_count++;
//     }
//     cout<<"The number of digits in number is "<<digit_count<<endl;
//     return 0;
// }

//Problem5
// #include<iostream>
// using namespace std;
// int main () {
//     int number, digit;
//     cout<<"Enter a number: ";
//     cin>>number;
//     if (number<=0) {
//         cout<<"Pls enter a positive integer: ";
//         return 1;
//     }
//     cout<<"The numbers from right to left is : ";
//     while ( number>0) {
//         digit=number%10;
//         cout<<digit<<endl;
//         number/=10;
//     }
//     cout<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace  std;
// int main () {
//     int secret_number=9;
//     int guess_limit=5;
//     int guess_count=0;
//     int guess;
//     while (guess_count<guess_limit) {
//         cout<<"Guess: ";
//         cin>>guess;
//         guess_count++;
//
//         if (guess==secret_number) {
//             cout<<"You won!"<<endl ;
//             break;
//         }
//     }
//     if (guess_count==guess_limit && guess_count!=secret_number){
//         cout<<"You failed"<<endl;
// }
//     return 0;
// }

//guess the number
// #include<iostream>
// #include<cstdlib>
// #include<ctime>
// using namespace std;
// int main () {
//     int number=267;
//     int guess, attempts=0;
//     cout<<"Guess the number between 1 and 1000! "<<endl;
//
//     while (true) {
//         cout<<"Guess: ";
//         cin>>guess;
//         attempts++;
//         if (guess==number) {
//             cout<<"You won";
//             break;
//         }else if (guess>number) {
//             cout<<"Too high";
//         }else {
//             cout<<"Too low";
//         }
//         if (attempts%5==0) {
//             if (number%2==0) {
//                 cout<<"The number is even";
//             }else if (number%5==0) {
//                 cout<<"The number is a multiple of 5";
//             }else{
//                 cout<<"The number is not a multiple of 2 or 5";
//             }
//         }
//     }
//     return 0;
// }

//Problem7
// #include<iostream>
// using namespace std;
// int main() {
//     int number, total_sum=0,number_entered=0;
//     while (total_sum<100) {
//         cout<<"Enter a number: ";
//         cin>>number;
//         total_sum+=number;
//         number_entered++;
//         if (total_sum>100) {
//             break;
//         }
//     }
//     cout<<"The total sum is "<<total_sum<<"\n The count of numbers entered: "<<number_entered<<endl;
//     return 0;
// }

//Problem3
// #include<iostream>
// using namespace std;
// int main () {
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     while (number!=1) {
//         cout<<number<<""<<endl;
//         if (number%2==0) {
//             number/=2;
//         }else if (number%2==1) {
//             number=(3*number)+1;
//             if (number==1) {
//                 break;
//             }
//         }
//     }
//     cout<<"1"<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main() {
    int number=400;
    int guess, attempts=0;
    cout<<"Enter numbers from 1 50 1000 to guess the number!";
    while (true) {
        cout<<"Guess:";
        cin>>guess;
        attempts++;
        if (number==guess) {
            cout<<"Congrats, it is orrect!";
            break;
        }else if (number>guess) {
            cout<<"Too low";
        }else if (number<guess) {
            cout<<"Too high";
        }
        if (attempts%5==0) {
            if (number%2==0) {
                cout<<"Hint: It is an even number";
            }else if (number%5==0) {
                cout<<"Hint:It is a multiple of 5";
            }else {
                cout<<"The number is not multiple of 2 or 5";
            }
        }
    }
    return 0;
}
//





































































































































































































































































































































































































































































































































































#include<bits/stdc++.h>
using namespace std;
//int main(){
    /*integer is assigned as int
    int x = 5, y = 8;
    a long datatype assigned as long
    long z = 18;
    a huge number can be store using the command long long
    long long a = 1900000;
    for decimal values we will use float or double
    float v = 5.6;
    float m = 7.5;
    double can be used for both integer and decimal
    also long double
    double t = 4.75;
    double k = 89;
    long double r = 76.002;
    cout<< r <<endl;
    string and getline
    string s;
    cout <<" Type your fullname: ";
    getline(cin, s);
    character is being represented as char
    char hero = 'h';
    cout << hero;
    int, long, long long, float, double, long double
    string, getline
    char
    if, else statement
    int age = 12;
    if(age >= 18){
    cout<<"You are an adult";
    }
    else if(age < 18){
    cout<<"You are not an adult";
    }
    int marks = 56;
    if(marks < 25){
        cout<<"F";
    }
    else if(marks <= 44){
        cout<<"E";
    }
     else if (marks <= 49){
        cout<<"D";
    }
    else if (marks <= 59){
        cout<<"C";
    }
    else if (marks <= 79){
        cout<<"B";
    }
    else if (marks <= 100){
        cout<<"A";
    }
    /*int age = 56;
    if(age < 18){
        cout<<"not eligible for job";
    }
    else if(age <= 57){
        cout<<"eligible for job";
        if(age >= 55){
        cout<<", but retirement soon";
        }
    }
    else {
        cout<<"retirement time";
    }
    int day = 19;
    switch (day){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break; 
        case 3:
        cout<<"Wednesday";
        break; 
        case 4:
        cout<<"Thursday";
        break; 
        case 5:
        cout<<"Friday";
        break; 
        case 6:
        cout<<"Saturday";
        break; 
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Invalid";  
    }
    cout<<" Check";
    double arr[5] = {15, 26.7, 34.6, 63, 21.9};
    arr[4] = 18;
    cout<< arr[4];
    //2D array
    int arr[3][5] = {56, 76, 89, 90, 43};
    arr[1][3] = 78;
    cout << arr[1][2];
    string s = "Rohan";
    int len = s.size();
    s[len - 1] = 'z';
    cout<<s[len - 1];

    //for loop
    int i;
   for(i = 1; i<= 25; i = i + 5){
     cout << i << endl;
   }

   //while loop

   int i = 1;
   while(i<=5){
    cout<< "Rohan" << i <<endl;
    i = i + 1;
   }
   int i = 2;
   do
   {
    cout << "Rohan" << i <<endl;
    i = i+1;
   } while (i <= 1);
   cout<<i<<endl;*/
   /*void printName(string name){
    cout<<" Hey "<< name <<endl;
}*/
   /*string name = "Kunal";
   printName(name);
   string name2 = "Rohan";
   printName(name2);*/
/*void sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}*/
   //int main(){
   /*nt num1 = 23;
   int num2 = 56;
   sum(num1, num2);*/
   //int num1 = 23;
   //int num2 = 34;
   //int maximum = max(num1, num2);
   //cout<< maximum;
   //pass by reference
/*void dosomething(int num){;
cout<< num <<endl;
num +=5;
cout<< num <<endl;
num +=5;
cout<< num <<endl;
}
int main(){
int num = 10;
dosomething(num);
cout<< num << endl;*/
void dosomething(int arr[], int n){
arr[0] += 100;
cout<< "Value inside function: " << arr[0] <<endl;
}
int main(){
    int n = 5;
int arr[n] = {4, 5, 8, 9, 6};
for (int i = 0; i <n; i = i + 1){
}
dosomething(arr, n);
cout<< "Value inside int main: "<<arr[0]<<endl; 
//cout<< arr[1] <<endl << arr[2] <<endl << arr[3] <<endl;

return 0;
}
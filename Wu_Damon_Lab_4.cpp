// Damon Wu 
// 10/1/2024
// Lab 3 

#include<iostream>
#include<string>

using namespace std;

int main() {
 

// variables used 
    string fruit;
    char request;
    double sugar;
    bool loop = true;

    while(loop == true){
        cout << "Name a fruit and its sugar content in one cup.\n";
        cin >> fruit;
        cin >> sugar;

        if(sugar < 10)                                 // if the sugar content per cup is below 10, print its name out and label it as a low sugar
        {
            cout << fruit << " Low sugar fruit \n";
        }
        else if (sugar >= 10 && sugar <= 14)           // if the sugar content is between 10 and 14, print its name out and label it as medium sugar 
        {
            cout << fruit << " Medium sugar fruit \n";
        }
        else 
            cout << fruit << " High sugar fruit \n"; // if both settings dont fit, print the name out and label it as a high sugar fruit. 

        cout << "Do you want to stop? Type 'Y' if you wish to stop \n";     // asks the user if thhey want to stop 
        cin >> request;             // takes input from user if they want to stop 

        if (request == 'Y')         // if input is = "Y", kill the loop and say goodbye. 
    {
        loop = false;
        cout << "goodbye";
    }
    }
    return 0;

    /*
    Name a fruit and its sugar content in one cup.
    avocada 1 
    avocada Low sugar fruit
    Do you want to stop? Type 'Y' if you wish to stop 
    n
    Name a fruit and its sugar content in one cup.
    strawberries 7 
    strawberries Low sugar fruit
    Do you want to stop? Type 'Y' if you wish to stop 
    n
    Name a fruit and its sugar content in one cup.
    orange 14 
    orange Medium sugar fruit
    Do you want to stop? Type 'Y' if you wish to stop 
    Y 
    goodbye
    */
}
// Damon Wu 
// 10/1/2024
// Lab 3 

#include<iostream>
#include<string>

using namespace std;

int main() {
 

// variables used 
    string fruit;
    double sugar;
    bool loop = true;

    while(loop = true){
        cout << " Name a fruit and its sugar content in one cup. To stop determining, type 'stop'. \n";
        cin >> fruit;
        cin >> sugar;

        if (fruit == "stop")
        {
            loop = false;
            cout << "bye bye!" "\n";
        }
        if(sugar < 10)                                 // if the sugar content per cup is below 10, print its name out and label it as a low sugar
        {
            cout << fruit << " Low sugar fruit \n";
        }
        else if (sugar >= 10 && sugar <= 14)           // if the sugar content is between 10 and 14, print its name out and label it as medium sugar 
        {
            cout << fruit << " Medium sugar fruit \n";
        }
        else 
            cout << fruit << "High sugar fruit \n"; // if both settings dont fit, print the name out and label it as a high sugar fruit. 

    }
    return 0;

}
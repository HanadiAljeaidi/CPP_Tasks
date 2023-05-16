/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/


#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


int main() {
    string line;
    string name;
    int age;
    string address;
    string phone_Number;


    ifstream inputFile("Str_User_Input.txt");

    while(!inputFile.eof()){
        // getline(inputFile, line);
        inputFile >> name >> age;
        cout<<name<<"is"<<age<<"years old \n";
    }
    inputFile.close();


}







// 2343 South View Road
//          (408)435-3221


// 1123 Pebble Creek Road
//          (408)546-5432













// int main() {
    
//     string line;
//     string name;
//     string address;
//     string phone_number;
    
//     ifstream inputFile("Str_User_Input.txt");
  
//     // cout<<"Enter your name, address, and phone number";
//     if(getline(inputFile, line)){
//         istringstream iss(line);

//         if(iss >> name >> address >> phone_number){

//             cout<<name<<"\t\t"<<address<<"\t\t"<<phone_number<<"\n";
//         } else {
//             std::cerr << "Failed to read the required number of values from the input file." << std::endl;
//             return 1;
//         }
//     } else {
//         std::cerr << "Failed to read a line from the input file." << std::endl;
//         return 1;
//         // getline(cin, name);
//         // getline(cin, address);
//         // getline(cin, phone_number);
        
//     }
    
    
// }


// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>

// int main() {
//     std::ifstream inputFile("input.txt"); // Replace "input.txt" with your file path

//     // if (!inputFile) {
//     //     std::cerr << "Failed to open the input file." << std::endl;
//     //     return 1;
//     // }

//     std::string line;
//     if (std::getline(inputFile, line)) {
//         std::istringstream iss(line);
//         int num1, num2, num3;

//         if (iss >> num1 >> num2 >> num3) {
//             // Perform operations using the read values
//             int sum = num1 + num2 + num3;
//             int product = num1 * num2 * num3;

//             // Print the results
//             std::cout << "Sum: " << sum << std::endl;
//             std::cout << "Product: " << product << std::endl;
//         } else {
//             std::cerr << "Failed to read the required number of values from the input file." << std::endl;
//             return 1;
//         }
//     } else {
//         std::cerr << "Failed to read a line from the input file." << std::endl;
//         return 1;
//     }

//     inputFile.close(); // Close the input file

//     return 0;
// }

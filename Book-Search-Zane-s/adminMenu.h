#pragma once
#include <string>
#include <fstream>

//Still trying to attempt to add this admin menu to the beginning.


//allows admin to add a new user. Basically like the registration form in the first menu. 
void adminAddUser() 
{
    string adminNewUsername;
    string adminNewPassword;

    std::cout << "ADMIN USER CREATION" << endl;
    std::cout << "Enter a new username: ";
    saferCin(adminNewUsername);
    std::cout << "Enter a new password: ";
    saferCin(adminNewPassword);

    ofstream registerFile;
    registerFile.open("login.csv", ios::app); // 'ios::app' is appended mode. Which writes data into a file with already existing data.
    registerFile << adminNewUsername << "," << adminNewPassword;
    registerFile << endl;
    registerFile.close();
}
// Allows admin to find the user, enter their current password and replace it with a new one. 
void adminChangePassword() 
{
    //NOT DONE YET.
    string username;
    string oldPassword;
    string newPassword;

    cout << "ADMIN PASSWORD CHANGER" << endl;
    cout << "Enter the username: " << endl;
    cout << "Enter the user's current password: " << endl;
    cout << "Enter the new password: " << endl;
    cout << "Password has been changed!" << endl;
}
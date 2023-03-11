
#include <iostream>
#include <string>



//int user_input();
//
//
//
//int main()
//{
//    /* code */
//    user_input();
//    return 0;
//}


/**
* some user input in c++
*/
int user_input(){

    // cout << (insertion operator)
    // cin >> (extraction operator)
    std::string name;
    int age;

    std::cout << "what is your name? ";
    //std::cin >> name;
    std::getline(std::cin, name);

    std::cout << "what is your are? ";
    std::cin >> age;

    std::cout << "hello " << name << ". You are " << age << " years old." << std::endl;

    return 0;
}






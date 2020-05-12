#include "stuff.hpp"
class WrongChoice : std::exception {};
uint64 menuStudent();
uint64 menuTeacher();
int main(int argc, const char * argv[]) {
    uint64 choice = 0;
    bool marker = 1;
    while(marker){
        std::cout << "1 - To work as a teacher.\n";
        std::cout << "2 - To work as a student.\n";
        std::cout << "0 - To exit.\n";
        std::cin >> choice;
        bool marker2 = 1;
        switch (choice) {
            case 1:
                while(marker2){
                    switch (menuTeacher()) {
                        case 1:
                            //zxc
                            break;
                        case 2:
                            //zxc
                            break;
                        case 3:
                            //zxc
                            break;
                        case 4:
                            //zxc
                            break;
                        case 5:
                            //zxc
                            break;
                        case 6:
                            //zxc
                            break;
                        case 7:
                            //zxc
                            break;
                        case 8:
                            //zxc
                            break;
                        case 0:
                            marker2 = 0;
                            break;
                        default:
                            break;
                    }
                }
                marker2 = 1;
                break;
            case 2:
                while(marker2){
                    switch (menuStudent()) {
                        case 1:
                            //zxc
                            break;
                        case 2:
                            //zxc
                            break;
                        case 3:
                            //zxc
                            break;
                        case 4:
                            //zxc
                            break;
                        case 5:
                            //zxc
                            break;
                        case 6:
                            //zxc
                            break;
                        case 7:
                            //zxc
                            break;
                        case 8:
                            //zxc
                            break;
                        case 0:
                            marker2 = 0;
                            break;
                        default:
                            break;
                    }
                }
                marker2 = 1;
                break;
            case 0:
                marker = 0;
            default:
                break;
        }
    }
    return 0;
}


uint64 menuStudent(){
    uint64 choice = 0;
    std::cout << "1 - Read all data about student.\n";
    std::cout << "2 - Write all data about student.\n";
    std::cout << "3 - Create a new student.\n";
    std::cout << "4 - Set to certain student Name.\n";
    std::cout << "5 - Set to certain student Surname.\n";
    std::cout << "6 - Set to certain student Group.\n";
    std::cout << "7 - Set to certain student Speciality.\n";
    std::cout << "8 - Set to certain student a list of Subjects.\n";
    std::cout << "0 - To exit from this menu\n\n\n";
    bool marker = 1;
    while(marker){
        try{
            std::cin >> choice;
            if(choice < 0 or choice > 9)throw WrongChoice();
            else{ marker = 0; return choice;}
        }
        catch(WrongChoice){
            std::cerr << "Reenter your choice: ";
        }
    }
    return choice;
}

uint64 menuTeacher(){
    uint64 choice = 0;
    std::cout << "1 - Read all data about teacher.\n";
    std::cout << "2 - Write all data about teacher.\n";
    std::cout << "3 - Create a new teacher.\n";
    std::cout << "4 - Set to certain teacher Name.\n";
    std::cout << "5 - Set to certain teacher Patronymic.\n";
    std::cout << "6 - Set to certain teacher Surname.\n";
    std::cout << "7 - Set to certain teacher Subject.\n";
    std::cout << "8 - Set to certain student a list of Specialities.\n";
    std::cout << "0 - To exit from this menu\n\n\n";
    bool marker = 1;
    while(marker){
        try{
            std::cin >> choice;
            if(choice < 0 or choice > 9)throw WrongChoice();
            else{ marker = 0; return choice;}
        }
        catch(WrongChoice){
            std::cerr << "Reenter your choice: ";
        }
    }
    return choice;
}

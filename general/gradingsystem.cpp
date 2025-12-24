#include <iostream>
#include <string>
#include <vector>

int main() {
    int no_of_students;
    std::cout<<"Enter the number of students you have:";
    std::cin>>no_of_students;
    std::vector<std::string> names(no_of_students);
    std::vector<int> grade(no_of_students);
    for (int i = 0; i<no_of_students; ++i){
        std::cout<<"Enter name of student:";
        std::cin>>names[i];
        std::cout<<"\nEnter percent grade of student:";
        std::cin>>grade[i];
    }
    for (int i = 0; i<no_of_students; ++i) {
        std::cout<<"\nThe student "<<names[i]<<" got a "<<grade[i]<<std::endl;
        if (grade[i]<60) {
            std::cout<<"Fail";
        } else if (grade[i]<70){
            std::cout<<"D";
        } else if (grade[i]<80){
            std::cout<<"C";
        } else if (grade[i]<90){
            std::cout<<"B";
        } else {
            std::cout<<"A!";
        }
    }
    return 0;
    }
#include <iostream>
using std::string;

class AbstractEnployee{
    virtual void AskForPromotion()= 0;

};


class Employee: AbstractEnployee{
private:
    string Name;
    string Company;
    int Age;

public:  
    void IntroduceYourself(){
        std::cout <<"Name - "<< Name << std::endl;
        std::cout <<"Company - "<< Company << std::endl;
        std::cout <<"Age - "<< Age << std::endl;

    }

    void AskForPromotion(){
        if (Age > 30){
            std::cout<<Name<< " is promoted"<<std::endl;

        }else{
            std::cout<<Name<< " is  not promoted"<<std::endl;
        }
    }
    void setName(string name){
        Name = name;

    }

    string getName(){
        return Name;

    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

};

class Developer: Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage): Employee(name,company,age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    };
}

int main(){
    Employee employee1("Aruj","Read-ink" , 25);
    employee1.IntroduceYourself();
    employee1.AskForPromotion();
    Developer d = Developer("Salena", "Youtube", 26,"C++");


}

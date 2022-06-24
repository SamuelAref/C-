#include <iostream>
#include <vector>
#include <time.h> //for random numbers

//using namespace std;

//function declaration

class AbstractEmployee{ //abstract

    virtual void AskForPromotion() = 0; //we make this function as virual to make it obligatory or to force the class to run this function
      
};


class Employees:AbstractEmployee{//class Employee signs the abstract contract (inherits)
    
    private:

        std::string name;
        std::string company;
        int age;

    public:
         
         
        //Getters and Setters
            std::string GetName(){

                return name;
            }

            std::string SetName(std::string SetName){

                    name = SetName;
                    return name;
            }

            std::string GetCompany(){

                return company;
            }

            std::string SetCompany(std::string SetCompany){

                    company = SetCompany;
                    return SetCompany;
            }

            int GetAge(){

                return age;
            }

            int SetAge(int SetAge){
                    
                    if(SetAge >= 18){

                        age = SetAge;
                        return age;
                    }
                    
            }
        //     
        
        //Constructor
            Employees(std::string EmployeeName, std::string EmployeeCompany, int EmployeeAge){

                name = SetName(EmployeeName);
                company = SetCompany(EmployeeCompany);
                age = SetAge(EmployeeAge);
            }
        //

        //Method1
            void introduce(){

                std::cout << " my name is : " << name << "\n";
                std::cout << " I work at : " << company << "\n";
                std::cout << " I am " << age << " years old \n";
            }
        //

        //Method2
              //if we make a method as virtual we are applying polymorphism, which means that we are asking our program if there are  any other instances of  the method dubbed as virual that occurs at other inherited classes, if so then i want to invoke that.
            virtual void Work(){
                  
                  std::cout << "-----------\n";
                  std::cout << name << " is checking email, task backlog, performing tasks...\n";
            }
        //

        //Abstract class fulfulling criterias of AskForPromotion
            void AskForPromotion(){
                if(age > 30){
                    std::cout<< name << " got promoted " << "\n";
                }
                else{
                    std::cout<< name << " ,sorry denial promotion " << "\n";
                }
            }
        //
}; 


class Developer: public Employees{ // if we don't add public it is private by default. Normally everything works without public, but inorder to access methods inside the parent class example (Askforpromotion) in the main class we need to add public

    public:

        std::string FavProgrammingLanguage;
        
        //inherit values by :
        Developer(std::string name, std::string company, int age, std::string favProgrammingLanguage)
         : Employees(name,company,age) {

            FavProgrammingLanguage = favProgrammingLanguage;
        }

        ProgramFix(){

            std::cout << "---------------------- \n";  //we used Get because the items are private
            std::cout << " my name is : " << GetName() << "\n";
            std::cout << " I work at : " << GetCompany() << "\n";
            std::cout << " I am " << GetAge() << " years old \n";
            std::cout << " I love programming in " << FavProgrammingLanguage;
            
        }

        void Work(){
                  
                  std::cout << "-----------\n";
                  std::cout << GetName() << " is writing " << FavProgrammingLanguage <<  "\n";
            }
        

      
};


class Teacher: public Employees{
    public:
       std::string Subject;

       Teacher(std::string name, std::string company, int age, std:: string subject ) 
       : Employees(name,company,age){

           Subject = subject;
       }
       void PrepareLesson(){
           
           std::cout << "-----------\n";
           std::cout <<  GetName() << " is preparing " << Subject << " lesson";

       }

       void Work(){
                  
            std::cout << "-----------\n";
            std::cout << GetName() << " is Teaching " << Subject <<  "\n";
       }
};


int main(){

    Employees one("Samuel Arefeaynie", "Microsoft", 24);
    Employees two("Arefeaynie Zewdie", "Google", 31);


    
    one.AskForPromotion();
    two.AskForPromotion();

    Developer d("Samushu Mamuel","Uber",23,"C++");
    d.ProgramFix();
    d.AskForPromotion();

    Teacher t("mark","UCLA",40,"History");
    t.PrepareLesson();
    t.AskForPromotion();

    t.Work();
    d.Work();

    Employees *e1 = &d;
    Employees *e2 = &t;

    e1->Work();
    e2->Work();
    
    
  return 0;
}


//Function Definition
   
        


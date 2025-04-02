#include<iostream>
#include<fstream>
#include<string>

class HelloWorld{

    public:
    static void run(){
        std::cout<<"Hello man!"<<std::endl;
    }
};

class SwapNumbers{
    public:
    static void run(){
        int a=5, b=10;
        std::cout<<"Before swap a = "<<a<<" , b = "<<b<<std::endl;
        std::swap(a,b);
        std::cout<<"After swap a = "<<a<<" , b = "<<b<<std::endl;
    }

};
  class OddEvenCheck{
        public:
        static void run(){
            int number;
            std::cout<<"Enter your number :";
            std::cin>>number;
            std::cout<<number<<(number % 2 == 0 ? "is even." : "is odd. ")<<std::endl; 
        }
  };

  class Factorial{
        public:
        static int calculate (int n){
            return(n<=1) ? 1 : n * calculate (n-1);
        }
        static void run(){
            int num;
            std::cout<<"Enter a noo-negative integer: ";
            std::cin>>num;
            std::cout<<"Factorial of "<<num<<"is"<<calculate(num)<<std::endl;        
        } 

  }; 

  class SumNaturalNumbers{
        public:
        static void run(){
            int n, sum =0;
            std::cout<<"Enter a positive integer: ";
            std::cin>>n;
            for (int i = 1; i <=n; ++i) sum +=i;
                std::cout<<"Sum of natural numbers up to "<< n<< "is"<<std::endl;
            
            
        }

  };

  class PrimeCheck{
    public:
    static bool isPrime(int num){
        if(num<=1) return false;
        for(int i=2; i<=num /2; ++i )
        if(num % i ==0) return false;
        return true;
    }
    static void run(){
        int number;
        std::cout<<"write a positive integer: ";
        std::cin>>number;
        std::cout<<number<<(isPrime(number) ?" Is a Prime number ." : "Is not a prome number." )<<std::endl; 
    }

};

class FileRead{
    public:
    static void run(){
        std::ifstream inputFile("yevgen_user.txt");
        if(inputFile.is_open()){
            std::string line;
            while(getline(inputFile, line)){
                std::cout<<line<<std::endl;

            }
            inputFile.close();
        }else{
            std::cout<<"Unable to open file check it! "<<std::endl;
        }

    }

};

void showMenu(){
    std::cout<<"\n Choose a program for run"<<std::endl;
    std::cout<<"1. hello man "<<std::endl;
    std::cout<<"2. Swap numbers"<<std::endl;
    std::cout<<"3. Odd or Even"<<std::endl;
    std::cout<<"4. Factorial Calculation"<<std::endl;
    std::cout<<"5. Sun of natural numbers"<<std::endl;
    std::cout<<"6. Prime number Check"<<std::endl;
    std::cout<<"7. Read from file"<<std::endl;
    std::cout<<"0. Exit"<<std::endl;
    
}


    int main(){
        int choice;
        do{
            showMenu();
            std::cout<<"Enter your choice : ";
            std::cin>>choice;
            switch(choice){
                case 1: HelloWorld::run(); break;
                case 2: SwapNumbers::run();break;
                case 3: OddEvenCheck::run();break;
                case 4: Factorial::run();break;
                case 5: SumNaturalNumbers::run();break;
                case 6: PrimeCheck::run();break;
                case 7: FileRead::run();break;
                case 0: std::cout<<"Exiting...."<< std::endl;break;
                default: std::cout<<"Invalid choice try again. "<<std::endl;

            
            }

        } while (choice !=0);
        
            return 0;
        
    }

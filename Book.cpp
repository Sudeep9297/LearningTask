#include <iostream>
#include <string>
using namespace std;

class Library{
    public:
        int numBooks;

        Library(){
            numBooks=0;
        };

        void addBooks(){
            
        };

        void listBooks(){

        };
};

class Book{
    public:

        Book(int sno,string name,string author){
          cout<<sno<<" "<<name<<" "<<author<<endl;  
        };
};

int main(){
    Book book(1,"Alchemist","Paulo Coelho");
    Library library;

    library.addBooks();
    library.listBooks();
    return 0;
}
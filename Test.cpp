#include <iostream>
#define MAXBOOKS = 1000
#define MAXUSERS = 100
using namespace std;

class Library{
    public:
       listBooks book[MAXBOOKS];
       int numBooks;

       Library(){
           numBooks=0;
       }

       void addBooks(Book ipBook){
           listBooks[numBooks]=ipBook;
           numBooks++;
       };
}

class Book{
    public:
        string name;
        string author;
        int sno;

        Book(string bkName,string bkAuthor,int bkSno){
            name=bkName;
            author=bkAuthor;
            sno=bkSno;
        };

}

int main(){
    Book ipBook("let us c","Yashvanth",1);
    Library library();

    library.addBooks(ipBook);
    library.listBooks();

    return 0;
    }

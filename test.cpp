#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
        int id;
        string name;
        string author;

        Book(){
        
        };

        Book(Book &ipBook){
            id=ipBook.id;
            name=ipBook.name;
            author=ipBook.author;
        }

        void addBooks(int bkId,string bkName,string bkAuthor){
            id=bkId;
            name=bkName;
            author=bkAuthor;
        }

        void showBooks(){
            cout<<"Book id: "<<id<<endl;
            cout<<"Book name: "<<name<<endl;
            cout<<"Book author: "<<author<<endl;
            cout<<"Book count: "<<numBooks<<endl;
        }
};

int main(){
    Book bk;
    bk.addBooks(1,"Alchemist","Paulo Coelho");

    Book bk1=bk;
    bk1.showBooks();

    return 0;
}
/*class Book{
    public:
        string book;

        //parametrized constructor
        Book(string ipBook){
            book=ipBook;
        }

        //copy constructor
        Book(Book &iBook){
            book=iBook.book;
        }

};

int main(){
    Book bk("Alchemist");
    Book bk2(bk);

    cout<<bk2.book<<endl;
    return 0;
}*/

/*class Human{
    private:
        string name;
        int age;

    public:
        Human(string iname,int iage){
            name=iname;
            age=iage;
        }

        void display(){
            cout<<name<<endl<<age<<endl;
        }
};

int main(){
    Human h("ayush",25);
    h.display();

    return 0;
}*/
/*class Human{
    private:
        string *name;
        int *age;

    public:
        Human(string iname,int iage){
            name=new string;
            age=new int;
            *name=iname;
            *age=iage;
        }
        
        void display(){
            cout<<"my name is "<<*name<<"and i am "<<*age<<"years old"<<endl;
        }
        
        ~Human(){
            delete name;
            delete age;
        }

};

int main(){
    Human *ptr=new Human("ashwin",19);
    ptr->display();

    return 0;
}*/
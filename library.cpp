#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Book
{
    string title;
    string author;
    bool isavilable;
    int quantity;
    double purchaseprice;
    int bookid;
};

class Library{
    private:
    vector<Book> books;

    public:
    void addbook(const string& title,const string& author,double purchaseprice,int quantity,int bookid){
        Book newbook;
        newbook.title = title;
        newbook.author = author;
        newbook.isavilable = true;
        newbook.purchaseprice = purchaseprice;
        newbook.quantity = quantity;
        newbook.bookid = bookid;
        books.push_back(newbook);
        cout<<"Book added succesfully\n";
    }
    void returnbook(const string& title, string& author){
        for(auto&book:books){
            if (book.title == title &&book.isavilable)
            {
                book.isavilable = true;
                cout<<"Book Returned succesfully\n";
                return;
            }
        }
        cout<<"Book not found or already returned\n";
    }
    void display(){
        if (books.empty())
        {
            cout<<"No books are there\n";
            return;
        }
        cout<<"Books available \n";
        for(const auto& book:books){
            cout<<"Title : "<<book.title<<endl<<"Author : "<<book.author<<endl<<"avaliblity : "<<(book.isavilable ? "avalibale" : "not avaliable")<<endl;
        }
    }
    void purchaseprice(const string& title,int quantity){
        for(auto& book:books){
            if (book.title == title && book.quantity >=quantity)
            {
                book.quantity -=quantity;
                cout<<"Purchase successful ! total cost : "<<(book.purchaseprice *quantity)<<endl;
                return;
            }
        }
        cout<<"Book not found \n";
    }
};

int main(){
    Library library;
    int choice;
    string title,author;
    double purchaseprice;
    int quantity,bookid;

    do
    {
        cout<<"--------library--------\n";
        cout<<"1) Add book"<<endl;
        cout<<"2)return book"<<endl;
        cout<<"3)display books"<<endl;
        cout<<"4)purchase book"<<endl;
        cout<<"5) Exit\n";
        cout<<"Enter your choice";
        cin>>choice;
        
        switch (choice)
        {
        case 1:
            cout<<"Enter the book title :  ";
            cin.ignore();
            getline(cin , title);
            cout<<"Enter author name : ";
            getline(cin , author);
            cout<<"Enter bookid : ";
            cin>>bookid;
            cout<<"Enter the purchase price :  ";
            cin>>purchaseprice;
            cout<<"Enter the quantity : ";
            cin>>quantity;
            library.addbook(title,author,purchaseprice,quantity,bookid);
            break;
        case 2:
            cout<<"Enter the book title : ";
            cin.ignore();
            getline(cin , title);
            library.returnbook(title,author);
            break;
        case 3:
            library.display();
            break;
        case 4:
            cout<<"Enter the book title : ";
            cin.ignore();
            getline(cin,title);
            cout<<"Enter the quantity : ";
            cin>>quantity;
            library.purchaseprice(title,quantity);
            break;
        case 5:
            cout<<"Exiting...\n";
            break;
        default:
            cout<<"Enter the correct choice\n";
            break;
        }

    } while (choice !=5);
    
    return 0;
}
//#include<iostream>
//#include<string.h>
//#include<stdlib.h>
//
//using namespace std;
//
//class Library{
//public:
//    int id;
//    char name[100];
//    char author[100];
//    char student[100];
//    int  prices;
//    int pages;
//};
//
//int main(){
//    Library lib[20];
//    int input =0;
//    int count=0;
//
//    while(input!=3){
//        cout<<"Enter 1 to input details:"<<endl;
//        cout<<"Enter 2 to display details:"<<endl;
//        cout<<"Enter 3 to quit"<<endl;
//        cin>>input;
//    
//
//    switch(input){
//        case 1:
//        start:
//        cout<<"Enter Book Id"<<endl;
//        cin>>lib[count].id;
//        cout<<"Enter Book Name"<<endl;
//        cin>>lib[count].name;
//        cout<<"Enter Book Author"<<endl;
//        cin>>lib[count].author;
//        cout<<"Enter Student Name"<<endl;
//        cin>>lib[count].student;
//        cout<<"Enter Book pages"<<endl;
//        cin>>lib[count].prices;
//        cout<<"Enter Book pages"<<endl;
//        cin>>lib[count].pages;
//        count++;
//        break;
//        case 2:
//        for(int i =0; i<count; i++){
//            cout<<" Book Id:"<<lib[count].id<<endl;
//            cout<<" Book Name:"<<lib[count].name<<endl;
//            cout<<" Book Author:"<<lib[count].author<<endl;
//            cout<<" Student Name:"<<lib[count].student<<endl;
//            cout<<" Book pages:"<<lib[count].pages<<endl;
//            cout<<" Book prices:"<<lib[count].prices<<endl;
//        }
//        break;
//    case 3:
//     exit(0);
//     break;
//    default:
//    cout<<"u have enterd wrong value:"<<endl;
//    goto start ;
//    }
//}
//}


#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Library {
public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int prices;
    int pages;
};

int main() {
    Library lib[20];  
    int input = 0;
    int count = 0;

    while (true) {  // Run until the user chooses to quit
        cout << "\nEnter 1 to input book details" << endl;
        cout << "Enter 2 to display book details" << endl;
        cout << "Enter 3 to quit" << endl;
        cin >> input;
        cin.ignore(); // To ignore any leftover newline characters from previous input

        switch (input) {
            case 1:
                if (count >= 20) {  // Prevent array overflow
                    cout << "Library is full. Cannot add more books." << endl;
                    break;
                }

                cout << "Enter Book Id: ";
                cin >> lib[count].id;
                cin.ignore(); // Ignore the newline character

                cout << "Enter Book Name: ";
                cin.getline(lib[count].name, 100);

                cout << "Enter Book Author: ";
                cin.getline(lib[count].author, 100);

                cout << "Enter Student Name: ";
                cin.getline(lib[count].student, 100);

                cout << "Enter Book Price: ";
                cin >> lib[count].prices;

                cout << "Enter Number of Pages: ";
                cin >> lib[count].pages;

                count++;
                break;

            case 2:
                if (count == 0) {
                    cout << "No books available in the library!" << endl;
                } else {
                    cout << "\n--- Library Books Details ---\n";
                    for (int i = 0; i < count; i++) {
                        cout << "Book Id: " << lib[i].id << endl;
                        cout << "Book Name: " << lib[i].name << endl;
                        cout << "Book Author: " << lib[i].author << endl;
                        cout << "Student Name: " << lib[i].student << endl;
                        cout << "Book Pages: " << lib[i].pages << endl;
                        cout << "Book Price: " << lib[i].prices << endl;
                        cout << "--------------------------" << endl;
                    }
                }
                break;

            case 3:
                cout << "Exiting the program..." << endl;
                exit(0);

            default:
                cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        }
    }
}


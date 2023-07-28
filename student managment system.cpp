#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include <cstdio>
#define MAX_LEN 100

using namespace std;
int i;
int sID;
int SIZE= 100;
struct student {
int ID;
string name;
string guardian_name;
string addrass;
string DOB;
string batch;
float gpa;
float cgpa;
int phn_no;

} ;

   void add_stdnt(struct student info[], int i){
       int k,sID;
        cout<<"Enter Student ID: ";
         cin>>info[i].ID;
             for(int k=0; k<i; k++){
        if(info[i].ID == sID){
           cout<<"Try new one!";
        }
    }
          fflush(stdin);
          cout<<"Enter Student Name: ";
         getline(cin, info[i].name);
         fflush(stdin);
         cout<<"Enter Guardian Name: ";
         getline(cin,info[i].guardian_name);
         fflush(stdin);
         cout<<"Enter Address: ";
         getline(cin,info[i].addrass);
         fflush(stdin);
         cout<<"Enter Date of Birth: ";
         getline(cin,info[i].DOB);
         fflush(stdin);
         cout<<"Enter Batch Name: ";
         getline(cin,info[i].batch);
         cout<<"Enter Student GPA: ";
         cin>>info[i].gpa;
         cout<<"Enter Student CGPA: ";
         cin>>info[i].cgpa;
         cout<<"Enter Phone number: ";
         cin>>info[i].phn_no;

   }


void display(struct student info[], int indx){

     for (i=0; i<indx; i++){

        cout<<" ---------------------------------------"<<endl;
        cout<<"|  Student ID: "<<info[i].ID<<endl;
        cout<<"|  Student Name: "<<info[i].name<<endl;
        cout<<"|  Guardian Name: "<<info[i].guardian_name<<endl;
        cout<<"|  Address: "<<info[i].addrass<<endl;
        cout<<"|  Date of Birth: "<<info[i].DOB<<endl;
        cout<<"|  Batch Name: "<<info[i].batch<<endl;
        cout<<"|  Student GPA: "<<info[i].gpa<<endl;
        cout<<"|  Student CGPA: "<<info[i].cgpa<<endl;
        cout<<"|  Phone number: "<<info[i].phn_no<<endl;
        cout<<" ---------------------------------------"<<endl;


}
}


int fnd_stdnt (struct student info[], int indx){
int ch;
 cout<<"1. Search with ID"<<endl;
 cout<<"2. Search with Name"<<endl;
cout<<"\nENTER YOUR CHOICE"<<endl;
    cin>>ch;

    switch(ch){
        case 1:

        int sID;
        cout<<"Enter Student ID: ";
        cin>>sID;
       for (int i = 0; i < indx; i++) {
        if (info[i].ID == sID){
        cout<<" ---------------------------------------"<<endl;
        cout<<"|  Student ID: "<<info[i].ID<<endl;
        cout<<"|  Student Name: "<<info[i].name<<endl;
        cout<<"|  Guardian Name: "<<info[i].guardian_name<<endl;
        cout<<"|  Address: "<<info[i].addrass<<endl;
        cout<<"|  Date of Birth: "<<info[i].DOB<<endl;
        cout<<"|  Batch Name: "<<info[i].batch<<endl;
        cout<<"|  Student GPA: "<<info[i].gpa<<endl;
        cout<<"|  Student CGPA: "<<info[i].cgpa<<endl;
        cout<<"|  Phone number: "<<info[i].phn_no<<endl;
        cout<<" ---------------------------------------"<<endl;
            }
    }
      cout<<"No student data found!";
      break;

   case 2:

        string NAME;
        cout<<"Enter Student Name: ";
         getline(cin,info[i].name);
          for (int i = 0; i < indx; i++) {
        if (info[i].name == NAME){
                 cout<<" ---------------------------------------"<<endl;
        cout<<"|  Student ID: "<<info[i].ID<<endl;
        cout<<"|  Student Name: "<<info[i].name<<endl;
        cout<<"|  Guardian Name: "<<info[i].guardian_name<<endl;
        cout<<"|  Address: "<<info[i].addrass<<endl;
        cout<<"|  Date of Birth: "<<info[i].DOB<<endl;
        cout<<"|  Batch Name: "<<info[i].batch<<endl;
        cout<<"|  Student GPA: "<<info[i].gpa<<endl;
        cout<<"|  Student CGPA: "<<info[i].cgpa<<endl;
        cout<<"|  Phone number: "<<info[i].phn_no<<endl;
        cout<<" ---------------------------------------"<<endl;
        }

        }
         cout<<"No student data found!";
        break;

   // default: cout<<"wrong choice"<<endl;
    break;
    }
}

int updt_stdnt(struct student info[], int indx){
  int new_ID;
string new_name;
string new_guardian_name;
string new_addrass;
string new_DOB;
string new_batch;
float new_gpa;
float new_cgpa;
int new_phn_no;

int i=fnd_stdnt(info, indx);
if(i>=0){

         cout<<"Enter Student ID: ";
         cin>>new_ID;
         info[i].ID==new_ID;
         fflush(stdin);
        cout<<"Enter Student Name: ";
         getline(cin,new_name);
         info[i].name=new_name;
         fflush(stdin);
         cout<<"Enter Guardian Name: ";
         getline(cin,new_guardian_name);
         info[i].guardian_name=new_guardian_name;
         fflush(stdin);
         cout<<"Enter Address: ";
         getline(cin,new_addrass);
         info[i].addrass=new_addrass;
         fflush(stdin);
         cout<<"Enter Date of Birth: ";
         getline(cin,new_DOB);
         info[i].DOB=new_DOB;
         fflush(stdin);
         cout<<"Enter Batch Name: ";
        getline(cin,new_batch);
         info[i].batch=new_batch;
         cout<<"Enter Student GPA: ";
         cin>>new_gpa;
         info[i].gpa==new_gpa;
         cout<<"Enter Student CGPA: ";
         cin>>new_cgpa;
         info[i].cgpa==new_cgpa;
         cout<<"Enter Phone number: ";
         cin>>new_phn_no;
         info[i].phn_no==new_phn_no;


}
}

int main(){
system("Color 0A");

int index;



 int choice;
 cout<<"1. Add New Student Information"<<endl;
 cout<<"2. Find Student Information"<<endl;
 cout<<"3. Update Student Information"<<endl;
 cout<<"4. Delete Student Information"<<endl;
 cout<<"5. Display All Student Information"<<endl;
 cout<<"6. Exit"<<endl;


    struct student info[SIZE];

do{

    cout<<"\nENTER YOUR CHOICE"<<endl;
    cin>>choice;
    switch(choice){
    case 1:

        add_stdnt(info, index);
         index++;
          break;
    case 2:fnd_stdnt(info, index);
    break;
   case 3: updt_stdnt(info, index);
    break;
  //  case 4: dlt_stdnt();
    break;
    case 5:
        display(info, index);
       break;
   case 6: cout<<"Exit"<<endl;
    break;
    default: cout<<"Invalid choice"<<endl;


    }

 }while(choice!=6);

}

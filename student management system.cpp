#include<iostream>

using namespace std;
int i;
int sID;
int SIZE= 100;
struct student
{
    string ID;
    string name;
    string addrass;
    string DOB;
    string blood_group;
    string batch;
    string phn_no;

} ;

void add_student(struct student info[], int i)
{
    fflush(stdin);
    cout<<"Enter Student ID: ";
    getline(cin,info[i].ID);
    fflush(stdin);
    fflush(stdin);
    cout<<"Enter Student Name: ";
    getline(cin, info[i].name);
    fflush(stdin);
    cout<<"Enter Address: ";
    getline(cin,info[i].addrass);
    fflush(stdin);
    cout<<"Enter Date of Birth: ";
    getline(cin,info[i].DOB);
    fflush(stdin);
    cout<<"Enter Blood Group: ";
    getline(cin,info[i].blood_group);
    fflush(stdin);
    cout<<"Enter Batch Name: ";
    getline(cin,info[i].batch);
    fflush(stdin);
    cout<<"Enter Phone number: ";
    getline(cin,info[i].phn_no);

    cout<<"\n........................................\n";
    cout<<". Student information ADD Successfully .\n";
    cout<<"........................................\n";
    cout<<endl;

}

int find_student(struct student info[], int indx)
{


    string sID;
    fflush(stdin);
    cout<<"Enter Student ID: ";
    getline(cin,sID);
    for (int i = 0; i < indx; i++)
    {
        if (info[i].ID == sID)
        {
            cout<<" ---------------------------------------"<<endl;
            cout<<"|  Student ID: "<<info[i].ID<<endl;
            cout<<"|  Student Name: "<<info[i].name<<endl;
            cout<<"|  Address: "<<info[i].addrass<<endl;
            cout<<"|  Date of Birth: "<<info[i].DOB<<endl;
            cout<<"|  Blood group: "<<info[i].blood_group<<endl;
            cout<<"|  Batch Name: "<<info[i].batch<<endl;
            cout<<"|  Phone number: "<<info[i].phn_no<<endl;
            cout<<" ---------------------------------------"<<endl;
            return i;
        }

        }
    cout<<"\n...........................\n";
    cout<<". NO Student DATA found!! .\n";
    cout<<"...........................\n";
    cout<<endl;


            return -1;


}

void update_student(struct student info[], int indx)
{
    string new_ID;
    string new_name;
    string new_addrass;
    string new_DOB;
    string new_blood_group;
    string new_batch;
    string new_phn_no;
    int ch;
    int i=find_student(info, indx);
    if(i>=0)
    {
    cout<<endl;
    cout<<"1. UPDATE ID "<<endl;
    cout<<"2. UPDATE NAME"<<endl;
    cout<<"3. UPDATE ADDRESS"<<endl;
    cout<<"4. UPDATE DATE OF BIRTH"<<endl;
    cout<<"5. UPDATE BLOOD GROUP"<<endl;
    cout<<"6. UPDATE BATCH"<<endl;
    cout<<"7. UPDATE PHONE NUMBER"<<endl;
    cout<<"0. HOME "<<endl;
    cout<<"\nENTER YOUR CHOICE: ";
    cin>>ch;
    cout<<endl;
    switch(ch)
    {

     case 1:
        fflush(stdin);
        cout<<"Enter Student ID: ";
        getline(cin,new_ID);
        info[i].ID=new_ID;
    cout<<"\n...........................................\n";
    cout<<". Student information UPDATE Successfully .\n";
    cout<<"...........................................\n";
    cout<<endl;

        break;
     case 2:
        fflush(stdin);
        cout<<"Enter Student Name: ";
        getline(cin,new_name);
        info[i].name=new_name;
    cout<<"\n...........................................\n";
    cout<<". Student information UPDATE Successfully .\n";
    cout<<"...........................................\n";
    cout<<endl;

        break;
     case 3:
        fflush(stdin);
        cout<<"Enter Address: ";
        getline(cin,new_addrass);
        info[i].addrass=new_addrass;
    cout<<"\n...........................................\n";
    cout<<". Student information UPDATE Successfully .\n";
    cout<<"...........................................\n";
    cout<<endl;
        break;

    case 4:
        fflush(stdin);
        cout<<"Enter Date of Birth: ";
        getline(cin,new_DOB);
        info[i].DOB=new_DOB;
    cout<<"\n...........................................\n";
    cout<<". Student information UPDATE Successfully .\n";
    cout<<"...........................................\n";
    cout<<endl;
        break;
    case 5:
        fflush(stdin);
        cout<<"Enter Blood Group: ";
        getline(cin,new_blood_group);
        info[i].blood_group=new_blood_group;
    cout<<"\n...........................................\n";
    cout<<". Student information UPDATE Successfully .\n";
    cout<<"...........................................\n";
    cout<<endl;
        break;
     case 6:
        fflush(stdin);
        cout<<"Enter Batch Name: ";
        getline(cin,new_batch);
        info[i].batch=new_batch;
    cout<<"\n...........................................\n";
    cout<<". Student information UPDATE Successfully .\n";
    cout<<"...........................................\n";
    cout<<endl;
        break;
    case 7:
        fflush(stdin);
        cout<<"Enter Phone number: ";
        getline(cin,new_phn_no);
        info[i].phn_no=new_phn_no;
    cout<<"\n...........................................\n";
    cout<<". Student information UPDATE Successfully .\n";
    cout<<"...........................................\n";
    cout<<endl;
        break;
    case 0:
         break;

    default:

    cout<<"\n....................\n";
    cout<<". Invalid choice!! .\n";
    cout<<"....................\n";
    cout<<endl;
    break;




    }


}
}

void delete_student(struct student info[],int indx){


    int position=find_student(info, indx);
    if(position>=0){

        for(int i=position;i<indx;i++){
            info[i]=info[i+1];
        }
    cout<<"\n...........................................\n";
    cout<<". Student information DELETE Successfully .\n";
    cout<<"...........................................\n";
    cout<<endl;

    }



}


void display_all(struct student info[], int indx)
{

    for (i=0; i<indx; i++)
    {

        cout<<" ---------------------------------------"<<endl;
        cout<<"|  Student ID: "<<info[i].ID<<endl;
        cout<<"|  Student Name: "<<info[i].name<<endl;
        cout<<"|  Address: "<<info[i].addrass<<endl;
        cout<<"|  Date of Birth: "<<info[i].DOB<<endl;
        cout<<"|  Blood group: "<<info[i].blood_group<<endl;
        cout<<"|  Batch Name: "<<info[i].batch<<endl;
        cout<<"|  Phone number: "<<info[i].phn_no<<endl;
        cout<<" ---------------------------------------"<<endl;


    }

}








int main()
{

    int index=0;
    int choice;
    struct student info[SIZE];
    do
    {
    cout<<endl;
    cout<<"1. Add New Student Information"<<endl;
    cout<<"2. Find Student Information"<<endl;
    cout<<"3. Update Student Information"<<endl;
    cout<<"4. Delete Student Information"<<endl;
    cout<<"5. Display All Student Information"<<endl;
    cout<<"6. Exit"<<endl;

    cout<<"\nENTER YOUR CHOICE: ";
    cin>>choice;
    switch(choice){

    case 1:

        add_student(info, index);
        index++;
        break;
    case 2:
        find_student(info, index);
        break;
    case 3:
        update_student(info, index);
        break;
    case 4:
        delete_student(info, index);
        break;
    case 5:
        display_all(info, index);
        break;
    case 6:
        cout<<"Exit"<<endl;
        break;
    default:

    cout<<"\n....................\n";
    cout<<". Invalid choice!! .\n";
    cout<<"....................\n";
    cout<<endl;
    break;

        }

    }
    while(choice!=6);



}

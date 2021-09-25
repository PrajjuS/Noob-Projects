#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fstream>
#include<istream>

using namespace std;

void start();
void end();
void acclogin();
void accregister();
void accforgot();
void database();
int main()
{
    start();
    int choice;
    cout<<"1.Login\n";
    cout<<"2.Register\n";
    cout<<"3.Forgot Password\n";
    cout<<"4.Destroy Database\n";
    cout<<"5.Exit\n";

    wrong:
    cout<<"\nInput Your Choice: ";cin>>choice;
    switch (choice)
    {
    case 1:
        acclogin();
        break;

    case 2:
        accregister();
        break;

    case 3:
        accforgot();
        break;

    case 4:
        database();
        break;

    case 5:
        cout<<"Exiting...\n";
        usleep(3*1000000);
        exit;
        break;

    default:
        cout<<"\nInvalid Input Enter Again";
        cin.clear ();
        cin.ignore ( 100 , '\n' );
        goto wrong;
        break;
    }
    return 0;
}

void start()
{
    system("cls");
    cout<<"\n===============================================\n";
    cout<<"Welcome to PrajjuS's Login Registration Program\n";
    cout<<"===============================================\n\n";
}

void end()
{
    char ch;
    cout<<"\nMade By Prajwal.S\nDo you want to start again?(Y/N)";
    wrong1:
    cin>>ch;
    if (ch=='y' || ch=='Y')
    {
        main();
    }
    else if (ch=='n' || ch=='N')
    {
        system("cls");
        start();
        cout<<"Exiting...\n";
        usleep(3*1000000);
        exit;
    }
    else
    {
        cout<<"\nInvalid Input Enter Again(Y/N): ";
        cin.clear ();
        cin.ignore ( 100 , '\n' );
        goto wrong1;
    }
}

void acclogin()
{
    system("cls");
    start();
    int pass=0;
    string username, password, auth_usr, auth_pwd;
    cout<<"ACCOUNT LOGIN\n\n";
    incorrect:
    cout<<"Enter following details\n";
    cout<<"Username: ";cin>>username;
    cout<<"Password: ";cin>>password;

    fstream input("database.txt");
    while (input>>auth_usr>>auth_pwd)
    {
        if (username==auth_usr && password==auth_pwd)
        {
            pass=1;
            break;
        }
        else if (username==auth_usr && password!=auth_pwd)
        {
            pass=2;
        }
    }
    input.close();
    if (pass==1)
    {
        system("cls");
        start();
        cout<<"\nSuccessfully Logged In\n";
        end();
    }
    else if (pass==2)
    {
        cout<<"\nPassword Incorrect Login Again\n";
        goto incorrect;
    }
    else
    {
        system("cls");
        start();
        char ch;
        cout<<"\nUsername Not Registered in Database\nRegister Plox(Y/N): ";
        wrong2:
        cin>>ch;
        if (ch=='y' || ch=='Y')
        {
            accregister();
        }
        else if (ch=='n' || ch=='N')
        {
            end();
        }
        else
        {
            cout<<"\nInvalid Input Enter Again(Y/N): ";
            cin.clear ();
            cin.ignore ( 100 , '\n' );
            goto wrong2;
        }
    }
}

void accregister()
{
    system("cls");
    start();
    char ch1, ch2;
    int pass=0;
    string username, password1, password2, auth_usr;
    cout<<"ACCOUNT REGISTRATION\n";
    cout<<"\nEnter the following details\n";
    cout<<"Username: ";cin>>username;
    cout<<"Password: ";cin>>password1;
    enter_again:
    cout<<"Confirm Password: ";cin>>password2;
    ofstream reg("database.txt",ios::app);
    if (password1==password2)
    {
        fstream input("database.txt");
        while (input>>auth_usr)
        {
            if (auth_usr==" ")
            {
                pass=0;
                break;
            }
            if (username==auth_usr)
            {
                pass=1;
                break;
            }
            if(username!=auth_usr)
            {
                pass=2;
                break;
            }
        }
        if (pass==0)
        {
            system("cls");
            start();
            reg<<username<<" "<<password2<<endl;
            system("cls");
            start();
            cout<<"\nRegistration Successful\n";
            cout<<"\nDo you want to login?(Y/N): ";
            wrong3:
            cin>>ch2;
            if (ch2=='y' || ch2=='Y')
            {
                acclogin();
            }
            else if (ch2=='n' || ch2=='N')
            {
                end();
            }
            else
            {
                cout<<"\nInvalid Input Enter Again(Y/N): ";
                cin.clear ();
                cin.ignore ( 100 , '\n' );
                goto wrong3;
            }
        }
        if (pass==1)
        {
            system("cls");
            start();
            cout<<"\nUsername Already Registered\nLogin Plox(Y/N): ";
            wrong4:
            cin>>ch1;
            if (ch1=='y' || ch1=='Y')
            {
                acclogin();
            }
            else if (ch1=='n' || ch1=='N')
            {
                end();
            }
            else
            {
                cout<<"\nInvalid Input Enter Again(Y/N): ";
                cin.clear ();
                cin.ignore ( 100 , '\n' );
                goto wrong4;
            }
        }
        if (pass==2)
        {
            system("cls");
            start();
            reg<<username<<" "<<password2<<endl;
            system("cls");
            start();
            cout<<"\nRegistration Successful\n";
            cout<<"\nDo you want to login?(Y/N): ";
            wrong5:
            cin>>ch2;
            if (ch2=='y' || ch2=='Y')
            {
                acclogin();
            }
            else if (ch2=='n' || ch2=='N')
            {
                end();
            }
            else
            {
                cout<<"\nInvalid Input Enter Again(Y/N): ";
                cin.clear ();
                cin.ignore ( 100 , '\n' );
                goto wrong5;
            }
        }
    }
    else
    {
        cout<<"Password does not match enter again\n";
        goto enter_again;
    }
}

void accforgot()
{
    system("cls");
    start();
    int pass=0;
    string username, auth_usr, auth_pwd;
    char ch;
    cout<<"FORGOT PASSWORD?\n\n";
    cout<<"Search your password by username\n";
    cout<<"Username: ";cin>>username;

    ifstream searchu("database.txt");
    while (searchu>>auth_usr>>auth_pwd)
    {
        if (username==auth_usr)
        {
            pass=1;
            break;
        }
    }
    if (pass==1)
    {
        system("cls");
        start();
        cout<<"Account Found\n";
        cout<<"Username: "<<auth_usr<<"\n";
        cout<<"Password: "<<auth_pwd<<"\n";
        end();
    }
    else
    {
        system("cls");
        start();
        cout<<"Account Not Found in Database\n";
        cout<<"You can Register if you want(Y/N): ";
        wrong6:
        cin>>ch;
        if (ch=='y' || ch=='Y')
        {
            accregister();
        }
        else if (ch=='n' || ch=='N')
        {
            end();
        }
        else
        {
            cout<<"Invalid Input Enter Again(Y/N): ";
            cin.clear ();
            cin.ignore ( 100 , '\n' );
            goto wrong6;
        }
    }
    searchu.close();
}

void database()
{
    system("cls");
    start();
    string pwd;
    char ch;
    cout<<"DATABASE CONTROL\n\n";
    cout<<"Password: ";cin>>pwd;
    if (pwd=="GhoulEater")
    {
        system("cls");
        start();
        cout<<"DATABASE CONTROL\n\n";
        cout<<"Warning: Doing this will destroy database.\n";
        cout<<"Confirm(Y/N): ";
        wrong7:
        cin>>ch;
        if (ch=='y' || ch=='Y')
        {
            cout<<"Destroying Databse...\n";
            remove("database.txt");
            usleep(3*1000000);
            system("cls");
            start();
            cout<<"DATABASE CONTROL\n";
            cout<<"\nDatabase Destroyed\n";
            end();
        }
        else if (ch=='n' || ch=='N')
        {
            cout<<"\nAborting Process...\n";
            usleep(3*1000000);
            end();
        }
        else
        {
            cout<<"Invalid Input Enter Again(Y/N): ";
            cin.clear ();
            cin.ignore ( 100 , '\n' );
            goto wrong7;
        }
    }
    else
    {
        system("cls");
        start();
        cout<<"Wrong Password\n";
        cout<<"\nExitting...\n";
        usleep(3*1000000);
        exit;
    }
}

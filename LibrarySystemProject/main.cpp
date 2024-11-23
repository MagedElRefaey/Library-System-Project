#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;



class Student{

private:

    string Id;
    string Name;
    string Birthday;
    string Email;
    string Mobile;

public:

    Student(){
        ifstream InFile("Student.txt");
        if (InFile.is_open()){
            string Line;
            string Line2={};

            while(getline(InFile,Line)){

            string id,name,birthday,email,mobile;

            stringstream ss(Line);

            getline(ss,id,',');
            Student::setId(id);
            cout<<"Id:"<<id<<endl;

            getline(ss,name,',');
            Student::setName(name);
            cout<<"Name: "<<name<<endl;

            getline(ss,birthday,',');
            Student::setBirthday(birthday);
            cout<<"Birthday: "<<birthday<<endl;

            getline(ss,email,',');
            Student::setEmail(email);
            cout<<"Email: "<<email<<endl;

            getline(ss,mobile,',');
            Student::setMobile(mobile);
            cout<<"Mobile: "<<mobile<<endl;

            Line2.append(Line);
            //cout<<Line2;
            if (InFile.eof()){
                break;
                }
            InFile.close();
            }



            }


        }






    void setId(string id){
        Id=id;
    }
    void setName(string name){
        Name=name;
    }
    void setBirthday(string birthday){
        Birthday=birthday;
    }
    void setEmail(string email){
        Email=email;
    }
    void setMobile(string mobile){
        Mobile=mobile;
    }

    string getId(){
        return Id;
    }
    string getName(){
        return Name;
    }
    string getBirthday(){
        return Birthday;
    }
    string getEmail(){
        return Email;
    }
    string getMobile(){
        return Mobile;
    }

};

class Librarian{
private:
    string Id_Librarian;
    string Name_Librarian;
    string Password_Librarian;
    string Bookid;
    string Bookname;
    string Bookauthor;
    string Availablequantity;
    string Issuedquantity;

public:
    void setId_Librarian(string id_Librarian){
        Id_Librarian=id_Librarian;
    }
    void setName(string name_Librarian){
        Name_Librarian=name_Librarian;
    }
    void setPassword_Librarian(string birthday_Librarian){
        Password_Librarian=birthday_Librarian;
    }
    void setBookid(string bookid){
        Bookid=bookid;
    }
    void setBookname(string bookname){
        Bookname=bookname;
    }
    void setBookauthor(string bookauthor){
       Bookauthor=bookauthor;

    }
    void setAvailablequantity(string availablequantity){
        Availablequantity=availablequantity;

    }
    void setIssuedquantity(string issuedquantity){
        Issuedquantity=issuedquantity;

}

    string getId_Librarian(){
        return Id_Librarian;
    }
    string getName_Librarian(){
        return Name_Librarian;
    }
    string getPassword_Librarian(){
        return Password_Librarian;
    }
    string getBookid(){
        return Bookid;
    }
    string getBookname(){
        return Bookname;
    }
    string getBookauthor(){
        return Bookauthor;
    }
    string getAvailablequantity(){
        return Availablequantity;
    }

    string getIssuedquantity(){
        return Issuedquantity;
    }


    //Librarian(){
        void addbook(){
        ofstream Myfile("book.txt", ios::app);
        //string answer;
        //int i=1;
        //if (Myfile.is_open())
            //string line;
            while(Myfile.is_open()){
            //Myfile.open("Book.txt", ios::app);
            cin>>Bookid;
            cin>>Bookname;
            cin>>Bookauthor;
            cin>>Availablequantity;
            cin>>Issuedquantity;
            //cin>>answer;
            Myfile<<Bookid<<","<<Bookname<<","<<Bookauthor<<","<<Availablequantity<<","<<Issuedquantity<<"\n";
           // i++;
            //if(i<=5){
                //cout<<"\n";
            //}
           // else{
                //continue;
            Myfile.close();
           }
            }

           // if(Myfile.eof())
              //  exit(0);
            //}
            //}


            //}

           // else {


    //}

        //}

        void deletebook(){

        //ofstream temp;
        //temp.open("temp.txt");
            ifstream Myfile1("book.txt");
            ofstream File("delete.txt");
        //string gg;
            string Line;
            string Line_delete;
        //int pos=0;
            cout<<"what do you want to delete: \n";
            //cin>>Line_delete;
            getline(cin,Line_delete);
            while(getline(Myfile1,Line)){

                //Line.replace(Line.find(Line_delete),Line_delete.length(),"");
                //remove(Line);
 //while ((pos=text_2.find(text_plus_pre))!=std::string::npos ){
            //text_2.replace(pos,1,text_plus);
            //stringstream ss(Line);
                //getline(ss,'\n');
                    if(Line!=Line_delete){
                            File<<Line<<endl;

                    }

                    //File<<Line<<"\n";

            //Myfile1<<Bookid<<","<<Bookname<<","<<Bookauthor<<","<<Availablequantity<<","<<Issuedquantity<<"\n";

                //pos++;
        //}




            }
             cout<<Line_delete;

                Myfile1.close();
                File.close();
                remove("Book.txt");
                rename("delete.txt","book.txt");





                //Myfile1.close();




        //}

}

        void issuebook(){
            //cout<<"please enter the student id: \n";
            string student_info;
            string book_info;
            //cin.ignore();
            //cin>>student_info;
           // getline(cin,student_info);
            //getline(cin,book_info);
            string Line_student;
            char  line2[256];
            string line3;
            string line4;
            int line5;
            int ll;
            string L;

           // }

            stringstream degree(Availablequantity);
            int z=0;
            int book_id;
            int counter=0;
            int length;
            int ll_2;
            int pos=0;
            string old;
            string old_2;
            string str;
            cin>>book_id;
            degree>>z;

            //int p=std::stoi(Availablequantity);
            //int i=0;
            FILE *fp;
            ifstream Myfile("Student.txt");
            fp=fopen("book.txt","r");
            //ifstream Myfile1("Book.txt");
            while(getline(Myfile,Line_student,'\n')){

                    //if(i==1){
                        //break;
                //L=Line.split('\n',1)[0];
            //cout<<Line<<endl;
                    if (student_info == Line_student ){
                        cout<<"The student exist"<<endl;
                        //i++;
                    }


                    }

            while(fgets(line2,sizeof(line2),fp)){
                    counter++;
                    if(counter==book_id){
                        cout<<line2<<endl;
                        cout<<strlen(line2)<<endl;
                        cout<<line2[strlen(line2)-4]<<endl;
                    }
                        line4=line2[strlen(line2)-4];
                        line3 = line2[strlen(line2)-4];
                        stringstream ss(line3);
                        ss>>ll;
                        ll_2=ll-1;
                        cout << "line3 = " << line3<<endl;
                        //cout<<"llll"<<ll;
            }
                    if(line3 == "0"){
                        cout<<"copies available = "<< line3<<endl;

                    }
                    else{
                        cout << "the copies available = "<<line3<<endl;
                        cout<<"new int"<<ll<<endl;
                    }
            str=to_string(ll_2);
            cout<<"hhh"<<str;
            ofstream myfile3("Copy.txt");
            if(myfile3.is_open()){
                    old=pos=line3.find(line3);
            //while ((pos=line3.find(line3))!=std::string::npos ){
           // line3.replace(pos,1,ll_2);
            //}
                        //cout<<"line 4 = "<<line4<<endl;
                        //
                        //cout<<"new available copies = "<<ll<<endl;
                        //ll_2=ll.replace(14,1,"s");
                       // myfile3<<ll_2;
            }

                        //int length=sizeof(line2)/sizeof(char);
                        //length=sizeof(line2);
                        //cout<<length;



                //book_id++;
                   // switch(book_id){
                    //case :
                      //  cout<<line2;
                        //break;
                    //case 2:
                      //  cout<<line2;
                        //break;
                    //case 3:
                      //  cout<<line2;
                        //break;
                //if(book_info==line2[counter]){
                    //cout<<line2<<endl;
                    //cout<<Line_student;
                    //}
                   // default:
                       // cout<<line2;
                       //cout<<"aaaaaaa"<<length;

                        //else{
                      //  cout<<"copies";
                   // }

                   // int ll=line2[strlen(line2)]-1;
                    //stringstream degree1(ll);
                    //degree1>>ll;

//
                   // cout<<line2;

                    //}

                Myfile.close();
                fclose(fp);
                //myfile3.close();

            }
              //  if( z <= 0 ){
                   // cout<<"sorry there are no available copy"<<endl;
                //}

            //}
           // cout<<"nnnnn"<<z<<endl;
           // cout<<"zzzzz"<<Availablequantity;




            //while()
            //if(id1==(Student.Id)){
                //cout<<"exists";





       // }
       void viewbooks(){
           ifstream Myfile4("book.txt");
           cout<<"do you want to view : "<<endl;
           string option;
           cin>>option;
           string Lines;
           if (option=="yes"){

            while(getline(Myfile4,Lines))
                cout<<Lines<<endl;
           }

       }
       void searchbook(){
        ifstream Myfile_read("book.txt");
        int counter_1=0;
        string Line_to_read;
        int book_id_2;
        cout<<"please enter the book id: "<<endl;
        cin>>book_id_2;
        while(getline(Myfile_read,Line_to_read)){
            counter_1++;

            if(counter_1==book_id_2){
            cout<<Line_to_read<<endl;
            }

        }
        }
        void login(){
        ifstream Myfile6("librarian.txt");
        string line_reading;
        string info;
        cout<<"please enter the librarian info :"<<endl;
        cout<<endl;
        cin>>info;
        while(getline(Myfile6,line_reading)){
            if (info==line_reading){
                cout<<"you are verified ";
                break;
            }
            else{
                cout<<"sorry you are not allowed";
                break;
            }

        }



        }
        void logout(){
        string option2;
            login();
        cout<<endl;
        cout<<"do you want to logout :"<<endl;
        cin>>option2;
        if(option2=="yes"){
            exit(1);
        }
        }

};
class Admin{

private:
    string Admin_id;
    string Admin_name;
    string Admin_password;
    string Student_id;
    string Student_name;
    string Student_birthdate;
    string Student_email;
    string Student_number;
    string Lib_id;
    string Lib_name;
    string Lib_password;


public:
    void setAdmin_id(string admin_id){
        Admin_id=admin_id;
    }
    void setAdmin_name(string admin_name){
        Admin_name=admin_name;
    }
    void setAdmin_password(string admin_password){
        Admin_password=admin_password;
    }
    string getAdmin_id(){
        return Admin_id;
    }
    string getAdmin_name(){
        return Admin_name;
    }
    string getAdmin_password(){
        return Admin_password;
    }

    void adds_student_admin(){


        ofstream Myfile("Student.txt", ios::app);

        while(Myfile.is_open()){

        cin>>Student_id;
        cin>>Student_name;
        cin>>Student_birthdate;
        cin>>Student_email;
        cin>>Student_number;

        Myfile<<"\n"<<Student_id<<","<<Student_name<<","<<Student_birthdate<<","<<Student_email<<","<<Student_number<<"\n";
        Myfile.close();
        }
        }

void Remove_student(){
    ifstream Myfile1("Student.txt");
    ofstream File("delete1.txt");
    string Line_read;
    string Line_delete;
    cout<<"what do you want to delete: \n";
    //cin.ignore();
    getline(cin,Line_delete);
        while(getline(Myfile1,Line_read)){
            if(Line_read!=Line_delete){
                File<<Line_read<<endl;


            }
}

        Myfile1.close();
        File.close();

        remove("Student.txt");
        rename("delete1.txt","Student.txt");
               cout<<Line_delete;

}
void add_Librarian_admin(){
    ofstream Myfile("Librarian.txt", ios::app);

    while(Myfile.is_open()){

    cin>>Lib_id;
    cin>>Lib_name;
    cin>>Lib_password;

    Myfile<<Lib_id<<","<<Lib_name<<","<<Lib_password<<"\n";
    Myfile.close();
    }
    }
void Remove_Librarain(){
    ifstream Myfile1("librarian.txt");
    ofstream File("delete2.txt");
    string Line_read_lib;
    string Line_delete_lib;
    cout<<"what do you want to delete: \n";
    //cin.ignore();
     getline(cin,Line_delete_lib);
        while(getline(Myfile1,Line_read_lib)){
            //getline(cin,Line_delete_lib);
            if(Line_read_lib!=Line_delete_lib){
                File<<Line_read_lib<<endl;


            }
}

        Myfile1.close();
        File.close();

        remove("librarian.txt");
        rename("delete2.txt","librarian.txt");
               cout<<Line_delete_lib;

}
void add_admin(){
    ofstream Myfile("Admin.txt", ios::app);

    while(Myfile.is_open()){

    cin>>Admin_id;
    cin>>Admin_name;
    cin>>Admin_password;

    Myfile<<Admin_id<<","<<Admin_name<<","<<Admin_password<<"\n";
    Myfile.close();
    }
    }


void Remove_Admin(){
ifstream Myfile1("Admin.txt");
ofstream File("delete3.txt");
string Line_read_adm;
string Line_delete_adm;
cout<<"what do you want to delete: \n";
//cin.ignore();
getline(cin,Line_delete_adm);
while(getline(Myfile1,Line_read_adm)){
            //getline(cin,Line_delete_lib);
    if(Line_read_adm!=Line_delete_adm){
        File<<Line_read_adm<<endl;


    }
}

    Myfile1.close();
    File.close();

    remove("Admin.txt");
    rename("delete3.txt","Admin.txt");
    cout<<Line_delete_adm;

}


};
class book{

private:
    string Bookid;
    string Bookname;
    string Bookauthor;
    string Bookquantity;
    string issuedquantity;
public:
    void setBookid(string bookid){
        Bookid=bookid;
    }
    void setBookname(string bookname){
        Bookname=bookname;
    }

    void setBookauthor(string bookauthor){
        Bookauthor=bookauthor;
    }

    void setBookquantity(string bookquantity){
        Bookquantity=bookquantity;
    }

    void setBookissuedqantity(string bookissuedquantity){
        bookissuedquantity=bookissuedquantity;
    }
    string getBookid(){
        return Bookid;
    }
    string getBookname(){
        return Bookname;
    }
    string getBookauthor(){
        return Bookauthor;
    }


};

int main()
{
//Student S;
Librarian L;
Admin A;
A.add_Librarian_admin();
//A.Remove_Librarain();
//A.add_admin();
//A.Remove_Admin();
//A.adds_student_admin();
//A.Remove_student();
//L.addbook();
//cout<<S.getId();
//L.deletebook();
//g
//L.issuebook();
//L.viewbooks();
//L.searchbook();
//L.login();
L.logout();
//for(i =0 ; i<50 ;i++){


/*
    FILE*fp;
    fp=fopen("book.txt","r");
    char line2[256];
//    Myfile1*f;
    //if(Myfile1.good()){

        //while(getline(Myfile1,line2)){
        //getline(Myfile1,line2);
            //int L=line2.length();
            //if (line2=="3,mm,mohamed,66,3")

            //{

            //cout<<line2[L-1]<<"\n";
            //}
            //cout<<line2.length();
        //}
//}
        int y=0;
        while(fgets(line2,sizeof(line2),fp)){
            y++;
            if(y==2){
                cout<<line2;
            }
        }

        fclose(fp);
*/
    return 0;
}

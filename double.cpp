#include <iostream>
#include<iomanip>
#include <fstream>
#include<windows.h>
#include <cstdlib>
#include <algorithm>
using namespace std;
void add_front_double();
void add_middle_right_double(int location);
void add_middle_left_double(int location);
void add_end_double();
void delete_front_double();
void delete_middle_double(int myid);
void delete_end_double();
void search_datas(int myid);
void update_datas();
void display_by_gpa();
void display_whole();
void search_datas();
void sort_datas();
void intro();
void read();
void write();
void list_option();
int checkExist(int che);
long int text_animation2(char a[100])
{
    int i;
    double k;
    for (i=0; a[i]!='\0';++i)
    {
        for(k=0;k<10000000; ++k);
        cout<<a[i];
    }
    cout<<a[i];
}
struct student{
string name;
int id;
int age;
int year;
float GPA;
int data;
int roll;
student *next;
student *prev;
};
student *head=NULL,*tail=NULL;
int main()
{
        system("color a");
        char c;
        system("cls");
        intro();
        list_option();

    return 0;
}
void list_option(){
        int n=1;
do{

        cout<<endl<<endl<<endl;
       // system("color c");
        cout<<"\t\t\t    _______________________________________________________"<<endl;
		cout<<"\t\t\t||                        MAIN MENU                        ||"<<endl;
		cout<<"\t\t\t|| 1.  ADD_FRONT data in to the DOUBLE_LINKED_LIST.        ||"<<endl;
		cout<<"\t\t\t|| 2.  ADD MIDDLE data in to the middle DOUBLE_LINKED_LIST.||"<<endl;
		//cout<<"\t\t\t|| 3.  ADD MIDDLE data in to the left DOUBLE_LINKED_LIST.  ||"<<endl;
		cout<<"\t\t\t|| 4.  ADD END data in to the DOUBLE_LINKED_LIST.          ||"<<endl;
		cout<<"\t\t\t|| 5.  DELETE data FROM the FRONT OF DOUBLE_LINKED_LIST.   ||"<<endl;
		cout<<"\t\t\t|| 6.  DELETE data FROM the MIDDLE OF DOUBLE_LINKED_LIST.  ||"<<endl;
		cout<<"\t\t\t|| 7.  DELETE data FROM the END OF DOUBLE_LINKED_LIST.     ||"<<endl;
		cout<<"\t\t\t|| 8.  SEARCH DATAS BY THE ID NUMBER.                      ||"<<endl;
		cout<<"\t\t\t|| 9.  UPDATE DATAS BY THE ID NUMBER.                      ||"<<endl;
		cout<<"\t\t\t|| 10  SORT DATAS BY THE ID NUMBER.                        ||"<<endl;
		cout<<"\t\t\t|| 11. DISPLAY THE GPA GREATER THAN 3.0 .                  ||"<<endl;
		cout<<"\t\t\t|| 12. DISPALY AS A WHOLE.                                 ||"<<endl;
		cout<<"\t\t\t|| 13. READ FROM FILE                                      ||"<<endl;
		cout<<"\t\t\t|| 14. EXIT THE PROGRAM                                    ||"<<endl;
		cout<<"\t\t\t||_________________________________________________________||"<<endl;
		cout<<endl<<endl;
        cout<<"\tEnter your choice: ";
        cin>>n;
        if(n==1)
        add_front_double();
        else if(n==2){
         int location;
         cout<<"\t\t\tEnter the roll number position after which the element to be added: ";
         cin>>location;
         add_middle_right_double(location);
         break;

        }
        else if(n==3){
         int location;
         cout<<"\t\t\tEnter the roll number position before which the element to be added: ";
         cin>>location;
         add_middle_left_double(location);
         break;

        }
        else if(n==4)
        add_end_double();
        else if(n==5)
        delete_front_double();
        else if(n==6){
         int yourId;
         cout <<"\t\t\tPLEASE ENTER THE ID NUMBER YOU WANT TO DELETE:"<<" ";
         cin>>yourId;
         delete_middle_double(yourId);
        }
        else if(n==7)
        delete_end_double();
        else if(n==8){
          int yourid;
          cout << "\t\t\tPLEASE ENTER THE ID YOU WANT TO SEARCH"<<endl;
          cin>>yourid;
          search_datas(yourid);
        }

        else if(n==9)
        update_datas();
        else if(n==10)
        sort_datas();
        else if(n==11)
        display_by_gpa();
        else if(n==12)
        display_whole();
        else if(n==13)
        read();
        else if(n==14){
          n=0;
           system("cls");
           system("color e");
              text_animation2("\t\t THIS SOFTWARE USEFUL FOR SAVING PAPER AND TIME.\n\n");
              text_animation2("\t\t THIS SOFTWARE CAN REGISTER AND STORE FULL STUDENT INFORMATION.\n\n");
              text_animation2("\t\t THIS SOFTWARE HAVE REGISTER, LIST, MODIFY/EDIT AND REMOVE STUDENT INFORMATION. \n\n");
              text_animation2("\t\t THIS SOFTWARE CAN BE USED IN COLLAGE, HIGHSCHOOL, UNIVERSITIES....\n\n\n\n\n\n");
              text_animation2("\t\t THANK YOU FOR USING THIS SOFTWARE.\n\n");
              // system("pause");
             cout << "\n\n";
             cout<<"\t   GROUP MEMBERS(DEVELOPERS)";
             cout << "\n\n";
             cout << "\t   NAME                               ID                 PHONE NUMBER \n\n";
             cout << "\t   1. BIRUK ABERE                 GUE/01182/11          +251974461688  \n\n";
             cout << "\t   2. BINIYAM YOSEF               GUE/01480/11          +251946230602   \n\n";
             cout << "\t   3. ABEL WONDMU                 GUE/01424/11          +251965311410    \n\n";
              cout << "\t  4. AMANUEL CHALACHEW           GUE/01479/11          +251941257770     \n\n";
              cout << "\n\n";
             cout<<"\t\t\t\t\t\t\t\t\t   SUBMITED TO:   SEID YESUF\n";
             cout<<"\t\t\t\t\t\t\t\t\t   SUBMITED DATE: 20/06/2012 ";

              cout << "\n\n";
        }

        else
        cout << "enter the appropriate number " << endl;

    }while(n!=0);
}
void intro()

{
        system("cls");//for display in new page

    cout << "\n\n\n";
     Sleep(300);
    cout << "\t\t * * *  **** *      ****  ***   ***   ****   *****  ***    ****  *****   **** " << endl;
     Sleep(300);
    cout << "\t\t * * * *     *     *     *   * * * * *         *   *   *   *     *    *  *     " << endl;
     Sleep(300);
    cout << "\t\t * * * ***** *     *     *   * * * * *****     *   *   *   ****  *  *    **** " << endl;
     Sleep(300);
    cout << "\t\t * * * *     *     *     *   * * * * *         *   *   *      *  *   *      * " << endl;
     Sleep(300);
    cout << "\t\t  ***   **** *****  ****  ***  * * *  ****     *    ***    ****  *     * ****  " << endl;
     Sleep(300);
    cout << "\n";
    cout << "\n\n\n";

         text_animation2("\t\t\t\t=============================================.\n\n");
         text_animation2("\t\t\t\tTHIS IS STUDENT REPORT CARD MANEGEMENT SYSTEM. \n\n");
         text_animation2("\t\t\t\t============================================= \n\n");
}

void add_front_double(){
 student *TEMP=new student;
 cout <<"\t\t\tPLEASE ENTER YOUR NAME:"<<" ";
 cin>>TEMP->name;
 cout<<"\t\t\tPLEASE ENTER YOUR ID:"<<" ";
 cin>>TEMP->id;
 if(checkExist(TEMP->id)){
     //system("color 04");
     cout<<"\t\t\t\tThere is a student with this id. "<<endl;
      cout<<"\t\t\tPLEASE RE-ENTER YOUR ID:"<<" ";
      cin>>TEMP->id;
    }
 cout << "\t\t\tPLEASE ENTER YOUR AGE:"<<" ";
 cin>>TEMP->age;
 cout << "\t\t\tPLEASE ENTER YOUR ROLL NUMBER:"<<" ";
 cin>>TEMP->roll;
 cout << "\t\t\tPLEASE ENTER YOUR YEAR:"<<" ";
 cin>>TEMP->year;
 cout << "\t\t\tPLEASE ENTER YOUR GPA:"<<" ";
 cin>>TEMP->GPA;
 TEMP->next=NULL;
 TEMP->prev=NULL;
 if(head==NULL)
   head=tail=TEMP;
 else{
  TEMP->next=head;
  TEMP->prev=TEMP;
  head=TEMP;

 }
 write();
 list_option();
}
void add_middle_right_double(int position){
student *TEMP=new student;
cout<<"\t\t\tPLEASE ENTER YOUR NAME:"<<" ";
cin>>TEMP->name;
cout<<"\t\t\tPLEASE ENTER YOUR ID:"<<" ";
cin>>TEMP->id;
 if(checkExist(TEMP->id)){
     //system("color 04");
     cout<<"\t\t\t\tThere is a student with this id. "<<endl;
      cout<<"\t\t\tPLEASE RE-ENTER YOUR ID:"<<" ";
      cin>>TEMP->id;
    }
cout<<"\t\t\tPLEASE ENTER YOUR AGE:" << " ";
cin>>TEMP->age;
cout <<"\t\t\tPLEASE ENTER YOUR ROLL NUMBER:"<<" ";
cin>>TEMP->roll;
cout << "\t\t\tPLEASE ENTER YOUR YEAR:"<<" ";
cin>>TEMP->year;
cout<<"\t\t\tPLEASE ENTER YOUR GPA:"<<" ";
cin>>TEMP->GPA;

    TEMP->next=NULL;
    TEMP->prev=NULL;
    if(head==NULL){
      head=tail=TEMP;

    }
    else if(head->roll==position){
        if(head->next==NULL)
        tail=TEMP;
        TEMP->prev=head;
        TEMP->next=head->next;
        (head->next)->prev=TEMP;
        head->next=TEMP;

    }
    else{
        student *TEMP2=head;
        while(TEMP2->roll!=position){
            TEMP2=TEMP2->next;
        }
        if(TEMP2->next==NULL)
            tail=TEMP;
        TEMP->prev=TEMP2;
        TEMP->next=TEMP2->next;
        TEMP2->next->prev=TEMP;
        TEMP2->next=TEMP;


    }
    write();
    list_option();

}
void add_middle_left_double(int position){
student *TEMP = new student;
cout<<"\t\t\tPLEASE ENTER YOUR NAME:"<<" ";
cin>>TEMP->name;
cout<<"\t\t\tPLEASE ENTER YOUR ID:"<<" ";
cin>>TEMP->id;
 if(checkExist(TEMP->id)){
     //system("color 04");
     cout<<"\t\t\t\tThere is a student with this id. "<<endl;
      cout<<"\t\t\tPLEASE RE-ENTER YOUR ID:"<<" ";
      cin>>TEMP->id;
    }
cout<<"\t\t\tPLEASE ENTER YOUR AGE:" <<" ";
cin>>TEMP->age;
cout << "\t\t\tPLEASE ENTER YOUR ROLL NUMBER:"<<" ";
cin>>TEMP->roll;
cout << "\t\t\tPLEASE ENTER YOUR YEAR:"<<" ";
cin>>TEMP->year;
cout<<"\t\t\tPLEASE ENTER YOUR GPA:"<<" ";
cin>>TEMP->GPA;

TEMP->next=NULL;
TEMP->prev=NULL;
if(head==NULL)
    head=tail=TEMP;
else{
    if(head->roll==position){
        TEMP->next=head;
        head->prev=TEMP;
        head=TEMP;
    }
    else{
        student *TEMP2=head;
        student *TEMP3;
        while(TEMP2->roll!=position){
            TEMP3=TEMP2;
            TEMP2=TEMP2->next;
        }
        TEMP->next=TEMP3->next;
        TEMP3->next=TEMP;
        TEMP->prev=TEMP3->prev;
        TEMP2->prev=TEMP;
    }
}
        write();
       list_option();
}
void add_end_double(){
 student *TEMP= new student;
 cout <<"\t\t\tPLEASE ENTER YOUR NAME:" << " ";
 cin>>TEMP->name;
 cout<<"\t\t\tPLEASE ENTER YOUR ID:" << " ";
 cin>>TEMP->id;
  if(checkExist(TEMP->id)){
     //system("color 04");
     cout<<"\t\t\t\tThere is a student with this id. "<<endl;
      cout<<"\t\t\tPLEASE RE-ENTER YOUR ID:"<<" ";
      cin>>TEMP->id;
    }
 cout << "\t\t\tPLEASE ENTER YOUR AGE:" << " ";
 cin>>TEMP->age;
 cout << "\t\t\tPLEASE ENTER YOUR ROLL NUMBER:"<<" ";
 cin>>TEMP->roll;
 cout << "\t\t\tPLEASE ENTER YOUR YEAR:" << " ";
 cin>>TEMP->year;
 cout << "\t\t\tPLEASE ENTER YOUR GPA:" << " ";
 cin>>TEMP->GPA;
 TEMP->next=NULL;
 TEMP->prev=NULL;
 if(head==NULL)
    head=tail=TEMP;
  else{
    tail->next=TEMP;
    TEMP->prev=tail;
    tail=TEMP;

  }
  write();
  list_option();
}
void delete_front_double(){
    student *TEMP;
   if(head==NULL)
    cout<< "\t\t\tNO DATA INSIDE"<<endl;
    else{
    TEMP=head;
    head=head->next;
    head->prev=NULL;
    delete TEMP;
    cout << "\t\t\tTHE DATA DELETED SUCCESSFULLY:"<<endl;


 }
  write();
  list_option();
}
void delete_middle_double(int myid){
   // student *TEMP,*TEMP2;
    if(head==NULL)
    cout << "\t\t\tNO DATA INSIDE" << endl;
    else{
    student *TEMP=head,*TEMP2;
    while(TEMP->id!=myid){
        TEMP2=TEMP;
        TEMP=TEMP->next;

    }
    TEMP2->next=TEMP->next;
    (TEMP->next)->prev=TEMP2;
    delete TEMP;
    cout << "\t\t\tTHE DATA DELETED SUCCESSFULLY"<<endl;

    }
    write();
    list_option();

    ///////////////////////

}
void delete_end_double(){
    student *TEMP;
    if(tail==NULL)
    cout << "\t\t\tNO DATA INSIDE" <<endl;
    else{
       TEMP=tail;
       tail=tail->prev;
       tail->next=NULL;
       delete TEMP;
       cout << "\t\t\tTHE DATA DELETED SUCCESSFULLY"<<endl;
       }

       write();
       list_option();
}
void search_datas(int myid)
{
    student *temp=head;
	while(temp!=NULL)
{
	if(temp->id==myid)
    {
        int n;
        //cout<<endl<<endl;
        cout<<"\t\t\tA student with ID N0 "<<temp->id<<" is found"<<endl;
        cout<<"\t\t\tYou want to see this student information ?(1(Yes)/0(N0) :"<<" ";
        cin>>n;
        if(n==1)
        {
        cout<<"\n\t\t\tYOUR  Name : "<<temp->name;
		cout<<"\n\t\t\tYOUR  AGE: "<<temp->age<<endl;
		cout<<"\n\t\t\tYOUR  ROLL : "<<temp->roll<<endl;
		cout<<"\n\t\t\tYOUR  YEAR : "<<temp->year<<endl;
		cout<<"\n\t\t\tYOUR  GPA : "<<temp->GPA<<endl;
		cout<<"\n\t\t\t================"<<endl;
        }
        else if(n==0)
        {
            main();
        }
        break;
    }
    else if(temp->id!=myid)
    {
		temp = temp->next;
    }
    else
    {
        cout<<"\t\t\tThe Student is not found"<<endl;
    }
}
list_option();
}
void update_datas(){
     string Sname;
     int SID;
     int Sage;
     int Syear;
     float SGPA;
    if (head == NULL)
       {
    	//system("cls");
        cout<<"\t\t\tList is empty"<<endl;
       }else
	   {
        cout<<endl<<endl;
		cout<<"\n\n\t\t\tEnter ID to modify Your Data:";
		cin>>SID;
		struct student *cur=head;
		if(cur->id==SID)
            cout<<"\t\t\tTHE ID FOUND"<<endl;
        else
            cout<<"\t\t\tRECORD NOT FOUND"<<endl;
		while(cur->id!=SID){
			cur=cur->next;
		}
		cout<<"\t\t\t================"<<endl;
		cout<<"\n\t\t\tOld Name : "<<cur->name<<endl;
		cout<<"\n\t\t\tOld age : "<<cur->age<<endl;
		cout<<"\n\t\t\tOld age : "<<cur->roll<<endl;
		cout<<"\n\t\t\tOld YEAR : "<<cur->year<<endl;
		cout<<"\n\t\t\tOld GPA : "<<cur->GPA<<endl;
		cout<<"\t\t\t================"<<endl;
		char mod;
		cout<<"\n\t\t\tWANT TO MODIFY YOUR DATA ..?? (y/n): ";
	     cin>>mod;
	     if(mod=='y'|| mod=='Y')
	     {
         cout<<"\n\t\t\tEnter new Name:";
		 cin>>Sname ;
		 cur->name=Sname;
		cout<<"\n\t\t\tEnter new age:";
		cin>>Sage;
		cur->age=Sage;
		cout<<"\n\t\t\tEnter Your New Year:";
		cin>>Syear;
		cur->year=Syear;
		cout<<"\n\t\t\tEnter Your New GPA:";
		cin>>SGPA;
		cur->GPA=SGPA;
        ofstream myfile("students_Record_double.txt",ios::in);
        myfile << "ID \t\tName t\t\t Age \t\t Roll \t\t Year \t\t\t GPA \n";
        myfile<<cur->id<<"\t\t"<<cur->name<<"\t\t\t"<<cur->age<<"\t\t"<<cur->roll<<"\t\t"<<cur->year<<"\t\t\t"<<cur->GPA<<"\n";
        myfile.close();
		}
    cout<<"\n\n\t\t\tFile saved!\n";

 }
 list_option();
 }
void display_by_gpa(){
student *temp=head;
while(temp!=NULL){
        if(temp->GPA>=3.00){
        cout<<"\n\n\n\t\t\tYOUR Name : "<<temp->name<<endl;
		cout<<"\n\n\n\t\t\tYOUR  age : "<<temp->age<<endl;
		cout<<"\n\n\n\t\t\tYOUR  age : "<<temp->roll<<endl;
		cout<<"\n\n\n\t\t\tYOUR  YEAR : "<<temp->year<<endl;
		cout<<"\n\n\n\t\t\tYOUR  GPA : "<<temp->GPA<<endl;
		cout<<"\t\t\t======================"<<endl;

        }
       temp=temp->next;
}
cout << endl;
list_option();
}

void display_whole(){
student *temp=head;
/*
cout << endl << setw(15) << "Name"  << setw(15) << "age"<< endl;
for(int i=0; i<-25; i++)
    cout << " ";
for(int i=0; i<=25; i++)
    cout << "=";*/
while(temp!=NULL){
//cout << endl << setw(15) << "Name" << " " << temp->name  << " " << setw(15) << "age"  << " " << temp->age<<" "<<setw(15)<<"year"<<temp->year<<" "<<setw(15)<<temp->GPA;
        cout<<"\n\n\n\t\t\tYOUR Name : "<<temp->name<<endl;
		cout<<"\n\n\n\t\t\tYOUR  Age : "<<temp->age<<endl;
		cout<<"\n\n\n\t\t\tYOUR  ROLL : "<<temp->roll<<endl;
		cout<<"\n\n\n\t\t\tYOUR  YEAR : "<<temp->year<<endl;
		cout<<"\n\n\n\t\t\tYOUR  GPA : "<<temp->GPA<<endl;
		cout<<"\t\t\t================================="<<endl;
        temp=temp->next;
}
cout << endl;
list_option();
}

void write(){
ofstream myfile ("students_Record_double.txt",ios::app);
    if (myfile.is_open())
        {
        myfile << "ID \t\tName \t\t\t Age \t\t\t Roll \t\t\t Year \t\t\t GPA \n";
        struct student *p=head;
        int c=0;          //   c for count products
		while(p!=NULL)
		{
			myfile<<p->id<<"\t\t"<<p->name<<"\t\t\t"<<p->age<<"\t\t\t"<<p->roll<<"\t\t\t"<<p->year<<"\t\t\t"<<p->GPA<<"\n";
			p=p->next;
			c=c+1;
		}
		myfile<<"\nTHE TOTAL NUMBER OF STUDENTS IS : "<<c << endl;
		}
      myfile.close();
   // system("cls");
    cout<<"\n\n\t\t\tFile saved!\n";

     }
   void read(){
        string line;
        ifstream myfile("students_Record_double.txt");
        if (myfile.is_open())
         {
         while (getline(myfile,line) )
         {
          cout << line << '\n';
          }
            cout<<"\n\n";
            myfile.close();
         }
       else cout << "Unable to open file\n\n";
       list_option();
}
void sort_datas(){
 system("cls");
    student *s;
//    student value = new student;
    student *temp= new student;
    if(head == NULL)
    {
        system("color 04");
        cout<<"The List is empty"<<endl;
        return;
    }
    temp=head;
    while(temp != NULL)
    {
        for( s=temp->next ; s!=NULL; s=s->next )
        {
            if( temp->id > s->id)
            {
                swap<char>(temp->name,s->name);
                swap<int>(temp->age,s->age);
                swap<int>(temp->id,s->id);
                swap<float>(temp->GPA,s->GPA);
                swap<int>(temp->year,s->year);
            }
        }
        temp = temp ->next ;
    }
    cout<<"\t\t\t\tSUCCESSFULLY SORTED!!!!!! ";
    cout<<"\n\t\t\t";
    system("pause");

}
int checkExist(int che)
{
 //  student *temp=new student;
   student *temp = NULL;
   student *curr= new student;
    curr = head;
    while(curr != NULL){
        if(curr->id == che){
            temp = curr;
            return true;
            }
        curr = curr->next;
    }
    return false;
    }





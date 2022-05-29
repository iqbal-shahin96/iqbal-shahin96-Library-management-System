#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

class library
{
	char title[100];
	char a_name[100];
	char name[100];
	char number[11];
	char choice;
	char f1[500];
	char f2[500];
	int stock;
	int edition;
	int id;
	int age;
	int validity;
	int code;
	int payment;
	int cheque_num;

	public:
		void header();
		void add_books();
		void menu();
		void password();
		void add_member();
		void issue();
		void deposit();
		void members_ac();
		void members_count();
		void book_stock();
		void remove_book();
		void remove_member();
		void list_issue();
		void update_issue();
};
int main()
{
    system("color B1");
	library obj;
	obj.header();
	obj.password();
	getch();
	return 0;

}

void library :: header()
{
	cout<<"\t\t\t\t\t"<<"               "<<"\n\n"<<endl;
    cout<<"\t\t\t\t\t"<<"        ***********        "<<endl;
    cout<<"\t\t\t\t\t"<<"           *****           "<<endl;
    cout<<"\t\t\t\t\t"<<"  &&&&   #########   &&&&  "<<endl;
    cout<<"\t\t\t\t\t"<<"   &&  _ # *###* # _  &&   "<<endl;
    cout<<"\t\t\t\t\t"<<"   && |_)  *###*  |_| &&   "<<endl;
    cout<<"\t\t\t\t\t"<<"   && |_)  *###*  | | &&   "<<endl;
    cout<<"\t\t\t\t\t"<<"   &&      #####      &&   "<<endl;
    cout<<"\t\t\t\t\t"<<"   &&&&&&&&*****&&&&&&&&   "<<endl;
    cout<<"\t\t\t\t\t"<<"    &&&&&&&*****&&&&&&&    "<<endl;
    cout<<"\t\t\t\t\t"<<"           *****           "<<endl;
    cout<<"\t\t\t\t\t"<<"        ***********        "<<endl;
    cout<<"\t\t\t\t\t"<<"               "<<"\n\n"<<endl;
    cout<<"\t"<<"     ========================================================================"<<endl;
    cout<<"\t\t\t"<<"   Welcome to IUBAT Library Management System"<<endl;
    cout<<"\t"<<"     ========================================================================"<<endl;


}

void library :: menu()
{
	int choice;
	point2:
	header();
    cout<<"\tWhich services are you looking for?"<<endl;
	cout<<"\t        1. Add new books"<<endl;
	cout<<"\t        2. Add new members"<<endl;
	cout<<"\t        3. Remove a book"<<endl;
	cout<<"\t        4. Remove a member"<<endl;
	cout<<"\t        5. Issue a book"<<endl;
	cout<<"\t        6. Deposite a book"<<endl;
	cout<<"\t        7. View members account"<<endl;
	cout<<"\t        8. View stock"<<endl;
	cout<<"\t        9. List of books issued"<<endl;
	cout<<"\t        10. Exit"<<endl<<endl;

	cin>>choice;
	if(choice==10)
	{
			cout<<"\n\t\t! The program will be closed.....";
			getch();
			abort();
	}
	if(choice<0 || choice>10)
	{
		cout<<"\n\t  invalid input...  please try again  "<<endl<<endl;
		goto point2;
	}
	else
	{
		if(choice==1)
		{
			add_books();
		}
		if(choice==2)
		{
			add_member();
		}
		if(choice==3)
		{
			remove_book();
		}
		if(choice==4)
		{
			remove_member();
		}
		if(choice==5)
		{
			issue();
		}
		if(choice==6)
		{
			deposit();
		}
		if(choice==7)
		{
			members_ac();
		}
		if(choice==8)
		{
			book_stock();
		}
		if(choice==9)
		{
			list_issue();
		}
	}
}
void library :: add_books()
{
        system("cls");
		point :
		cout<<endl;
		ofstream outf;
		outf.open("books.txt", ios :: app);
        cout<<"\t\t\t=========================================="<<endl;
		cout<<"\t\t\t             Adding    Books              "<<endl;
		cout<<"\t\t\t==========================================\n\n"<<endl;
		cout<<"\t\t Enter the ID of the book (Any Integer Number) : ";
		cin>>id;
		cout<<"\t\t Enter the title of the book (Use Underscore for the Space) : ";
		cin>>title;
		cout<<"\t\t Enter the author name of the book (Use Underscore for the Space) : ";
		cin>>a_name;
		cout<<"\t\t Enter the edition of the book (Only Numbers) : ";
		cin>>edition;
		cout<<"\t\t Enter the quantity of the book : ";
		cin>>stock;
		outf<<id<<"\n"<<title<<"\t\t"<<a_name<<"\t"<<edition<<"\t"<<stock<<endl;
		cout<<"\n\n\t\t The book is added succesfully !"<<endl<<endl;
		outf.close();
		point1:
		cout<<"\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
		cin>>choice;
		if(choice=='y')
		{
			goto point;
		}
		if(choice=='m')
		{
		    system("cls");
			menu();
		}
		if(choice=='n')
		{
			cout<<"\n\t\t  The program will be terminated............";
			getch();
			abort();
		}
		else
		{
			cout<<"\n\n\t\t  invalid input ... try again !"<<endl<<endl;
			goto point1;
		}

}
void library :: password()
{
	int pass,flag=3;

	point:
	cout<<"\t\t Enter the password : ";
	cin>>pass;
	flag--;
	if(pass!=18103292)
	{
		if(flag>0 && flag<=3)
		{
			cout<<"\n\t\t  wrong password...  try again "<<endl<<endl;
			cout<<"\t\t  you have "<<flag<<" chance to enter right password "<<endl<<endl;
			goto point;
		}
		else
		{
			cout<<"\n\t\t ! You have exceed the limit to enter the right password !"<<endl;
			cout<<"\t\t ! The program will be terminated............";
			getch();
			abort();
		}
	}
	else
	{
	    system("cls");
		menu();
	}
}
void library :: add_member()
{
    system("cls");
	po9 :
	ofstream outf;
	outf.open("members.txt", ios :: app);
    cout<<"\t\t\t=========================================="<<endl;
    cout<<"\t\t\t             Adding    Members            "<<endl;
    cout<<"\t\t\t==========================================\n\n"<<endl;
	cout<<"\n\t\t Enter the name (Use Underscore for the Space) : ";
	cin>>name;
	cout<<"\t\t Enter the age : ";
	cin>>age;
	cout<<"\t\t Enter the validity in years : ";
	cin>>validity;
	cout<<"\t\t Enter the telephone number : ";
	cin>>number;
	cout<<"\t\t Enter the ID of members : ";
	cin>>code;
	outf<<code<<"\n"<<name<<"\t"<<number<<"\t"<<age<<"\t"<<validity<<endl;
	cout<<"\n\n\t\t The member is entered successfully "<<endl<<endl;
	outf.close();
	po:
	cout<<"\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
	cin>>choice;
	if(choice=='y')
	{
		goto po9;
	}

	if(choice=='m')
	{
        system("cls");
		menu();
	}

	if(choice=='n')
	{
		cout<<"\n\t\t  The program will be terminated........";
		getch();
		abort();
	}
	else
	{
		cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
		goto po;
	}

}
void library :: issue()
{
    system("cls");
	int flag=1,flag2=1;
	char is[50],isb[50],c[50],co[50],cod[50],sh[50];
	issu:
	cout<<endl;
	ifstream inf;
	inf.open("books.txt");
    cout<<"\t\t\t=========================================="<<endl;
    cout<<"\t\t\t             Issue  Books                "<<endl;
    cout<<"\t\t\t==========================================\n\n"<<endl;
	cout<<"\n\t\t enter the id number of the book : ";
	cin>>isb;
	while(!inf.eof())
	{
		inf.getline(is,50);
		if(!strcmp(is,isb))
		{
			cout<<"\n\t\t  Book is Available!!!"<<endl<<endl;
			cout<<"\n\t\t id\tname of book\tauthor\tedition\tquantity\n";
			inf.getline(sh,50);
			cout<<"\n\t\t "<<is<<"\t"<<sh<<endl<<endl<<endl;
			flag=0;
			break;
		}
	}
	inf.close();
	if(flag == 1 || flag == -1)
	{
			cout<<"\n\t\t Book is Available!!!"<<endl<<endl;
			pre :
			cout<<"\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
			cin>>choice;
			if(choice=='y')
			{
				goto issu;
			}
			if(choice=='m')
			{
			    system("cls");
				menu();
			}
			if(choice=='n')
			{
				cout<<"\n\t\t! The program will be terminated............";
				getch();
				abort();
			}
			else
			{
				cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
				goto pre;
			}
	}
	inf.open("members.txt");

	cout<<"\t\t Enter the ID of member : ";
	cin>>co;

	while(!inf.eof())
	{
		inf.getline(c,50);
		if(!strcmp(c,co))
		{
			cout<<"\n\t\tname\tnumber\tage\tvalidity\n";
			inf.getline(cod,50);
			flag2=0;
			cout<<"\n\t\t"<<cod<<endl<<endl;
			break;
		}
	}
	if(flag2 != 0)
	{
		cout<<"\n\t\t ! invalid ID of member !"<<endl<<endl;
		back :
		cout<<"\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
		cin>>choice;

		if(choice=='y')
		{
			goto issu;
		}

		if(choice=='m')
		{
            system("cls");
			menu();
		}

		if(choice=='n')
		{
			cout<<"\n\t\t! The program will be terminated............";
			getch();
			abort();
		}

		else
		{
			cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
			goto back;
		}
	}

	if(flag2==0)
	{
		ofstream out;

		out.open("issue.txt",ios::app);
		out<<co<<"\n"<<isb<<endl;
		cout<<"\n\t\t  Book is issued succesfully "<<endl<<endl;
		out.close();
		poi :
		cout<<"\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
		cin>>choice;
		if(choice=='y')
		{
			goto issu;
		}
		if(choice=='m')
		{
            system("cls");
			menu();
		}

		if(choice=='n')
		{
			cout<<"\n\t\t! The program will be terminated............";
			getch();
			abort();
		}
		else
		{
			cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
			goto poi;
		}
	}
	inf.close();
 }

 void library :: members_ac()
 {
    system("cls");
	memb :
	int select,flag=1,count=0;
	char m[50];
    cout<<"\t\t\t=========================================="<<endl;
    cout<<"\t\t\t             Members Account              "<<endl;
    cout<<"\t\t\t==========================================\n\n"<<endl;
	cout<<"\n\t\t 1.All members.\n\t\t 2.Search member.";
	cout<<"\n\t\t Enter your choice : ";
	cin>>select;
	ifstream inf;
	if(select == 1)
	{
		char st[50],str[50];
		inf.open("members.txt");
		while(!inf.eof())
		{
			inf.getline(m,50);
			count++;
		}

		inf.close();
		cout<<"\t Name\t\tNumber\t\tAge\tValidity\tID no\n";
		inf.open("members.txt");
		while(!inf.eof())
		{
			inf.getline(st,50);
			inf.getline(str,50);
			cout<<"\t"<<str<<"\t"<<st<<endl;
		}
		cout<<"\n\tTotal members = "<<count/2<<endl;
		inf.close();
		 poin :
		cout<<"\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
		cin>>choice;
		if(choice=='y')
		{
			goto memb;
		}

		if(choice=='m')
		{
            system("cls");
			menu();
		}

		if(choice=='n')
		{
			cout<<"\n\t\t! The program will be terminated............";
			getch();
			abort();
		}
		else
		{
			cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
			goto poin;
		}
	}
	if(select == 2)
	{
		char s[50];
		char st[50];
		char str[50];
		inf.open("members.txt");
		cout<<"\n\t\t Enter the ID of the member : ";
		cin>>s;
		while(!inf.eof())
		{
			inf.getline(st,50);
			if(!strcmp(s,st))
			{
			 inf.getline(str,50);
			 cout<<"\n\t\t ID\t\tName\t\tNumber\t\tAge\tValidity\n";
			 cout<<"\n\t\t "<<st<<"\t\t"<<str<<endl;
			 flag=0;
			 break;
			}
		}
		inf.close();
		if(flag == 0)
		{
			bac :
			cout<<"\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
			cin>>choice;

			if(choice=='y')
			{
				goto memb;
			}

			if(choice=='m')
			{
                system("cls");
				menu();
			}
			if(choice=='n')
			{
				cout<<"\n\t\t! The program will be terminated............";
				getch();
				abort();
			}
			else
			{
				cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
				goto bac;
			}
		}
		if(flag==1 || flag == -1)
		{
			cout<<"\n\t\t ! invalid code of member !"<<endl;
			po1 :
			cout<<"\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
			cin>>choice;
			if(choice=='y')
			{
				goto memb;
			}

			if(choice=='m')
			{
                system("cls");
				menu();
			}
			if(choice=='n')
			{
				cout<<"\n\t\t! The program will be terminated............";
				getch();
				abort();
			}
			else
			{
				cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
				goto po1;
			}
		}
	}
 }
 void library :: book_stock()
 {
    system("cls");
	int ch,book_count=0;
	char b[50],i[50];
	sb :
    cout<<"\t\t\t=========================================="<<endl;
    cout<<"\t\t\t               Books  Stock               "<<endl;
    cout<<"\t\t\t==========================================\n\n"<<endl;
	cout<<"\n\t\t 1.All books.\n\t\t 2.search a book\n\t\t Enter your choice : ";
	cin>>ch;
	if(ch==1)
	{
		ifstream inf;
		inf.open("books.txt");
		cout<<"\t\t ID\ttital\t\tauthor\t\tedition\tquantity"<<endl;
		 while(!inf.eof())
		{
			inf.getline(b,50);
			inf.getline(i,50);
			cout<<"\n\t\t "<<b<<"\t"<<i<<endl;
			book_count++;
		}
		cout<<"\t\t Total number of books : "<<book_count-1<<endl;
		inf.close();
			po2 :
			cout<<"\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
			cin>>choice;
			if(choice=='y')
			{
				goto sb;
			}
			if(choice=='m')
			{
			    system("cls");
				menu();
			}
			if(choice=='n')
			{
				cout<<"\n\t\t! The program will be terminated............";
				getch();
				abort();
			}
			else
			{
				cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
				goto po2;
			}
	}
	if(ch==2)
	{
		char isb[40],bn[50],mb[50];
		int f=0;
		ifstream inf;
		inf.open("books.txt");
		cout<<"\n\t\t Enter the ID of the book : ";
		cin>>isb;
		while(!inf.eof())
		{
			inf.getline(bn,50);
			inf.getline(mb,50);
			if(!strcmp(bn,isb))
			{
				cout<<"\n\t\t isbn\tname of book\tauthor\t\tedition\tquantity\n";
				cout<<"\n\t\t "<<bn<<"\t"<<mb<<endl;
				f=1;
			}
		}
      if(f==1)
		{
			po3 :
			cout<<"\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
			cin>>choice;
			if(choice=='y')
			{
				goto sb;
			}
			if(choice=='m')
			{
				system("cls");
				menu();
			}
			if(choice=='n')
			{
				cout<<"\n\t\t! The program will be terminated............";
				getch();
				abort();
			}
			else
			{
				cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
				goto po3;
			}
		}
		if(f==0)
		{
			cout<<"\n\t\t ! Book  not found !"<<endl;
			po4 :
			cout<<"\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
			cin>>choice;
			if(choice=='y')
			{
				goto sb;
			}
			if(choice=='m')
			{
			    system("cls");
				menu();
			}
			if(choice=='n')
			{
				cout<<"\n\t\t! The program will be terminated............";
				getch();
				abort();
			}
			else
			{
				cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
				goto po4;
			}
		}
	}
 }
 void library :: deposit()
 {
    system("cls");
	depo :
	char memb[100];
	char c[100];
	char c1[100];
	int flagd = 0;

    cout<<"\t\t\t=========================================="<<endl;
    cout<<"\t\t\t             Deposite  Books                "<<endl;
    cout<<"\t\t\t==========================================\n\n"<<endl;
	cout<<"\n\n\t\t Enter the ID of member : ";
	cin>>memb;
	ifstream inf;
	inf.open("issue.txt");
	while(!inf.eof())
	{
	    inf.getline(c,100);
	    if(!strcmp(c,memb))
	    {
		cout<<"\n\n\t\t Member is found......"<<endl<<endl;
		inf.getline(c1,100);
		strcpy(f1,c);
		strcpy(f2,c1);
		cout<<"\t\t ID number of the books issued is : "<<c1<<endl;
		update_issue();
		cout<<"\n\n\t\t The book is deposited successfully...."<<endl<<endl;
		flagd = 1;
		po5 :
		cout<<"\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
		cin>>choice;
		if(choice=='y')
		{
			goto depo;
		}
		if(choice=='m')
		{
		    system("cls");
			menu();
		}
		if(choice=='n')
		{
			cout<<"\n\t\t! The program will be terminated............";
			getch();
			abort();
		}
		else
		{
			cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
			goto po5;
		}
	    }
	}
	    inf.close();
	    if(flagd == 0)
	    {
		cout<<"\n\n\t\t ! Member is not found !";
		cout<<"\n\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
		cin>>choice;
		if(choice=='y')
		{
			goto depo;
		}
		if(choice=='m')
		{
		    system("cls");
			menu();
		}

		if(choice=='n')
		{
			cout<<"\n\t\t! The program will be terminated............";
			getch();
			abort();
		}
		else
		{
			cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
			goto po5;
		}
	    }
 }
 void library :: remove_book()
 {
    system("cls");
	pop :
	char remov[500];
	char k[500];
	int km,mm;
	char m[500];
    cout<<"\t\t\t=========================================="<<endl;
    cout<<"\t\t\t             Remove  Books                "<<endl;
    cout<<"\t\t\t==========================================\n\n"<<endl;
	cout<<"\n\n\t\t Enter the ID number of the book : ";
	cin>>remov;
	ifstream inf;
	inf.open("books.txt");
	ofstream outf;
	outf.open("temp.txt");
	while(!inf.eof())
	{
		inf.getline(k,500);
		int b = strcmp(remov,k);
		if(b==0)
		{
			inf.getline(k,500);
			km=1;
		}
		else
		{
			outf<<k<<endl;
		}
	}
	if(km==1)
	{
		cout<<"\n\n\t\t Book has been successfully removed.....";
		remove("books.txt");
		outf.close();
		inf.close();
		rename("temp.txt","books.txt");
		gop :
		cout<<"\n\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
		cin>>choice;
		if(choice=='y')
            {
			goto pop;
            }
		if(choice=='m')
		{
		    system("cls");
			menu();
		}
		if(choice=='n')
		{
			cout<<"\n\t\t! The program will be terminated............";
			getch();
			abort();
		}
		else
		{
			cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
			goto gop;
		}
	}
	else
	{
		cout<<"\n\n\t\t  ID number is wrong ";
		pom :
		cout<<"\n\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
		cin>>choice;
		if(choice=='y')
		{
			goto pop;
		}
		if(choice=='m')
		{
		    system("cls");
			menu();
		}

		if(choice=='n')
		{
			cout<<"\n\t\t! The program will be terminated............";
			getch();
			abort();
		}
		else
		{
			cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
			goto pom;
		}
	}
 }
 void library :: remove_member()
 {
    system("cls");
	mom :
	char r[500],b[500];
	int c;
    cout<<"\t\t\t=========================================="<<endl;
    cout<<"\t\t\t          Remove Member Account           "<<endl;
    cout<<"\t\t\t==========================================\n\n"<<endl;
	cout<<"\n\n\t\t Enter the code of the member : ";
	cin>>r;
	ifstream inf;
	inf.open("members.txt");
	ofstream outf;
	outf.open("temp.txt");
	while(!inf.eof())
	{
		inf.getline(b,500);
		if(!strcmp(b,r))
		{
			c=1;
			inf.getline(b,500);
		}
		else
		{
			outf<<b<<endl;
		}
	}
	if(c==1)
	{
		cout<<"\n\n\t\t Member has been successfully removed....";
		inf.close();
		outf.close();
		remove("members.txt");
		rename("temp.txt","members.txt");
		mop :
		cout<<"\n\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
		cin>>choice;
		if(choice=='y')
		{
			goto mom;
		}
		if(choice=='m')
		{
            system("cls");
			menu();
		}

		if(choice=='n')
		{
			cout<<"\n\t\t! The program will be terminated............";
			getch();
			abort();
		}
		else
		{
			cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
			goto mop;
		}
	}
	else
	{
		cout<<"\n\n\t\t ! Invalid code of member !";
		job :
		cout<<"\n\n\t\t Press 'y' to continue , press 'm' to go to menu , press 'n' to exit : ";
		cin>>choice;

		if(choice=='y')
		{
			goto mom;
		}

		if(choice=='m')
		{
		    system("cls");
			menu();
		}
		if(choice=='n')
		{
			cout<<"\n\t\t! The program will be terminated............";
			getch();
			abort();
		}
		else
		{
			cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
			goto job;
		}
	}

 }

 void library :: list_issue()
 {
    system("cls");
	char l[500],m[500];
	ifstream inf("issue.txt");
    cout<<"\t\t\t=========================================="<<endl;
    cout<<"\t\t\t             List of Issued Books                "<<endl;
    cout<<"\t\t\t==========================================\n\n"<<endl;
	cout<<"\t\t Code of member\t\tID number of book";
	while(!inf.eof())
	{
		inf.getline(l,500);
		inf.getline(m,500);
		cout<<"\n\n\t\t\t "<<l<<"\t\t\t"<<m<<endl;
	}
	boj :
	cout<<"\t\t press 'm' to go to menu , press 'n' to exit : ";
	cin>>choice;
	if(choice=='m')
	{
	    system("cls");
		menu();
	}
	if(choice=='n')
	{
		cout<<"\n\t\t! The program will be terminated............";
		getch();
		abort();
	}
	else
	{
		cout<<"\n\n\t\t ! invalid input ! try again !"<<endl<<endl;
		goto boj;
	}
 }

 void library :: update_issue()
 {
    system("cls");
	char buf[500];
	ofstream outf("temp.txt");
	ifstream inf("issue.txt");
	while(!inf.eof())
	{
		inf.getline(buf,500);
		if(!strcmp(buf,f1))
		{
			inf.getline(buf,500);
			inf.getline(buf,500);
		}
		outf<<buf<<endl;
	}
	inf.close();
	outf.close();
	remove("issue.txt");
	rename("temp.txt","issue.txt");
 }

void intro()
{
    cout<<endl;
    cout<<"                     IUBAT Library Management System"<<endl;
    cout<<"                      Prepared By : Md. Shahin Iqbal "<<endl;
    cout<<"                      University: IUBAT University"<<endl;
    cin.get();
}



		//final code.
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{	int o,key=0,d;
	char z;
	string u,p,s1,p1,p2,s2;
	cout<<"\n\n\nEnter\n1.Sign in\n2.Sign up\n3.Exit\n";
	cin>>o;
	switch(o)
	{	case 1:
		{	system("cls");
			cout<<"\n\n\nEnter\n1.Admin\n2.Citizen\n";
			cin>>o;
			switch(o)
			{	case 1:
				{	do
					{	ifstream f("admin.txt");
						f.seekg(0,ios::beg);
						key=0;
						system("cls");
						cout<<"\n\n\n\n\t\t\t\t\t\tUsername: ";
						cin>>u;	
						f.seekg(0,ios::beg);
						while(!f.eof())
						{	getline(f,s1);
							if(s1==u)
							{	cout<<"\n\t\t\t\t\t\tPassword: ";
								p1="";
								char c=_getch();
								while(c!='#')
								{	p1.push_back(c);
									cout<<"*";
									c=_getch();
								}
								p1.push_back(c);
								getline(f,s2);
								if(p1==s2)
								{	key=1;
									z='n';
									system("cls");
									cout<<"\n\n\t\t\t	"<<setfill('-')<<setw(70)<<"\n";	
									cout<<"\t\t					WELCOME TO OUR PAGE";
									cout<<"\n\t\t\t	"<<setfill('-')<<setw(70)<<"\n";
									cout<<"\n\n\t\t\t\t\t\t  Respective votes are:\n\n";
									ifstream f("problems.txt");
									char m,g;
									int k;
									f.seekg(20,ios::beg);
									m=f.get();
									g=f.get();
									k=(int)g;
									if(k==32)
										cout<<"\t\t\t\t\t\t  Unclean water supply: "<<(int)m-48<<endl;
									else
										cout<<"\t\t\t\t\t\t  Unclean water supply: "<<(int)m-48<<(k-48)<<endl;
									f.seekg(37,ios::beg);
									m=f.get();
									g=f.get();
									k=(int)g;
									if(k==32)
										cout<<"\t\t\t\t\t\t  Dumped garbages: "<<(int)m-48<<endl;
									else
										cout<<"\t\t\t\t\t\t  Dumped garbages: "<<(int)m-48<<(k-48)<<endl;
									f.seekg(62,ios::beg);
									m=f.get();
									g=f.get();
									k=(int)g;
									if(k==32)
										cout<<"\t\t\t\t\t\t  Inadequate water supply: "<<(int)m-48<<endl;
									else
										cout<<"\t\t\t\t\t\t  Inadequate water supply: "<<(int)m-48<<(k-48)<<endl;
									f.seekg(77,ios::beg);
									m=f.get();
									g=f.get();
									k=(int)g;
									if(k==32)
										cout<<"\t\t\t\t\t\t  Open manholes: "<<(int)m-48<<endl;
									else
										cout<<"\t\t\t\t\t\t  Open manholes: "<<(int)m-48<<(k-48)<<endl;
									f.seekg(103,ios::beg);
									m=f.get();
									g=f.get();
									k=(int)g;
									if(k==32)
										cout<<"\t\t\t\t\t\t  Improper drainage system: "<<(int)m-48<<endl;
									else
										cout<<"\t\t\t\t\t\t  Improper drainage system: "<<(int)m-48<<(k-48)<<endl;
									f.seekg(110,ios::beg);
									m=f.get();
									g=f.get();
									k=(int)g;
									if(k==32)
										cout<<"\t\t\t\t\t\t  Stink due to liquid waste: "<<(int)m-48<<endl;
									else
										cout<<"\t\t\t\t\t\t  Stink due to liquid waste: "<<(int)m-48<<(k-48)<<endl;	
									f.seekg(125,ios::beg);
									m=f.get();
									g=f.get();
									k=(int)g;
									if(k==32)
										cout<<"\t\t\t\t\t\t  Street Lights: "<<(int)m-48<<endl;
									else
										cout<<"\t\t\t\t\t\t  Street Lights: "<<(int)m-48<<(k-48)<<endl;
									exit(0);
								}
							}
							if(key)
								break;
						}
						if(!key)
						{	cout<<"\nInvalid Username or Password\nWant to try again?\nPress 'y' for yes and 'n' for no\n";
							cin>>z;
						}
						f.close();
					}while(z=='y');
					if(z=='n')
						{
							cout<<"\t\t\t\t\t\tThanks for using our platform \n";
						}
						exit(0);
				}
				break;
				case 2:
				{	char l;
					do
					{	key=0;
						ifstream fptr("mini9.txt");
						fptr.seekg(0,ios::beg);
						system("cls");
						cout<<"\n\n\n\n\t\t\t\t\t\tUsername: ";
						cin>>u;
						while(!fptr.eof())
						{	getline(fptr,s1);
							if (s1==u)
							{	cout<<"\n\t\t\t\t\t\tPassword: ";
								p1="";
								char c=_getch();
								while(c!='#')
								{	p1.push_back(c);
									cout<<"*";
									c=_getch();
								}
								p1.push_back(c);
								getline(fptr,s1);
								if(p1==s1)
								{	
									goto user;
									key=1;
								}
								break;
							}	
						}
						if(!key)
						{	cout<<"\nInvalid Username or Password\nWant to try again?\nIf yes, press 'y' or 'n' for no\n";
							cin>>l;					
						}
					fptr.close();
					}while(l=='y');
					if(l!='y')
					{
						cout<<"\t\t\t\t\t\tThanks for using our platform \n";
				   }
						exit(0);
				}
			}
		}
		break;
		case 2:
		{	string s2;
			int v=1;
			char y;
			do
			{	ofstream file("mini9.txt",ios::app);
				fstream fptr("mini9.txt",ios::in|ios::out);
				v=1;
				system("cls");
				cout<<"\n\n\n\n\t\t\t\t\t\t  Username: ";
				cin>>s1;
				getline(fptr,s2);
				while(fptr)
				{	if(s2==s1)
					{	v=0;
						break;
					}
					getline(fptr,s2);
				}
				if(v){
				file<<s1<<endl;
				cout<<"\n\t\t\t\t\t\t  Password: ";
				char r=_getch();
				p2="";
				while(r!='#')
				{	p2.push_back(r);
					cout<<"*";
					r=_getch();
				}
				p2.push_back(r);
				file<<p2<<endl;
				file.close();
				fptr.close();
				goto user;
				}
				else
				{	cout<<"Such username already exists\nWant to try again? If yes press 'y' or 'n' for no\n";
					cin>>y;
				}
		}while(y=='y');
			if(y=='n')
				exit(0);
		}
		break;
		case 3:
			cout<<"Thanks for using this platform\m";
			exit(0);	
	}
	user:
		system("cls");
		cout<<"\n\n\t\t\t	"<<setfill('-')<<setw(70)<<"\n";
		cout<<"\t\t					WELCOME TO OUR PAGE";
		cout<<"\n\t\t\t	"<<setfill('-')<<setw(70)<<"\n";
		cout<<"Enter\n1.To vote\n2.Check the results\n3.Exit\n";
		cin>>o;
		system("cls");
		switch(o)
		{	case 1:
			{	fstream f("problems.txt",ios::in|ios::ate|ios::out);
				f.seekg(0,ios::beg);
				f.seekp(0,ios::beg);
				int o1,i;
				char c1,c2;
				cout<<"\n\n\n\nTo vote to that problem, enter the respective number\n1.Unclean water supply\n2.Dumped garbages\n3.Inadequate water supply\n4.Open manholes\n5.Improper drainage system\n6.Stink due to liquid waste\n7.Street light problems"<<endl;
				cin>>o1;
				switch(o1)
				{	case 1:
					{	f.seekg(20);
						c1=f.get();
						c2=f.get();
						i=(int)c2;
						if(i==32)
						{	f.seekp(20,ios::beg);
							f<<(int)c1-47;
						}
						else if(i==57)
						{	f.seekp(20,ios::beg);
							f<<(int)c1-47;
							f.seekp(21,ios::beg);
							f<<'0';
						}
						else
						{	f.seekp(21,ios::beg);
							f<<(int)c2-47;
						}
					}
					break;
					case 2:
					{	f.seekg(37,ios::beg);
						c1=f.get();
						c2=f.get();
						i=(int)c2;
						if(i==32)
						{	f.seekp(37,ios::beg);
							f<<(int)c1-47;
						}
						else if(i==57)
						{	f.seekp(37,ios::beg);
							f<<(int)c1-47;
							f.seekp(38,ios::beg);
							f<<'0';
						}
						else
						{	f.seekp(38,ios::beg);
							f<<(int)c2-47;
						}
					}
					break;
					case 3:
					{	f.seekg(62,ios::beg);
						c1=f.get();
						c2=f.get();
						i=(int)c2;
						if(i==32)
						{	f.seekp(62,ios::beg);
							f<<(int)c1-47;
						}
						else if(i==57)
						{	f.seekp(62,ios::beg);
							f<<(int)c1-47;
							f.seekp(63,ios::beg);
							f<<'0';
						}
						else
						{	f.seekp(63,ios::beg);
							f<<(int)c2-47;
						}
					}
					break;
					case 4:
					{	f.seekg(77,ios::beg);
						c1=f.get();
						c2=f.get();
						i=(int)c2;
						if(i==32)
						{	f.seekp(77,ios::beg);
							f<<(int)c1-47;
						}
						else if(i==57)
						{	f.seekp(77,ios::beg);
							f<<(int)c1-47;
							f.seekp(78,ios::beg);
							f<<'0';
						}
						else
						{	f.seekp(78,ios::beg);
							f<<(int)c2-47;
						}
					}
					break;	
					case 5:
					{	f.seekg(103,ios::beg);
						c1=f.get();
						c2=f.get();
						i=(int)c2;
						if(i==32)
						{	f.seekp(103,ios::beg);
							f<<(int)c1-47;
						}
						else if(i==57)
						{	f.seekp(103,ios::beg);
							f<<(int)c1-47;
							f.seekp(104,ios::beg);
							f<<'0';
						}
						else
						{	f.seekp(104,ios::beg);
							f<<(int)c2-47;
						}
					}
					break;
					case 6:
					{	f.seekg(110,ios::beg);
						c1=f.get();
						c2=f.get();
						i=(int)c2;
						if(i==32)
						{	f.seekp(110,ios::beg);
							f<<(int)c1-47;
						}
						else if(i==57)
						{	f.seekp(110,ios::beg);
							f<<(int)c1-47;
							f.seekp(111,ios::beg);
							f<<'0';
						}
						else
						{	f.seekp(111,ios::beg);
							f<<(int)c2-47;
						}
					}
					break;
					case 7:
					{	f.seekg(125,ios::beg);
						c1=f.get();
						c2=f.get();
						i=(int)c2;
						if(i==32)
						{	f.seekp(125,ios::beg);
							f<<(int)c1-47;
						}
						else if(i==57)
						{	f.seekp(125,ios::beg);
							f<<(int)c1-47;
							f.seekp(126,ios::beg);
							f<<'0';
						}
						else
						{	f.seekp(126,ios::beg);
							f<<(int)c2-47;
						}
					}
					break;
				}
			}
			system("cls");
			cout<<"\nPress 1 to check the results so far, 0 to exit\n";
			cin>>d;
			system("cls");
			cout<<endl;
			if(!d)
				break;
			case 2:
			{	cout<<"\n\n\n\nRespective votes are:\n\n";
				ifstream f("problems.txt");
				char m,g;
				int k;
				f.seekg(20,ios::beg);
				m=f.get();
				g=f.get();
				k=(int)g;
				if(k==32)
					cout<<"Unclean water supply: "<<(int)m-48<<endl;
				else
					cout<<"Unclean water supply: "<<(int)m-48<<(k-48)<<endl;
				f.seekg(37,ios::beg);
				m=f.get();
				g=f.get();
				k=(int)g;
				if(k==32)
					cout<<"Dumped garbages: "<<(int)m-48<<endl;
				else
					cout<<"Dumped garbages: "<<(int)m-48<<(k-48)<<endl;
				f.seekg(62,ios::beg);
				m=f.get();
				g=f.get();
				k=(int)g;
				if(k==32)
					cout<<"Inadequate water supply: "<<(int)m-48<<endl;
				else
					cout<<"Inadequate water supply: "<<(int)m-48<<(k-48)<<endl;
				f.seekg(77,ios::beg);
				m=f.get();
				g=f.get();
				k=(int)g;
				if(k==32)
					cout<<"Open manholes: "<<(int)m-48<<endl;
				else
					cout<<"Open manholes: "<<(int)m-48<<(k-48)<<endl;
				f.seekg(103,ios::beg);
				m=f.get();
				g=f.get();
				k=(int)g;
				if(k==32)
					cout<<"Improper drainage system: "<<(int)m-48<<endl;
				else
					cout<<"Improper drainage system: "<<(int)m-48<<(k-48)<<endl;
				f.seekg(110,ios::beg);
				m=f.get();
				g=f.get();
				k=(int)g;
				if(k==32)
					cout<<"Stink due to liquid waste: "<<(int)m-48<<endl;
				else
					cout<<"Stink due to liquid waste: "<<(int)m-48<<(k-48)<<endl;	
				f.seekg(125,ios::beg);
				m=f.get();
				g=f.get();
				k=(int)g;
				if(k==32)
					cout<<"Street Lights: "<<(int)m-48<<endl;
				else
					cout<<"Street Lights: "<<(int)m-48<<(k-48)<<endl;
			}
			break;
			case 3:
				exit(0);
		}
	return 0;
}

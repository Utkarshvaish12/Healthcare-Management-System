#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<iomanip>
#include<fstream>

using namespace std;

char t[3][8]={"Small","Medium","Large"};		//array fot type

char h[100][50]=					//array for hospital name
    {
    "Nill","Care Hospital","Athenity Care", "Attentive Hospital","Well Care","Care Clinic",
    "Body Hospital","Claris Care","Community Health","Complete Care",
    "Grand Mark","Union medical","Myriad Max","Enfolding Arms","Health SCOPE","Live Hospital","View Clinic",
    "Notus Clinic","UniHealth Protect","Life Medical","Arch Medical","Women Health","Beyond Medical",
    "Life Clinic","Embracing Care","Forward Health","Gold Testing","Sun Clinic","My Hospital",
    "Valley hospital","Green Hospital","Hope Hospital","Health Service","Medica Zone",
    "Family Center","Injury Medics","Ablecare","Blue HealthCare","UltraCare House","Ace hospital",
    "Redstar Hospital","Flower Clinic","lifeflash Clinic","Winter warm","Angel Hospital","Intense Hospital",
     "Summer Hospital"};
 
     
char drn[100][50]=				//array for doctor's name
     {"Nill","Dr Wiwi", "Dr Blessing", "Dr Ono","Dr Risk", "Dr Fear", "Dr Yell", "Dr Lecher", "Dr Dibble", "Dr Filleru","Dr Hyman", "Dr C.Surgeon", 
     "Dr Risk", "Dr Beavers", "Dr Polke", "Dr Jamm", "Dr Boddy","Dr Dildy", "Dr Cherry", "Dr Love", "Dr B. Savage", "Dr Dickman","Dr Pillow", "Dr Fear",
     "Dr Finger","Dr Popp","Dr Spoon","Dr Hyman", "Dr Bush", "Dr Kuntz", "Dr Pap","Dr Storck","Dr Kum","Dr Semen","Dr In Hur", "Dr Hatch","Dr Heinie", 
     "Dr Bunn","Dr Grab","Dr Catching", "Dr Gass", "Dr Werker","Dr Born","Dr Angel","Dr Sunshine","Dr Fagnant", "Dr Hatcher", "Dr Hooker","Dr Finger",
     "Dr Cocks","Dr Nippel","Dr Lipps","Dr Payne","Dr Beaver","Dr Bigger" };
 
     
char l[100][50]=					//array for location/Address
    {"Nill","Patnam", "Tirupati", "Kakinada", "Pasighat", "Guwahati", "Muzaffarpur", "Bhagalpur", "Bihar","Chandigarh", "Raipur", "Bilaspur", "Diu", 
    "Silvassa", "Panaji", "Gandhinagar", "Ahmedabad", "Surat", "Vadodara", "Rajkot", "Dahod", "Karnal", "Faridabad", "Dharamsala","Ranchi", "Mangaluru",
     "Belagavi", "Shivamogga", "HuDharwad", "Tumakuru", "Davangere", "Kochi", "Kavaratti", "Bhopal", "Indore", "Jabalpur", "Gwalior", "Sagar", "Satna", 
     "Ujjain", "Mumbai", "Nasik", "Thane", "Rampur", "Amaravati", "Solapur", "Nagpur", "Bareilly", "Aurangabad", "Pune", "Imphal", "Shillong", "Aizawl", 
     "Kohima", "Bhubaneswar", "Rourkela", "Oulgaret", "Ludhiana", "Jalandhar", "Amritsar", "Jaipur","Udaipur","Kota", "Ajmer"};      


char deg[50][20]=				//array for degrees
    {"BHM","BDM","MBBS", "BMBS", "MBChB", "MBBCh", "B.Med","B.S","B.SurgMD", "Dr.MuD", "Dr.Med","MMSc", "MMed","ScMS", "MSurg", "MChir", "MCh", "ChM", "CM"};

    
char s[100][50]=					//array for specializations
    {"Anaesthesiology","DNB","Anthesthesiology","Biochemistry","Dermatology","VD","CardioSurgery","Nuclear Medicine","Dertology","Venereology","Emergency Medicine",
    "Ophthalmology","ENT","Orthopaedics","Family Medicine","Otorhinolaryngology","Forensic Medicine","Paediatrics","General Medicine","Psychiatry","General Surgery",
    "Radio-Diagnosis","Health Administration","Radio-Therapy","Immunohematology","transfusion medicine","Macrobiology","Physical Medicine","Rehabilitation","Neuro Surgery",
    "Pathology","MD Medicine","Obstetrics","Gynaecology"};


char g[4][10]={"Nill","Other","Male","Female"}; 		//array for gender


char p[50][20]=						//array for patient name
	      {"Nill","Liam","Olivia","Noah" ,"Emma","Oliver","Ava","Elijah","Charlotte","William" ,"Sophia","James" ,"Amelia","Benjamin",
            "Isabella","Lucas","Mia","Henry","Evelyn","Alexander","HarperLeo","Jayden","Gabriel","Isaac","Lincoln","Anthony"
            ,"Hudson","Dylan","Ezra","Thomas","Charles","Christopher","Jaxon","Maverick","Josiah","Isaiah","Andrew","Elias",
             "Joshua","Nathan","Caleb","Ryan","Adrian","Miles","Eli","Nolan","Christian","Aaron","Cameron"};


char dis[20][20]=					//array for diseases
		{"Nill","Allergies","Colds and Flu","Conjunctivitis","Diarrhea","Headaches","Mononucleosis","Stomach Aches","Bone cancer",
            "Blood cancer","Stomach Cancer","Ulcer","High BP","Maleria","Throat Cancer","Throat infection","Throat allergies","Acne"};    


char m[20][30]=						//array for Medicines / suggestions
		{"Nill","Anopxicillin","Amoxicillin","Amphotericin B","Ampicillin","Anti-Inhibitor","Coagulant Complex",
		"Anti- globulin","Aprepitant","Asparaginase","Clindamycin","Clobazam","Clofarabine","Codeine",
		"Crizanlizumab","Crizotinib","Cyclobenzaprine","Cyclosporine"};

                
class Hospital						//Parent class
{
	
	int hId;
	int yearOfEstablishment;
public:

	int hname;
        float rating;
	int bedCapacity;
	int location;
	long int phoneNo; 
	int Type;
	
	Hospital()
	{
	hname=1+rand()%46;		       //hospital name
	hId = 1+rand()%999;                        //hospital id
	location=1+rand()%63;
	yearOfEstablishment=1990+rand()%20;
	phoneNo=9000000000+rand()%999999999;
	rating=1+rand()%9;                       //rating out of 10 points
	bedCapacity=100+rand()%500;
	}
	
	void printDetails();
        void printDetailsInFile(ofstream &out,Hospital *hp,int n);
	
	int gethname()
	{
	return hname;
	}
	
	int gethId()
	{
	return hId;
	}
	
	int getYear()
	{
	return yearOfEstablishment;
	}
	
	void sortByRating(Hospital *h,int n);
	void sortByBedCapacity(Hospital *h,int n);
	
	int getType()			//return Type of Hospital on the basis of bed Capacity
	{
		if(bedCapacity<150)
		Type=0;
		else if(bedCapacity>150 && bedCapacity<350)
		Type=1;
		else if(bedCapacity>350)
		Type=2;
		return Type;
	}
	
};


void Hospital :: sortByRating(Hospital *h,int n)
{
	Hospital h1;
	int i,j;
	for(i=0;i<n;i++)
	{	for(j=n-1;j>i;j--)
		{	
			if(h[j].rating<h[j-1].rating)
			{	
				h1=h[j];
				h[j]=h[j-1];
				h[j-1]=h1;
			}
		}
	}
	cout<<"\t\t\t****************HOSPITAL DETAILS**************** \t\n\n\n";
	for(int j=0;j<111;j++)
	cout<<"_";
	cout<<endl;
	cout<<left<<setw(20)<<"Name"<<left<<setw(5)<<"ID"<<left<<setw(15)<<"Location";
	cout<<left<<setw(15)<<"Contact"<<left<<setw(15)<<"Bed Capacity";
	cout<<left<<setw(10)<<"Rating"<<left<<setw(10)<<"Type"<<left<<setw(21)<<"Year of Establishment\n";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
	h[i].printDetails();
	}
	for(int j=0;j<111;j++)
	cout<<"_";
	cout<<endl<<endl;	

}

void Hospital :: sortByBedCapacity(Hospital *h,int n)
{
	Hospital h2;
	int i,j;
	for(i=0;i<n;i++)
	{	for(j=n-1;j>i;j--)
		{	
			if(h[j].bedCapacity<h[j-1].bedCapacity)
			{	
				h2=h[j];
				h[j]=h[j-1];
				h[j-1]=h2;
			}
		}
	}
	
	cout<<"\t\t\t****************HOSPITAL DETAILS**************** \t\n\n\n";
	for(int j=0;j<111;j++)
	cout<<"_";
	cout<<endl;
	cout<<left<<setw(20)<<"Name"<<left<<setw(5)<<"ID"<<left<<setw(15)<<"Location";
	cout<<left<<setw(15)<<"Contact"<<left<<setw(15)<<"Bed Capacity";
	cout<<left<<setw(10)<<"Rating"<<left<<setw(10)<<"Type"<<left<<setw(21)<<"Year of Establishment\n";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
	h[i].printDetails();
	}
	for(int j=0;j<111;j++)
	cout<<"_";
	cout<<endl<<endl;		


}

void Hospital :: printDetails()				//function overriding
{


	cout<<left<<setw(20)<<h[hname]<<left<<setw(5)<<hId<<left<<setw(15)<<l[location]<<left<<setw(15)<<phoneNo;
     cout<<left<<setw(15)<<bedCapacity<<left<<setw(10)<<rating<<left<<setw(10)<<t[getType()]<<left<<setw(21)<<yearOfEstablishment<<"\n\n";


}

void Hospital :: printDetailsInFile(ofstream &out,Hospital *hp,int n)		//function overloading (Polymorphism)
{

	out<<"\t\t\t****************HOSPITAL DETAILS**************** \t\n\n\n";
	for(int j=0;j<111;j++)
	out<<"_";
	out<<endl;
	out<<left<<setw(20)<<"Name"<<left<<setw(5)<<"ID"<<left<<setw(15)<<"Location";
	out<<left<<setw(15)<<"Contact"<<left<<setw(15)<<"Bed Capacity";
	out<<left<<setw(10)<<"Rating"<<left<<setw(10)<<"Type"<<left<<setw(21)<<"Year of Establishment\n";
	out<<endl;
	for(int i=0;i<n;i++)
	{
	 out<<left<<setw(20)<<h[hp[i].hname]<<left<<setw(5)<<hp[i].hId<<left<<setw(15)<<l[hp[i].location]<<left<<setw(15)<<hp[i].phoneNo;
         out<<left<<setw(15)<<hp[i].bedCapacity<<left<<setw(10)<<hp[i].rating<<left<<setw(10)<<t[hp[i].getType()];
         out<<left<<setw(21)<<hp[i].yearOfEstablishment<<"\n\n";
	}
	
	for(int j=0;j<111;j++)
	out<<"_";
	out<<endl<<endl;
}

class Doctor : public Hospital				//child class of Hospital
{

	int dId;
	int degree;
	float fees;
	long int contactNo;
public:
	
	int dname;
	int experience;
	int specialization;
	int appointment;
	
	Doctor()
	{
	dname=1+rand()%54;				//Doctor's Name
	dId=1+rand()%999;				//Doctor's ID
	degree=rand()%19;
	contactNo=9000000000+rand()%999999999;
	experience=2+rand()%13;
	specialization=rand()%34;
	fees=500+rand()%500;
	}
	
	void setExperience(int e);
	void sortByexperience(Doctor *d,int n);
	void sortBySpec(Doctor *d,int n);
	void sortByFees(Doctor *d,int n);
	void searchByHname(Doctor *dr,int n);
	void searchByDid(Doctor *dr,int n);
	void modifyContact(Doctor *dr,int n);
	void modifyExperience(Doctor *dr,int n);
	void printDetailsInFile(ofstream &out,Doctor *dc,int n);
	int getdId()
	{
	return dId;
	}
	void setContact(long int N)
	{
	contactNo=N;
	}
	
	void printDetails();
	
};
void Doctor :: setExperience(int e)
{
	experience=e;
}

void Doctor :: sortByexperience(Doctor *d,int n)
{
	Doctor d1;
	int i,j;
	for(i=0;i<n;i++)
	{	for(j=n-1;j>i;j--)
		{	
			if(d[j].experience<d[j-1].experience)
			{	
				d1=d[j];
				d[j]=d[j-1];
				d[j-1]=d1;
			}
		}
	}
	
	cout<<"\t\t\t****************DOCTORS DETAILS**************** \t\n\n\n";
	for(int j=0;j<140;j++)
	cout<<"_";
	cout<<endl;
	cout<<left<<setw(20)<<"Doctor's Name"<<left<<setw(5)<<"ID";
	cout<<left<<setw(15)<<"Degree"<<left<<setw(15)<<"Contact"<<left<<setw(15)<<"Experience";
	cout<<left<<setw(10)<<"Fees"<<left<<setw(30)<<"Specialization"<<left<<setw(20)<<"Hospital name";
	cout<<left<<setw(5)<<"HID\n";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
	d[i].printDetails();
	}
	for(int j=0;j<140;j++)
	cout<<"_";
	cout<<endl<<endl;				
}

void Doctor :: sortBySpec(Doctor *d,int n)
{
	int i,j,c;
	for(j=0;j<34;j++)
	{c=0;
	cout<<"\t\t"<<"\nSpecialization : "<<s[j]<<"\n\t\t";
	for(i=0;i<n;i++)
	{	
		if(strcmp(s[d[i].specialization],s[j])==0)
			{	
				cout<<"Doctor Name: "<<drn[d[i].dname];
				cout<<"\n\t\t";
				c++;
			}
		
	}
	if(c==0)
	cout<<"**No doctor available with this specialization\n\n";
	}
}

void Doctor :: sortByFees(Doctor *d,int n)
{
	Doctor d3;
	int i,j;
	for(i=0;i<n;i++)
	{	for(j=n-1;j>i;j--)
		{	
			if(d[j].fees<d[j-1].fees)
			{	
				d3=d[j];
				d[j]=d[j-1];
				d[j-1]=d3;
			}
		}
	}
	
	cout<<"\t\t\t****************DOCTORS DETAILS**************** \t\n\n\n";
	for(int j=0;j<140;j++)
	cout<<"_";
	cout<<endl;
	cout<<left<<setw(20)<<"Doctor's Name"<<left<<setw(5)<<"ID";
	cout<<left<<setw(15)<<"Degree"<<left<<setw(15)<<"Contact"<<left<<setw(15)<<"Experience";
	cout<<left<<setw(10)<<"Fees"<<left<<setw(30)<<"Specialization"<<left<<setw(20)<<"Hospital name";
	cout<<left<<setw(5)<<"HID\n";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
	d[i].printDetails();
	}
	for(int j=0;j<140;j++)
	cout<<"_";
	cout<<endl<<endl;	

}

void Doctor :: searchByHname(Doctor *dr,int n)
{
	char name[50];
	int c=0;
	cout<<"\nEnter the hospital name you are searching for: ";
	cin.ignore();
	cin.getline(name,49);
	for(int i=0;i<n;i++)
	{
		if(strcasecmp(h[dr[i].gethname()],name)==0)
			{c++;
			cout<<"\nHospital is found with input hospital name\n\n";
			return;
			}
	}
	if(c==0)
	cout<<"\nNo Hospital is found with input hospital name\n"<<"Enter a valid Hospital name\n\n";		
}

void Doctor :: searchByDid(Doctor *dr,int n)
{
	int id;
	int c=0;
	cout<<"\nEnter the Doctor's ID you are searching for: ";
	cin>>id;
	for(int i=0;i<n;i++)
	{
		if(dr[i].getdId()==id)
			{c++;
			cout<<"\nDoctor is found with input Doctor's ID ( "<<id<<" )\n";
			cout<<"\t\tDoctor's Name : "<<drn[dr[i].dname]<<"\n\n";
			return;
			}
	}
	if(c==0)
	cout<<"\nNo Doctor is found with input Doctor's ID ( "<<id<<" )\n"<<"Enter a valid Doctor's ID\n\n";	

}

void Doctor :: modifyContact(Doctor *dr,int n)
{
	int id;
	long int no;
	int c=0;
	cout<<"\nEnter the Doctor's ID whose contact no. you want to Modify:\n";
	cin>>id;
	cout<<"\nEnter the Doctor's new contact no.:\n";
	cin>>no;
	for(int i=0;i<n;i++)
	{
		if(dr[i].getdId()==id)
			{c++;
			dr[i].setContact(no);
			}
	}
	if(c==0)
	cout<<"\nNo Such Doctor's ID is found\n";
	else 
	cout<<"\nModified !!!!!!!\n";	
}

void Doctor :: modifyExperience(Doctor *dr,int n)
{
	int id;
	int e;
	int c=0;
	cout<<"\nEnter the Doctor's ID whose Experience you want to Modify:\n";
	cin>>id;
	cout<<"\nEnter the Doctor's updated Experience:\n";
	cin>>e;
	for(int i=0;i<n;i++)
	{
		if(dr[i].getdId()==id)
			{c++;
			dr[i].setExperience(e);
			}
	}
	if(c==0)
	cout<<"\nNo Such Doctor's ID is found\n";
	else 
	cout<<"\nModified !!!!!!!\n";	
}


void Doctor :: printDetails()				//function overriding
{
	
	cout<<left<<setw(20)<<drn[dname]<<left<<setw(5)<<dId<<left<<setw(15)<<deg[degree]<<left<<setw(15)<<contactNo;
     cout<<left<<setw(15)<<experience<<left<<setw(10)<<fees<<left<<setw(30)<<s[specialization];
     cout<<left<<setw(20)<<h[gethname()]<<left<<setw(5)<<gethId()<<"\n\n";

}

void Doctor :: printDetailsInFile(ofstream &out,Doctor *dc,int n)				//function overloading (Polymorphism)
{
	out<<"\t\t\t****************DOCTORS DETAILS**************** \t\n\n\n";
	for(int j=0;j<140;j++)
	out<<"_";
	out<<endl;
	out<<left<<setw(20)<<"Doctor's Name"<<left<<setw(5)<<"ID";
	out<<left<<setw(15)<<"Degree"<<left<<setw(15)<<"Contact"<<left<<setw(15)<<"Experience";
	out<<left<<setw(10)<<"Fees"<<left<<setw(30)<<"Specialization"<<left<<setw(20)<<"Hospital name";
	out<<left<<setw(5)<<"HID\n";
	out<<endl;
	for(int i=0;i<n;i++)
	{
	out<<left<<setw(20)<<drn[dc[i].dname]<<left<<setw(5)<<dc[i].dId<<left<<setw(15)<<deg[dc[i].degree];
	out<<left<<setw(15)<<dc[i].contactNo;
        out<<left<<setw(15)<<dc[i].experience<<left<<setw(10)<<dc[i].fees<<left<<setw(30)<<s[dc[i].specialization];
        out<<left<<setw(20)<<h[dc[i].gethname()]<<left<<setw(5)<<dc[i].gethId()<<"\n\n";
	}
	for(int j=0;j<140;j++)
	out<<"_";
	out<<endl<<endl;
}

class Patient : public Doctor				//child class of Doctor		(Multi level Inheritance)
{
	int pId;
	int gender;
	int age;
	int disease;
	int contact;
	int Address;
	
public:

	char status[20];
	int pname;

	Patient()
	{
	pname=1+rand()%47;				//Patient Name
	pId=1+rand()%1000;				//Patient ID
	gender=1+rand()%2;
	age=18+rand()%42;
	contact=9000000000+rand()%999999999;
	Address=1+rand()%63;
	disease=1+rand()%16;
	strcpy(status,getStatus());
	appointment=getAppointment();
	}	

	char* getStatus()				//Provide health status on the basis of Age
	{
	if(age<=40)
	strcpy(status,"Fine");
	else if(age>40)
	strcpy(status,"Critical");
	return status;
	}
	
	char* getSuggestions()					//will return Medicines name
	{
	return m[disease]; 
	}
	
	int getPid()
	{
	return pId;
	}
	
	int getAge()
	{
	return age;
	}
	
	void setAge(int a)
	{
	age=a;
	}
	
	int getDisease()
	{
	return disease;
	}
	
	int getAppointment();
	void printDetails();
	void searchByPid(Patient *pt,int n);
	void searchByAgeGroup(Patient *pt,int n);
	void sortByDisease(Patient *pt,int n);
	void modifyAge(Patient *pt,int n);
	void deleteByPid(Patient *pt,int n);
	void deleteByPname(Patient *pt,int n);
	void printDetailsInFile(ofstream &out,Patient *pt,int n);

};

void Patient :: modifyAge(Patient *pt,int n)
{
	int id;
	int a;
	int c=0;
	cout<<"\nEnter the Patient's ID whose Age you want to Modify:\n";
	cin>>id;
	cout<<"\nEnter the Patient's correct Age :\n";
	cin>>a;
	for(int i=0;i<n;i++)
	{
		if(pt[i].getPid()==id)
			{c++;
			pt[i].setAge(a);
			}
	}
	if(c==0)
	cout<<"\nNo Such Patient ID is found\n";
	else 
	cout<<"\nModified !!!!!!!\n";
}

void Patient :: searchByPid(Patient *pt,int n)
{
	int id;
	int c=0;
	cout<<"\nEnter the Patient ID you are searching for:\n";
	cin>>id;
	for(int i=0;i<n;i++)
	{
		if(pt[i].getPid()==id)
			{c++;
			cout<<"\nPatient is found with input Patient ID ( "<<id<<" )\n\n";
			cout<<"Patient Name : "<<p[pt[i].pname]<<"\n\n";	
			return;
			}
	}
	if(c==0)
	cout<<"\nNo Patient is found with input Patient ID ( "<<id<<" )\n"<<"Enter a valid Patient ID\n\n";	


}

void Patient :: sortByDisease(Patient *pt,int n)
{
	int i,j,c;
	for(j=0;j<17;j++)
	{c=0;
	cout<<"\t\t"<<"\n\nDisease : "<<dis[j]<<"\t\n\n";
	for(i=0;i<n;i++)
	{	
		if(strcmp(dis[pt[i].getDisease()],dis[j])==0)
			{	
				cout<<"\t\t\t* "<<p[pt[i].pname];
				cout<<"\n";
				c++;
			}
		
	}
	if(c==0)
	cout<<"\t\tNo Patient is found with this disease\n\n\n";
	}


}

int Patient :: getAppointment()
{
	int y=2021,m,d;
	m=11+rand()%1;
	d=1+rand()%29;
	appointment=y*10000+m*100+d;
	return appointment;
}

void Patient :: printDetails()				//function overriding
{


	cout<<left<<setw(20)<<p[pname]<<left<<setw(5)<<pId<<left<<setw(8)<<g[gender]<<left<<setw(5)<<age<<left<<setw(15)<<contact;
   cout<<left<<setw(15)<<l[Address]<<left<<setw(15)<<appointment<<left<<setw(20)<<dis[disease]<<left<<setw(20)<<status;
   cout<<left<<setw(20)<<getSuggestions()<<left<<setw(20)<<h[gethname()]<<left<<setw(20)<<drn[dname]<<"\n\n";


}

void Patient :: printDetailsInFile(ofstream &out,Patient *pt, int n)			//function overloading (Polymorphism)
{

		out<<"\t\t\t****************PATIENTS DETAILS**************** \t\n\n\n";
		for(int j=0;j<175;j++)
		out<<"_";
		out<<endl;
		out<<left<<setw(20)<<"Patient's Name"<<left<<setw(5)<<"PID";
		out<<left<<setw(8)<<"Gender"<<left<<setw(5)<<"Age";
	        out<<left<<setw(15)<<"Contact"<<left<<setw(15)<<"Address"<<left<<setw(15)<<"Appointment";
	        out<<left<<setw(20)<<"Disease"<<left<<setw(20)<<"Health Status";
	        out<<left<<setw(20)<<"Suggestions"<<left<<setw(20)<<"Hospital's Name";
		out<<left<<setw(20)<<"Doctor's Name\n";
		out<<endl;
		for(int i=0;i<n;i++)
		{
		out<<left<<setw(20)<<p[pt[i].pname]<<left<<setw(5)<<pt[i].pId<<left<<setw(8)<<g[pt[i].gender];
		out<<left<<setw(5)<<pt[i].age<<left<<setw(15)<<pt[i].contact;
   		out<<left<<setw(15)<<l[pt[i].Address]<<left<<setw(15)<<pt[i].appointment<<left<<setw(20)<<dis[pt[i].disease];
   		out<<left<<setw(20)<<pt[i].status<<left<<setw(20)<<pt[i].getSuggestions();
   		out<<left<<setw(20)<<h[pt[i].gethname()]<<left<<setw(20)<<drn[pt[i].dname]<<"\n\n";

		}
		for(int j=0;j<175;j++)
		out<<"_";
	        out<<endl<<endl;

}

void Patient :: searchByAgeGroup(Patient *pt,int n)
{

	int max,min;
	int c=0;
	cout<<"\nEnter the max Patient age:";
	cin>>max;
	cout<<"\nEnter the min Patient age:";
	cin>>min;
	for(int i=0;i<n;i++)
	{
		if((pt[i].getAge()>=min) && (pt[i].getAge()<=max))
			{c++;
			if(c==1)
			{cout<<"\nPatients having age between [ "<<min<<" , "<<max<<" ]\n\n";}	
			cout<<"\t\t * "<<p[pt[i].pname]<<" - age -> "<<pt[i].getAge()<<"\n";
			}
	}
	cout<<"\n\n";
	if(c==0)
	cout<<"\nNo Patient is found with input Age Group [ "<<min<<" , "<<max<<" ]\n\n";	


}


void Patient :: deleteByPid(Patient *pt,int n)
{

	int id;
	cout<<"\nEnter patient id: ";
	cin>>id;
	for(int i=0;i<n;i++)
	{
		if(pt[i].pId==id)
		{
			pt[i].pname=0;
			pt[i].pId=0;
			pt[i].gender=0;
			pt[i].age=0;
			pt[i].contact=0;
			pt[i].Address=0;
			pt[i].disease=0;
			strcpy(pt[i].status,"Nill");
			pt[i].appointment=0;
			pt[i].dname=0;
			pt[i].hname=0;
			cout<<"\nDeleted !!!!\n";
			return;
		}
	}
	cout<<"\nNo Patient is found with input Patient ID ( "<<id<<" )\n"<<"Enter a valid Patient ID\n\n";	

}

void Patient :: deleteByPname(Patient *pt,int n)
{

	char pp[20];
	cout<<"\nEnter patient Name: ";
	cin>>pp;
	for(int i=0;i<n;i++)
	{
		if(strcasecmp(p[pt[i].pname],pp)==0)
		{
			
			
			pt[i].pname=0;
			pt[i].pId=0;
			pt[i].gender=0;
			pt[i].age=0;
			pt[i].contact=0;
			pt[i].Address=0;
			pt[i].disease=0;
			strcpy(pt[i].status,"Nill");
			pt[i].appointment=0;
			pt[i].dname=0;
			pt[i].hname=0;
			cout<<"\nDeleted !!!!\n";
			return;
		}
	}
	cout<<"\nNo Patient is found with input Patient Name ( "<<pp<<" )\n"<<"Enter a valid Patient Name\n\n";	


}

int main(int argc, char *argv[]) 
{

	srand((unsigned)getpid());
	int n=50+rand()%100;
	n=(argc>1)? atoi(argv[1]):n;
	int c1,c2,c3,c4;
	
	Hospital h[n],h1;	//Generating n+1 objects of class Hospital
	Doctor d[n],d1;		//Generating n+1 objects of class Doctor
	Patient p[n],p1;		//Generating n+1 objects of class Patient
	
	ofstream out1;
	out1.open("projectData.txt");		//opening file
	
	if(out1.is_open())
	{
		h1.printDetailsInFile(out1,h,n);		//writing in the file data of hospitals
		out1<<"\n\n\n";
		d1.printDetailsInFile(out1,d,n);		//writing in the file data of doctors	
		out1<<"\n\n\n";
		p1.printDetailsInFile(out1,p,n);		//writing in the file data of patients
		out1<<"\n\n\n";
		out1.close();
	}
	else
		cout<<"Unable to open file!!!!!\n";
	
	
	cout<<"n = "<<n<<"\n\n";
	
    level:
	cout<<"\n\n\t\t\t\t***************HEALTHCARE SYSTEM***************\n\n";
	cout<<"\t\t________________________________________\n";
	cout<<"\t\t1. Enquiry Regarding Hospital\n";
	cout<<"\t\t2. Enquiry Regarding Doctor\n";
	cout<<"\t\t3. Enquiry Regarding Patient\n";
	cout<<"\t\t4. Exit\n";
	cout<<"\t\t________________________________________\n\n";
	cout<<"\nEnter your choice :";
	cin>>c1;
	cout<<endl;
	switch(c1)
	{
	l1:
		case 1:
			cout<<"\t\t__________________________________________________\n";
			cout<<"\t\t1.Print Hospital Details\n";
			cout<<"\t\t2.Sort Hospital Details by Ratings\n";
			cout<<"\t\t3.Sort Hospital Details by Bed Capacity\n"; 
			cout<<"\t\t4.Go back\n";
			cout<<"\t\t__________________________________________________\n\n";
			cout<<"\nEnter your choice :";
			cin>>c2;
			cout<<endl;
			switch(c2)
			{
				case 1:
					cout<<"\t\t\t\t\t****************HOSPITAL DETAILS**************** \t\n\n\n";
					for(int j=0;j<111;j++)
					cout<<"_";
					cout<<endl;
					cout<<left<<setw(20)<<"Name"<<left<<setw(5)<<"ID"<<left<<setw(15)<<"Location";
					cout<<left<<setw(15)<<"Contact"<<left<<setw(15)<<"Bed Capacity";
					cout<<left<<setw(10)<<"Rating"<<left<<setw(10)<<"Type"<<left<<setw(21)<<"Year of Establishment\n";
					cout<<endl;
					for(int i=0;i<n;i++)
					{
					h[i].printDetails();
					}
					for(int j=0;j<111;j++)
					cout<<"_";
					cout<<endl<<endl;
					goto l1;
					break;	
				case 2:	
					h1.sortByRating(h,n);
					goto l1;
					break;
				case 3:
					h1.sortByBedCapacity(h,n);
					goto l1;
					break;
				case 4:
					goto level;
					break;	
				default:
					cout<<"\nEnter valid choice.....";
					goto l1;
					break;
				  	
	
			}
			break;
	l2:	
		case 2:
			cout<<"\t\t__________________________________________________\n";
			cout<<"\t\t1.Print Doctors Details\n";
			cout<<"\t\t2.Sort Doctors by Doctor's Experience\n";
			cout<<"\t\t3.Sort Doctors by Doctor's Fees\n";
			cout<<"\t\t4.Sort Doctors by Doctor's Specialization\n";
			cout<<"\t\t5.Search by Hospital name\n";
			cout<<"\t\t6.Search by Doctor's Id\n";
			cout<<"\t\t7.Modify Contact\n";
			cout<<"\t\t8.Modify Experience\n"; 
			cout<<"\t\t9.Go back\n";
			cout<<"\t\t__________________________________________________\n\n";
			cout<<"\nEnter your choice :";
			cin>>c3;
			cout<<endl;
			switch(c3)
			{
				case 1:
					cout<<"\t\t\t\t\t****************DOCTORS DETAILS**************** \t\n\n\n";
					for(int j=0;j<140;j++)
					cout<<"_";
					cout<<endl;
					cout<<left<<setw(20)<<"Doctor's Name"<<left<<setw(5)<<"ID";
					cout<<left<<setw(15)<<"Degree"<<left<<setw(15)<<"Contact"<<left<<setw(15)<<"Experience";
					cout<<left<<setw(10)<<"Fees"<<left<<setw(30)<<"Specialization"<<left<<setw(20)<<"Hospital name";
					cout<<left<<setw(5)<<"HID\n";
					cout<<endl;
					for(int i=0;i<n;i++)
					{
					d[i].printDetails();
					}
					for(int j=0;j<140;j++)
					cout<<"_";
					cout<<endl<<endl;
					goto l2;
					break;	
				case 2:	
					d1.sortByexperience(d,n);
					goto l2;
					break;
				case 3:
					d1.sortByFees(d,n);
					goto l2;
					break;
				case 4:
					d1.sortBySpec(d,n);
					goto l2;
					break;
				case 5:
					d1.searchByHname(d,n);
					goto l2;
					break;		
				case 6:
					d1.searchByDid(d,n);
					goto l2;
					break;
				case 7:
					d1.modifyContact(d,n);
					goto l2;
					break;		
				case 8:
					d1.modifyExperience(d,n);
					goto l2;
					break;	
				case 9:
					goto level;
					break;	
				default:
					cout<<"\nEnter valid choice.....";
					goto l2;
					break;
				  	
	
			}
			break;
	
	l3:	
		case 3:
			cout<<"\t\t________________________________________\n";
			cout<<"\t\t1.Print Patients Details\n";
			cout<<"\t\t2.Sort Patient by Disease\n";
			cout<<"\t\t3.Search by Age Group\n";
			cout<<"\t\t4.Search by Patient's Id\n";
			cout<<"\t\t5.Modify Age\n";
			cout<<"\t\t6.Delete by Patient ID\n";
			cout<<"\t\t7.Delete by Patient name\n"; 
			cout<<"\t\t8.Go back\n";
			cout<<"\t\t________________________________________\n\n";
			cout<<"\nEnter your choice :";
			cin>>c4;
			cout<<endl;
			switch(c4)
			{
				case 1:
					cout<<"\t\t\t\t\t****************PATIENTS DETAILS**************** \t\n\n\n";
					for(int j=0;j<175;j++)
					cout<<"_";
					cout<<endl;
					cout<<left<<setw(20)<<"Patient's Name"<<left<<setw(5)<<"PID";
					cout<<left<<setw(8)<<"Gender"<<left<<setw(5)<<"Age";
				        cout<<left<<setw(15)<<"Contact"<<left<<setw(15)<<"Address"<<left<<setw(15)<<"Appointment";
				        cout<<left<<setw(20)<<"Disease"<<left<<setw(20)<<"Health Status";
				        cout<<left<<setw(20)<<"Suggestions"<<left<<setw(20)<<"Hospital's Name";
					cout<<left<<setw(20)<<"Doctor's Name\n";
					cout<<endl;
					for(int i=0;i<n;i++)
					{
					p[i].printDetails();
					}
					for(int j=0;j<175;j++)
					cout<<"_";
					cout<<endl<<endl;
					goto l3;
					break;	
				case 2:	
					p1.sortByDisease(p,n);
					goto l3;
					break;
				case 3:
					p1.searchByAgeGroup(p,n);
					goto l3;
					break;
				case 4:
					p1.searchByPid(p,n);
					goto l3;
					break;
				case 5:
					p1.modifyAge(p,n);
					goto l3;
					break;		
				case 6:
					p1.deleteByPid(p,n);
					goto l3;
					break;
				case 7:
					p1.deleteByPname(p,n);
					goto l3;
					break;			
				case 8:
					goto level;
					break;	
				default:
					cout<<"\nEnter valid choice.....";
					goto l3;
					break;
				  	
	
			}
			break;
	
		case 4:
			return 0;
			break;
			
		default:
			cout<<"\nEnter valid choice.....";
			goto level;
			break;
		
	}

	
	return 0;

}

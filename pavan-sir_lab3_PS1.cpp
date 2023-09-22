#include <iostream>
using namespace std;

int main()
{
  
  int students_no;
  
  cout<<endl<<"enter the number of students: ";
  cin>>students_no;
  
  for(int i=1;i<=students_no;i++)
  { 
    string name;
    int as_1,as_2,as_3;
    int average;
    char grade;
    
    cout<<endl<<endl<<endl<<"enter name of student: ";
    cin>>name;
    cout<<endl;
    
    again:
    cout<<"enter the marks of assignments 1,2,3: ";
    cin>>as_1>>as_2>>as_3;
    cout<<endl;
    
    if((as_1 < 0 || as_1>100 ) || (as_2 < 0 || as_2>100 ) || (as_3 < 0 || as_3>100 ))
    {
    	cout<<"invalid score, enter again\n";
    	goto again;
    }
    
    
    average = (as_1 + as_2 +as_3)/3;
    
    cout<<"Name: "<<name<<endl;
    cout<<"Assignments' scores: "<<as_1<<"  "<<as_2<<"  "<<as_3;
    cout<<endl; 
    
    
    
    
    if (average>=90 && average<=100)
    
    cout<<"average is "<<average<<" with grade: A"<<endl;
   
    else if (average>=80 && average<=89)
    cout<<"average is "<<average<<" with grade: B"<<endl;
    
    else if (average>=70 && average<=79)
    cout<<"average is "<<average<<" with grade: C"<<endl;
    
    else if (average>=60 && average<=69)
    cout<<"average is "<<average<<" with grade: D"<<endl;
    
    else
    cout<<"average is "<<average<<" with grade: F"<<endl;
    
  }
  
  

  
  
  return 0;

}

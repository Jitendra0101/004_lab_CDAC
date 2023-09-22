#include <iostream>

int main() 
{
  
  int choice,a,b,choice2;
  
  do
  {
  std::cout<<"\n1. string concat\n 2. calculator\n 3. exit\n enter a choice: \n";
  std::cin>>choice;
  
  if(choice==1)
  {
    
  std::string str1,str2,concat;
  
  std::cout<<"\nenter two chars: \n";
  std::cin>>str1>>str2;
  concat=str1+str2;
  std::cout<<concat;
  }
  else if(choice==2)
  {
  std::cout<<"\nMENU \n 1. addition \n2. substraction\n3. multiplication\n4. division\n";
  std::cin>>choice2;
  std::cout<<"\n enter 2 numbers\n";
  std::cin>>a>>b;
  
  switch(choice2)
  {
    case 1:
    std::cout<<a+b;
    break;
    
    case 2:
    std::cout<<a-b;
    break;
        
    case 3:
    std::cout<<a*b;
    break;
    
    case 4:
    std::cout<<a/b;
    break;
    
    default:
    std::cout<<"\ninvalid input\n";
  }
  }
  
  }while(choice!=3);
  
  
  
    return 0;
}

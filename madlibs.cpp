//Authors: Lucas Eastburn

#include <iostream>
#include <string>

int main(){
std::string Name1;
std::string Noun1;
int number;
std::string Name2;
std::string adj;
double test_grade;

std::cout<<"MadLib Lab"<<std::endl;
std::cout<<"\nGive a name"<<std::endl;
std::cin>>Name1;
std::cout<<"Give a noun"<<std::endl;
std::cin>>Noun1;
std::cout<<"Give an integer"<<std::endl;
std::cin>>number;
std::cout<<"Give a different name"<<std::endl;
std::cin>>Name2;
std::cout<<"Finally give a decimal percentage out of 100"<<std::endl;
std::cin>>test_grade;


std::cout<<"\nOnce upon a time, there was a boy named "<<Name1<<"."<<std::endl;
std::cout<<"His favorite thing in the whole world to eat was "<<Noun1<<"."<<std::endl;
std::cout<<"He likes it so much that one time he ate "<<number<<" of them."<<std::endl;
std::cout<<"He was also known as a big liar, so when his friend "<<Name2<<" asked about his eating habbits,"<<std::endl;
std::cout<<"he said it was "<<adj<<"."<<std::endl;
std::cout<<"And nobody knew if he was being honest."<<std::endl;
std::cout<<"Though he also said he got a "<<test_grade<<"percent on his math test."<<std::endl;



  return 0;
}

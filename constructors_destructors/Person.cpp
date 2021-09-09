#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Person
{
    char name[20];
    char sex;
    int age;
    char place[20];
    public:
    Person(char n[20],char s,int a,char p[10]);
    void display(void);
    ~Person()
    {
        cout<<"\nDestructor at work";
    }    
};
Person::Person(char n[20],char s,int a,char p[20])
{
    cout<<"\nConstruvtor at work";
    strcpy(name,n);
    sex=s;
    age=a;
    strcpy(place,p);
}
void Person::display(void)
{
    cout<<"\n Name: "<<name;
    cout<<"\n sex: "<<sex;
    cout<<"\n age: "<<age;
    cout<<"\n place: "<<place;
}
int main()
{
    system("cls");
    char name[20];
    char sex;
    int age;
    char place[20];
    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"\nEnter sex: ";
    cin>>sex;
    cout<<"\nEnter age: ";
    cin>>age;
    cout<<"\nEnter place: ";
    cin>>place;
    Person p(name,sex,age,place);
    p.display();
    return 0;
    
}


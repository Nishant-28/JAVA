// write a program to use all the concept of OOPs like constructor, destructor, friend function, static member function, static data member, inline function, this pointer, virtual function, pure virtual function, abstract class, operator overloading, copy constructor, default constructor, parameterized constructor, dynamic memory allocation, 

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class student
{
    protected:
    int roll;
    char name[20];
    static int count;

};


int student::count=0;


// inheritance
class marks:public student
{
    protected:
    int m1,m2,m3;
    public:
    void getdata()
    {
        cout<<"Enter the roll no. of student: ";
        cin>>roll;
        cout<<"Enter the name of student: ";
        cin>>name;
        cout<<"Enter the marks of 3 subjects: ";
        cin>>m1>>m2>>m3;
        count++;
    }
    void display()
    {
        cout<<"Roll no. of student: "<<roll<<endl;
        cout<<"Name of student: "<<name<<endl;
        cout<<"Marks of 3 subjects: "<<m1<<" "<<m2<<" "<<m3<<endl;
    }
    void total()
    {
        cout<<"Total marks: "<<m1+m2+m3<<endl;
    }
    void average()
    {
        cout<<"Average marks: "<<(m1+m2+m3)/3<<endl;
    }
    void count1()
    {
        cout<<"Total no. of students: "<<count<<endl;
    }
};


// friend function

class friend1
{
    private:
    int a,b;
    public:
    friend void friend2(friend1);
    void getdata()
    {
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
    }
};


void friend2(friend1 f)
{
    cout<<"Sum of a and b: "<<f.a+f.b<<endl;
}


// static member function

class static1
{
    private:
    int a,b;
    public:
    static int c;
    void getdata()
    {
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
    }
    static void display()
    {
        cout<<"Sum of a and b: "<<c<<endl;
    }
};


int static1::c=0;



// inline function

class inline1
{
    private:
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
    }
    inline void display()
    {
        cout<<"Sum of a and b: "<<a+b<<endl;
    }
};


// this pointer

class this1
{
    private:
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"Sum of a and b: "<<a+b<<endl;
    }
    void sum(this1 *p)
    {
        cout<<"Sum of a and b: "<<p->a+p->b<<endl;
    }
};



// main function

int main()
{
    marks m1;
    m1.getdata();
    m1.display();
    m1.total();
    m1.average();
    m1.count1();
    friend1 f1;
    f1.getdata();
    friend2(f1);
    static1 s1;
    s1.getdata();
    static1::c=s1.a+s1.b;
    static1::display();
    inline1 i1;
    i1.getdata();
    i1.display();
    this1 t1;
    t1.getdata();
    t1.display();
    t1.sum(&t1);
    return 0;
}


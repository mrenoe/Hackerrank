/*
Input Format
There are two types of input. If the object being created is of the Professor class, you will have to input the name, age and publications of the professor.

If the object is of the Student class, you will have to input the name, age and the marks of the student in subjects.


Constraints
1<=len_name<=100, where len_name  is the length of the name. 
1<=age<=80
1<=publications<=1000
0<=marks<=100, where marks is the marks of the student in each subject.

Output Format
There are two types of output depending on the object.

If the object is of type Professor, print the space separated name, age, publications and id on a new line.

If the object is of the Student class, print the space separated name, age, the sum of the marks in  subjects and id on a new line.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* User generated Code begin */
static int student_cur_id = 1;
static int prof_cur_id = 1;
class Person {
    
    public:
        Person(void){};
        ~Person(void){};
        virtual void getdata(void){};
        virtual void putdata(void){};
};
class Professor : public Person{
public: 
    int _publications;
    int _age;
    int _cur_id;
    string _name;

    Professor(void){
        _cur_id = prof_cur_id;
        prof_cur_id++;
    }

    ~Professor(void){};

    void getdata(void){
        string name;
        int age;
        int publications;
        cin >> name >> age >> publications;
        _publications = publications;
        _age = age;
        _name = name;
    }
    
    void putdata(void){
        cout << _name << " "<< _age << " "<<_publications <<" " << _cur_id<<endl; 
    }
};
class Student : public Person{
    public:
    int _cur_id;
    int marks[6];
    int _age;
    string _name;

    Student(){
        _cur_id = student_cur_id;
        student_cur_id++;
    }

    ~Student(){};  

    void getdata(void){
        string name;
        int age;
        cin >> name >> age;
        for (int i = 0; i < 6; i++){
            cin >> marks[i];
        }
        _age = age;
        _name = name;
    }
    
    void putdata(void){
        int sum = 0;
        for (int i = 0; i < 6; i++){
            sum+=marks[i];
        }
        cout << _name << " "<< _age << " "<<sum <<" " << _cur_id<<endl; 
    }
    
};
/* End user generated code */
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

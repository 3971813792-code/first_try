/*
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student
{
private:
    string name;
    int a,b,c;
    float aver;
public:
    Student() {};
    Student(string n,int aa,int bb,int cc);
    void print();
    int judge();
    void count();
};
Student::Student(string n,int aa,int bb,int cc):name(n),a(aa),b(bb),c(cc){}
void Student::print()
{
    cout<<name<<' '<<a<<' '<<b<<' '<<c<<' ';
    cout<<fixed<<setprecision(2)<<aver<<endl;
}
int Student::judge()
{
    if (aver<60)
        return 0;
    return 1;
}

void Student::count()
{
    aver=(a+b+c)/3.0;
}

int main()
{
    string s;
    int z,x,c;
    int N;
    cin>>N;
    Student q[N];
    for(int i=0;i<N;i++)
    {
        cin>>s>>z>>x>>c;
        q[i]=Student(s,z,x,c);
        q[i].count();
    }
    for(int i=N-1;i>=0;i--)
    {
        if(q[i].judge())
            q[i].print();
    }
    return 0;
}

#include<iostream>
#include<string>
#include<iomanip>
#include<map>

using namespace std;
class Student
{
private:
    string sushe;
    string name;
    int height,weight;
public:
    Student(){};
    Student(string s,string n,int h,int w);
    string Getsushe() const;
    string Getname() const;
    int Getheight() const;
    int Getweight() const;
};

Student::Student(string s,string n,int h,int w):sushe(s),name(n),height(h),weight(w){}
string Student::Getsushe() const{return sushe;}
string Student::Getname() const{return name;}
int Student::Getweight() const{return weight;}
int Student::Getheight() const{return height;}

int main()
{
    map <string,Student> mp;//创建了一个空字典
    int N;
    cin>>N;
    string sh;
    string nn;
    int ht,wt;
    for(int i=0;i<N;i++)
    {
        cin>>sh>>nn>>ht>>wt;
        Student s=Student(sh,nn,ht,wt);
        if(mp.find(sh)==mp.end())
            mp[sh]=s;
        else
        {
            if(ht>mp[sh].Getheight())
                mp[sh]=s;
        }
    }
    cout<<endl;
    for(auto &p:mp)
    {
        cout<<setw(9)<<setfill('0');
        cout<<p.second.Getsushe()<<endl;
        cout<<setfill('0')<<p.second.Getsushe()<<endl;
        cout<<setw(9)<<p.second.Getsushe()<<endl;
        cout<<endl;

        cout<<p.second.Getname()<<' ';
        cout<<p.second.Getheight()<<' ';
        cout<<p.second.Getweight()<<endl;
        
    }
    return 0;
}



#include<iostream>
using namespace std;
class Student
{
private:
    int num,score;
public:
    Student(){};
    Student(int n,int s);
    void print();
};
void Student::print()
{
    cout<<num<<' '<<score<<endl;
}
Student::Student(int n,int s):num(n),score(s){};

int main()
{
    Student *p=new Student[5];
    int a,b;
    for(int i=0;i<5;i++)
    {
        cin>>a>>b;
        p[i]=Student(a,b);
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        p[i].print();
    }
    return 0;
}


#include<iostream>

using namespace std;
class Student
{
private:
    int grade;
    static int total;
public:
    Student(){};
    Student(int g);
    static int Gettotal();
    static int Getaver();
};

int Student::total=0;
Student::Student(int g):grade(g){total+=g;}
int Student::Gettotal() {return total;}
int Student::Getaver(){return total/5;}

int main()
{
    int a;
    Student *p=new Student[5];
    for(int i=0;i<5;i++)
    {
        cin>>a;
        p[i]=Student(a);
    }
    cout<<Student::Gettotal()<<endl;
    cout<<Student::Getaver()<<endl;
    return 0;
}


#include<iostream>
#include<string>
using namespace std;
class People
{
private:
    string name;
    int age,height,weight;
    static int num;
public:
    People(){};
    People(string n,int a,int h,int w);
    void show();
    static void show_num();
};
int People::num=0;
People::People(string n,int a,int h,int w):name(n),age(a),height(h),weight(w){num+=1;}
void People::show(){cout<<name<<' '<<age<<' '<<height<<' '<<weight<<endl;}
void People::show_num(){cout<<People::num;}

int main()
{
    string m;
    while(cin>>m)
    {
        if(m=="exit")
            break;
        else
        {
            int w,e,r;
            cin>>w>>e>>r;
            People p=People(m,w,e,r);
        }
        
    }
    People::show_num();
    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
const double PI=3.141592653589793;
class pool
{
private:
    float r;
public:
    pool(){};
    pool(float rr);
    float Getzhalan();
    float Getguodao();
};
pool::pool(float rr):r(rr){}
float pool::Getzhalan(){return 2*PI*(r+3)*35;}
float pool::Getguodao(){return (PI*(r+3)*(r+3)-PI*r*r)*20;}

int main()
{
    int n;
    cin>>n;
    pool s=pool(n);
    cout<<"Fencing Cost is $"<<fixed<<setprecision(2)<<s.Getzhalan()<<endl;
    cout<<"Concrete Cost is $"<<fixed<<setprecision(1)<<s.Getguodao()<<endl;
    return 0;
    
}



#include<iostream>
using namespace std;
class Time
{
private:
    int days;
    int hours;
    int minutes;
public:
    Time(int d=0,int h=0, int m=0);
    Time Sum(const Time & t);
    void Show() const;
};

Time::Time(int d,int h, int m):days(d),hours(h),minutes(m){}
Time Time::Sum(const Time & t)
{
    Time tmp;
    tmp.days=days+t.days;
    tmp.hours=hours+t.hours;
    tmp.minutes=minutes+t.minutes;
    if(tmp.minutes>=60)
    {
        tmp.hours+=tmp.minutes/60;
        tmp.minutes%=60;
    }
    if(tmp.hours>=24)
    {
        tmp.days+=tmp.hours/24;
        tmp.hours%=24;
    }
    return tmp;
}

void Time::Show() const
{
    cout<<days<<' '<<hours<<' '<<minutes<<endl;
}

int main()
{
    int d1,h1,m1,d2,h2,m2;
    cin>>d1>>h1>>m1>>d2>>h2>>m2;
    Time t1(d1,h1,m1);
    Time t2(d2,h2,m2);
    Time t3=t1.Sum(t2);
    t3.Show();
    return 0;
}


#include <iostream>
#include<iomanip>
using namespace std;

const double PI=3.14;
class Dot
{
private:
    float x,y;
public:
    Dot(){};
    Dot(float x,float y);
    ~Dot();
};
Dot::Dot(float xx,float yy):x(xx),y(yy){cout<<"Dot constructor called"<<endl;}
Dot::~Dot(){cout<<"Dot destructor called"<<endl;}

class Cir:public Dot
{
private:
    float r;
public:
    double getArea();
    Cir(){};
    Cir(float xx,float yy,float rr);
    ~Cir();
};

Cir::Cir(float xx,float yy,float rr):Dot(xx,yy),r(rr){cout<<"Cir constructor called"<<endl;}
Cir::~Cir(){cout<<"Cir destructor called"<<endl;}
double Cir::getArea()
{
    return PI*r*r;
}

int main(){
    float x,y,r;
    cin>>x>>y>>r;
    Cir c(x,y,r);
    cout<<fixed<<setprecision(2)<<c.getArea()<<endl;
    return 0;
}


#include<iostream>
using namespace std;

class Date
{
protected:
    int year;
    int month;
    int day;
public:
    Date(int y=0,int m=0,int d=0);
};
Date::Date(int y,int m,int d):year(y),month(m),day(d){};
class Time
{
protected:
    int hour;
    int minute;
    int second;
public:
    Time(int h=0,int m=0,int s=0);
};
Time::Time(int h,int m,int s):hour(h),minute(m),second(s){};

class Schedule:public Date,public Time
{
private:
    int ID;
public:
    Schedule(int id=0,int y=0,int m=0,int d=0,int h=0,int mm=0,int s=0);
    bool operator<(const Schedule & s2);
    void show();
};

Schedule::Schedule(int id,int y,int m,int d,int h,int mm,int s):Date(y,m,d),Time(h,mm,s),ID(id){};
bool Schedule::operator<(const Schedule & s2)
{
    if(year!=s2.year) return year<s2.year;
    if (month != s2.month) return month < s2.month;
    if (day != s2.day) return day < s2.day;
    if (hour != s2.hour) return hour < s2.hour;
    if (minute != s2.minute) return minute < s2.minute;
    return second < s2.second;
}

void Schedule::show()
{
    cout<<"The urgent schedule is No.1:"<<year<<'/'<<month<<'/'<<day<<' '<<hour<<':'<<minute<<':'<<second<<endl;
}

int main()
{
    int id;
    int y,m,d,h,mm,s;
    cin>>id;
    if(id==0) return 0;
    scanf("%d/%d/%d %d:%d:%d",&y,&m,&d,&h,&mm,&s);
    Schedule earliest(id,y,m,d,h,mm,s);
    while(cin>>id)
    {
        if(id==0)
            break;
        scanf("%d/%d/%d %d:%d:%d",&y,&m,&d,&h,&mm,&s);
        Schedule temp(id,y,m,d,h,mm,s);
        if(temp<earliest)
            earliest=temp;
    }
    earliest.show();
    return 0;
}




#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    Person(string n="name",int ag=0);
    ~Person(){cout<<"Person 析构函数被调用"<<endl;}
    void showInfo();
};

Person::Person(string n,int ag):name(n),age(ag){cout<<"Person 构造函数被调用"<<endl;}
void Person::showInfo()
{
    cout<<name<<' '<<age<<endl;
}

class Student:public Person
{
private:
    string num;
    int total;
public:
    Student(string name,int age,string n,int t);
    ~Student(){cout<<"Student 析构函数被调用"<<endl;}
    void showInfo();
    void isPass();
};
Student::Student(string name,int age,string n,int t):Person(name,age),num(n),total(t){cout<<"Student 构造函数被调用"<<endl;}
void Student::showInfo()
{
    cout<<"姓名: "<<name<<' '<<"年龄: "<<age<<endl;
    cout<<"学号: "<<num<<' '<<"总分: "<<total<<endl;
}
void Student::isPass()
{
    if(total>=300)
        cout<<"该学生成绩合格。"<<endl;
    else
        cout<<"该学生成绩不合格。"<<endl;
}
int main()
{
    
    string nn;
    int aa;
    string xuehao;
    int sum;
    cin>>nn>>aa>>xuehao>>sum;
    cout<<endl;
    Student s(nn,aa,xuehao,sum);
    s.showInfo();
    s.isPass();
    return 0;
}


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Score
{
private:
    int chinese;
    int math;
    int english;
public:
    Score(int c=0,int m=0,int e=0);
    int getTotal();
    void showScore();
    float getaver();
};
Score::Score(int c,int m,int e):chinese(c),math(m),english(e){}
int Score::getTotal()
{
    return chinese+math+english;
}
void Score::showScore()
{
    cout<<"语文: "<<chinese<<" 数学: "<<math<<" 英语: "<<english<<" 总分: "<<getTotal()<<endl;
}
float Score::getaver()
{
    return (chinese+math+english)/3.0;
}

class Person
{
protected:
    string name;
    string sex;
    int age;
public:
    Person(string n="name",string s="女",int a=0);
    void showInfo();
};
Person::Person(string n,string s,int a):name(n),sex(s),age(a){}
void Person::showInfo()
{
    cout<<"姓名: "<<name<<" 性别: "<<sex<<" 年龄: "<<age<<endl;
}
class Student:public Person
{
private:
    string num;
    string zhuanye;
    int nianji;
    Score s;
public:
    Student(string nn,string ss,int aa,int cc,int mm,int ee,string nu,string zhuan,int nian);
    void showAll_Info();
    float getAvg();
};
Student::Student(string nn,string ss,int aa,int cc,int mm,int ee,string nu,string zhuan,int nian):Person(nn,ss,aa),s(cc,mm,ee),num(nu),zhuanye(zhuan),nianji(nian){}
float Student::getAvg()
{
    return s.getaver();
}
void Student::showAll_Info()
{
    showInfo();
    s.showScore();
    cout<<"学号: "<<num<<" 专业: "<<zhuanye<<" 年级: "<<nianji<<endl;
    cout<<"三科平均分: ";
    cout<<fixed<<setprecision(2)<<getAvg()<<endl;
}

int main()
{
    string nn;
    string ss;
    int aa,cc,mm,ee;
    string nu;
    string zhuan;
    int nian;
    
    for(int i=0;i<2;i++)
    {
        cin>>nn>>ss>>aa>>cc>>mm>>ee>>nu>>zhuan>>nian;
        Student tmp(nn,ss,aa,cc,mm,ee,nu,zhuan,nian);
        cout<<"===== 学生"<<i+1<<"信息 ====="<<endl;
        tmp.showAll_Info();
        cout<<endl;
    }
    return 0;
}

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Person
{
protected:
    string name;
    string num;
    int age;
public:
    Person(string na,string nu,int ag);
    void showBaseInfo ();
    ~Person(){cout<<"Person 虚基类析构函数被调用"<<endl;}
};
Person::Person(string na,string nu,int ag):name(na),num(nu),age(ag){cout<<"Person 虚基类构造函数被调用"<<endl;}
void Person::showBaseInfo ()
{
    cout<<"姓名: "<<name<<" 编号: "<<num<<" 年龄: "<<age<<endl;
}

class Teacher:virtual public Person
{
protected:
    string kecheng;
    int time;
public:
    Teacher(string na,string nu,int ag,string ke,int tim);
    void showteacher();
    ~Teacher(){cout<<"Teacher 基类析构函数被调用"<<endl;}
};
Teacher::Teacher(string na,string nu,int ag,string ke,int tim):Person(na,nu,ag),kecheng(ke),time(tim){cout<<"Teacher 基类构造函数被调用"<<endl;}
void Teacher::showteacher()
{
    showBaseInfo ();
    cout<<"授课课程: "<<kecheng<<" 教龄: "<<time<<endl;
}

class Student:virtual public Person
{
protected:
    string zhuanye;
    int nianji;
public:
    Student(string na,string nu,int ag,string zhuan,int nian);
    void showStudent();
    ~Student(){cout<<"Student 基类析构函数被调用"<<endl;}
};
Student::Student(string na,string nu,int ag,string zhuan,int nian):Person(na,nu,ag),zhuanye(zhuan),nianji(nian){cout<<"Student 基类构造函数被调用"<<endl;}
void Student::showStudent()
{
    showBaseInfo ();
    cout<<"专业: "<<zhuanye<<" 年级: "<<nianji<<endl;
}
class Graduate:public Teacher,public Student
{
protected:
    string object;
    string daoshi;
public:
    Graduate(string na,string nu,int ag,string ke,int tim,string zhuan,int nian,string obj,string dao);
    void showGraduate ();
    ~Graduate(){cout<<"Graduate 派生类析构函数被调用"<<endl;}
};
Graduate::Graduate(string na,string nu,int ag,string ke,int tim,string zhuan,int nian,string obj,string dao):Person(na,nu,ag),Teacher(na,nu,ag,ke,tim),Student(na,nu,ag,zhuan,nian),object(obj),daoshi(dao){cout<<"Graduate 派生类构造函数被调用"<<endl;}
void Graduate::showGraduate ()
{
    cout<<"===== 研究生完整信息 ====="<<endl;
    showteacher();
    cout<<"专业: "<<zhuanye<<" 年级: "<<nianji<<endl;
    cout<<"研究方向: "<<object<<" 导师姓名: "<<daoshi<<endl;
}
int main()
{
    string na;
    string nu;
    int ag;
    string ke;
    int tim;
    string zhuan;
    int nian;
    string obj;
    string dao;
    
    cin>>na>>nu>>ag>>ke>>tim>>zhuan>>nian>>obj>>dao;
    Graduate tmp(na,nu,ag,ke,tim,zhuan,nian,obj,dao);
    tmp.showGraduate ();
    return 0;
}
 */


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class A {
public:
    A(int x) {
        cout << x << endl;
    }
};

int main() {
    A arr[3] = {1,2,3};
}

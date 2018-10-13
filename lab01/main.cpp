#include <QCoreApplication>
#include<QDebug>
#include<QString>
using namespace std;//使用命名空间
class student
{
public:
    int number;
     QString name;
     int test1;
     int test2;

};

//定义比较函数compare
bool compare1(student &v1, student &v2 )
{
    return v1.name>v2.name;
}
bool compare2(student &v1,student &v2 )
{
    return v1.test1>v2.test1;
}
bool compare3( student &v1, student &v2 )
{
    return v1.test2>v2.test2;
}


int main(int argc, char *argv[])
{
    student s[4];
    s[0].number=1403130209; s[0].name="鲁智深";  s[0].test1=80;s[0].test2=72;
    s[1].number=1403140101; s[1].name=" 林冲 ";  s[1].test1=82;s[1].test2=76;
    s[2].number=1403140102; s[2].name=" 宋江 ";  s[2].test1=76;s[2].test2=85;
    s[3].number=1403140103; s[3].name=" 武松 ";  s[3].test1=88;s[3].test2=80;

    QList<student> v; //创建链表并将s[i]中的数据复制到v[i]中
    v.append(s[0]);
    v.append(s[1]);
    v.append(s[2]);
    v.append(s[3]);
  qDebug()<<"排序前：";
      for(int i=0;i<4;i++)
         {
           qDebug().noquote()<<v[i].number<<v[i].name<<v[i].test1<<v[i].test2;

         }
         qDebug()<<endl;

  qDebug()<<"按姓名降序排序:";
      std::sort(v.begin(),v.end(),compare1);//调用比较前面定义的比较函数
      for(int i=0;i<4;i++)
        {
           qDebug().noquote()<<v[i].number<<v[i].name<<v[i].test1<<v[i].test2;

        }
         qDebug()<<endl;

 qDebug()<<"按课程1成绩降序排序:";
      std::sort(v.begin(),v.end(),compare2);
      for(int i=0;i<4;i++)
         {
            qDebug().noquote()<<v[i].number<<v[i].name<<v[i].test1<<v[i].test2;
         }
           qDebug()<<endl;


 qDebug()<<"按课程2成绩降序排序:";
    std::sort(v.begin(),v.end(),compare3);
    for(int i=0;i<4;i++)
       {
           qDebug().noquote()<<v[i].number<<v[i].name<<v[i].test1<<v[i].test2;
        }
        qDebug()<<endl;

}

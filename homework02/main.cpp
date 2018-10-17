#include <QDebug>
#include <QVector>
#include <QTextStream>
#include <QFile>

namespace SK {
enum SortKind{
    col01    =   0x00000001<<0,         //!< 第1列
    col02    =   0x00000001<<1,         //!< 第2列
    col03    =   0x00000001<<2,         //!< 第3列
    col04    =   0x00000001<<3,         //!< 第4列
    col05    =   0x00000001<<4,         //!< 第5列
    col06    =   0x00000001<<5,         //!< 第6列
    col07    =   0x00000001<<6,         //!< 第7列
    col08    =   0x00000001<<7,         //!< 第8列
    col09    =   0x00000001<<8,         //!< 第9列
    col10    =   0x00000001<<9,         //!< 第10列
    col11    =   0x00000001<<10,        //!< 第11列
    col12    =   0x00000001<<11,        //!< 第12列
    col13    =   0x00000001<<12,        //!< 第13列
    col14    =   0x00000001<<13,        //!< 第14列
    col15    =   0x00000001<<14,        //!< 第15列
    col16    =   0x00000001<<15,        //!< 第16列
    col17    =   0x00000001<<16,        //!< 第17列
    col18    =   0x00000001<<17,        //!< 第18列
    col19    =   0x00000001<<18,        //!< 第19列
    col20    =   0x00000001<<19,        //!< 第20列
    col21    =   0x00000001<<20,        //!< 第21列
    col22    =   0x00000001<<21,        //!< 第22列
    col23    =   0x00000001<<22,        //!< 第23列
    col24    =   0x00000001<<23,        //!< 第24列
    col25    =   0x00000001<<24,        //!< 第25列
    col26    =   0x00000001<<25,        //!< 第26列
    col27    =   0x00000001<<26,        //!< 第27列
    col28    =   0x00000001<<27,        //!< 第28列
    col29    =   0x00000001<<28,        //!< 第29列
    col30    =   0x00000001<<29,        //!< 第30列
    col31    =   0x00000001<<30,        //!< 第31列
    col32    =   0x00000001<<31,        //!< 第32列
};
}


typedef struct{
    // 请补全结构定义
public:
     QStringList v;
} studData;



QDebug operator<< (QDebug d, const studData &data) {
    // 请补全运算符重载函数，使其可以直接输出studData结构
    for(int i=0;i<data.v.size();i++)

    d.noquote()<<data.v.at(i) ;

    qDebug()<<""<<endl;

    return d;


}

// 比较类，用于std::sort第三个参数
class myCmp {
public:
    myCmp(int selectedColumn) { this->currentColumn = selectedColumn; }
    bool operator() (const studData& d1,const studData& d2);
private:
    int currentColumn;
};



//定义比较函数，使学生信息能按照不同的成员变量排序输出

bool myCmp::operator()(const studData &d1, const studData &d2)
{
    bool result = false;
    quint32 sortedColumn = 0x00000001<<currentColumn;
    switch (sortedColumn) {

    case SK::col01:result=d1.v.at(1)>d2.v.at(1);    break;//以第1列数据信息（姓名）大小排序

    case SK::col02:result=d1.v.at(2)>d2.v.at(2);    break;//以第2列数据信息（课程1）大小排序

    case SK::col03:result=d1.v.at(3)>d2.v.at(3);    break;

    case SK::col04:result=d1.v.at(4)>d2.v.at(4);    break;

    case SK::col05:result=d1.v.at(5)>d2.v.at(5);    break;

    case SK::col06:result=d1.v.at(6)>d2.v.at(6);    break;

    case SK::col07:result=d1.v.at(7)>d2.v.at(7);    break;

    case SK::col08:result=d1.v.at(8)>d2.v.at(8);    break;

    case SK::col09:result=d1.v.at(9)>d2.v.at(9);    break;

    case SK::col10:result=d1.v.at(10)>d2.v.at(10);  break;

    case SK::col11:result=d1.v.at(11)>d2.v.at(11);  break;

    case SK::col12:result=d1.v.at(12)>d2.v.at(12);  break;

    case SK::col13:result=d1.v.at(13)>d2.v.at(13);  break;

    case SK::col14:result=d1.v.at(14)>d2.v.at(14);  break;

    case SK::col15:result=d1.v.at(15)>d2.v.at(15);  break;

    case SK::col16:result=d1.v.at(16)>d2.v.at(16);  break;

    default:break;

 }

 return result;

}



//排序执行类

class ScoreSorter
{
public:
    ScoreSorter(QString dataFile);
    // ...
    // 请补全该类，使其实现上述要求
    // ...
}

// 请补全
ScoreSorter::ScoreSorter(QString dataFile){
}


void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    // 自定义qDebug
}

int main()
{
    qInstallMessageHandler(myMessageOutput);
    QString datafile = "data.txt";

    // 如果排序后文件已存在，则删除之
    QFile f("sorted_"+datafile);
    if (f.exists()){
        f.remove();
    }

    ScoreSorter s(datafile);
    s.readFile();
    s.doSort();
    return 0;
}

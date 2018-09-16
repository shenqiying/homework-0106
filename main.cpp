#include <QCoreApplication>
#include <iostream>
#include <QDebug>
typedef quint32 doubleword;
typedef quint8  byte;
#define HHI(xxx) ( (byte) ((doubleword) (xxx) >> 24 ))  //取最高8位
#define LHI(xxx) ( (byte) ((doubleword) (xxx) >> 16 ) & 255 ) //取次高低8位
#define HLO(xxx) ( (byte) ((doubleword) (xxx) >> 8 ) & 255 )  //取次低8位
#define LLO(xxx) ( (byte) ((doubleword) (xxx) & 255 ))  //取最低8位

#define MAX(a,b) ((a) > (b) ? (a) : (b))//取最大值
#define MIN(a,b) ((a) < (b) ? (a) : (b))//取最小值
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qint32 i=0x12345678;//定义一个32位无符号整数
    qint32 news;

    qDebug()<<"原始值:"<<QString("0x%1").arg(i,0,16,QLatin1Char(' '))<<"=="<<i;   //将16进制转为10进制
    qDebug()<< QString("0x%1").arg(HHI(i),0,16,QLatin1Char(' ')) <<"=="<<HHI(i); //输出最高8位的16进制与10进制
    qDebug()<< QString("0x%1").arg(LHI(i),0,16,QLatin1Char(' ')) <<"=="<<LHI(i); //输出次高8位的16进制与10进制
    qDebug()<< QString("0x%1").arg(HLO(i),0,16,QLatin1Char(' ')) <<"=="<<HLO(i); //输出次低8位的16进制与10进制
    qDebug()<< QString("0x%1").arg(LLO(i),0,16,QLatin1Char(' ')) <<"=="<<LLO(i)<<endl; //输出最低8位的16进制与10进制

    qDebug()<<"最高8位和次高8位最大值:"<<MAX(QString("0x%1").arg(HHI(i),0,16,QLatin1Char(' ')), QString("0x%1").arg(LHI(i),0,16,QLatin1Char(' ')) )<<"=="<<MAX(HHI(i) , LHI(i));
    qDebug()<<"次低8位和最低8位最小值:"<<MIN(QString("0x%1").arg(HLO(i),0,16,QLatin1Char(' ')), QString("0x%1").arg(LLO(i),0,16,QLatin1Char(' ')) )<<"=="<<MIN(HLO(i) , LLO(i))<<endl;

    QList<quint8> values;//存储一组8位无符号整数类型
    values << HHI(i) << LHI(i) << HLO(i) << LLO(i); //将结果存入QList<quint8>对象values中
    news=(HHI(i) << 16) + LHI(i) + (HLO(i) << 24) + (LLO(i) << 8);  //按照要求重新组合该数字
    qDebug() <<"组合后的新数值:"<<QString("0x%1").arg(news,0,16,QLatin1Char(' '))<<"=="<<news<<endl;
    qDebug() <<"排序前:"<<values;
    std::sort(values.begin() , values.end() , std::greater<qint8>()); //将values按降序排列
    qDebug() <<"排序后:"<<values;


    return a.exec();

}

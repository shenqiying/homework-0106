# homework-0106
homework01    提交日期：2018-9-16,实现作业一要求的功能，共提交了一次

第一次提交：
使用宏定义实现取出一个32位无符号整型数的最高8位，次高8位，次低6位和最低8位，并将结果存入QList<qint8>对象values中；
再使用宏定义实现返回最高8位和次高8位最大值及次低8位和最低8位最小值；
组合成一个新的32位整型数从高到低分别为次低8位，最高8位，最低8位和次低8位；使用10进制和16进制分别输出；
使用sort函数将values中数据按降序排序；
本次作业达到以上要求。
  

lab01  提交日期：2018-10-13,实现作业二要求的功能，共提交了两次

第一次提交：
● 定义一个student类及数组S[i]存放各个学生的信息；

● 再定义比较函数Compare1比较各个学生的姓名大小定义，Compare2和Compare3分别比较课程1分数大小和课程2分数大小，并返回较大那位的学生信息；

● 将学生信息存入QList<student>对象v中，利用std::sort函数及Compare函数对各个学生信息分别以姓名降序排列，课程1降序排列，课程2降序排列输出学生信息；
本次实验要求均已达到。

第二次提交：
● 改进：由于qDebug在输出QString类型的内容时，会自动为它们添加双引号，因此可以使用noquote()函数，修改此默认设置
使输出的学生姓名不带双引号。


homework02 提交日期：2018-10-17,实现作业二要求的功能，共提交了两次

第一次提交：
● 上传需要的文件；补全结构体定义，运算符重载函数使其可以直接输出studData结构；

● 定义比较函数，使学生信息能按照不同的成员变量排序输出;

● 执行类不太懂，需要多查阅资料。

第二次提交：
● 增加了doSort函数和printfile函数；

● 基本完成了数据的读取与排序功能；

● 输出结果不对齐，有待改进

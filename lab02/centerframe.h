#ifndef CENTERFRAME_H

#define CENTERFRAME_H

#include <QFrame>

#include <common.h>





class QVBoxLayout;

class QHBoxLayout;

class DrawWidget;

class QGroupBox;

class QPushButton;

class QLineEdit;



class CenterFrame : public QFrame

{

    Q_OBJECT

public:

    explicit CenterFrame(QWidget *parent=0);



    DrawWidget* insideWidget() const;



protected:



    void createUserCommandArea();



    void createUI();



    void updateButtonStatus();





public slots:

    void setPenStyle(int penStyle);

    void setPenWidth(int width=1);

    void setPenColor(QColor color);

    void clearPaint();

    //void photoset(); //图片







protected slots:

    void on_btnRectClicked();

    void on_btnEllipseClicked();

    void on_btnLineClicked();

    void on_btnTriangleClicked();

    void on_btnTextClicked();

    void on_edtTextEdited(const QString &text);

    void on_btnDiamondClicked();//菱形

    void on_btnDrawpicClicked();//图片





private:

    QVBoxLayout* vLayout;

    QHBoxLayout* hLayout;

    DrawWidget* drawWidget;

    QGroupBox* group;

    QPushButton* btnRect;

    QPushButton* btnEllipse;

    QPushButton* btnLine;

    QPushButton* btnTriangle;

    QPushButton* btnText;

    QLineEdit* edtText;

    QPushButton* btnDiamond;

    QPushButton* bthDrawpic;



};



#endif // CENTERFRAME_H

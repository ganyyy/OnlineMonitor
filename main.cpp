#include "mainwidget.h"
#include "SqlConn.h"
#include "peoplemgr.h"
#include <QDebug>
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    if (!InitTable())
        return 0;
    QApplication a(argc, argv);
//    添加中文显示
    QTextCodec* codec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForTr(codec);
//    MainWidget mainw;
//    mainw.show();
    PeopleMgr p;
    p.show();
    return a.exec();
}

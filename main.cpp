#include "mainwindow.h"

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   app.setStyle("Oxygen");

   MainWindow* fm = new MainWindow;
   fm->show();

   return app.exec();
}

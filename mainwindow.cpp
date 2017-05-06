
#include "mainwindow.h"

using namespace Poco;
using namespace Poco::Net;

#include <QMessageBox>

MainWindow::MainWindow(QWidget* p) : QMainWindow(p)
{
   setup_mwidget();
   setCentralWidget(mwidget);
   setup_dock_widget();
   connections();
}

void MainWindow::connections()
{
   connect(mwidget->button_go, &QPushButton::clicked,
           [&]() { go(); });
}

void MainWindow::go()
{
   //QMessageBox::information(nullptr, "GO", "Go Clicked!");
   srv.request().clear();
   //srv.add_header();
}

void MainWindow::setup_dock_widget()
{
   setup_treewidget_history();
   treewidget_history->setSortingEnabled(true);
   treewidget_history->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::CurrentChanged
                                       |QAbstractItemView::DoubleClicked);

   //treewidget_history->topLevelItem(0)->setText(0, "http://localhost:9890/api/firsttime");
   mdock->resize(mdock->width(), 190);
   mdock->setWidget(treewidget_history);
   addDockWidget(Qt::DockWidgetArea::BottomDockWidgetArea, mdock);
}

void MainWindow::setup_treewidget_history()
{
   treewidget_history->setColumnCount(5);
   treewidget_history->header()->setSectionResizeMode(QHeaderView::ResizeMode::ResizeToContents);
   treewidget_history->header()->setDefaultSectionSize (520);

   QTreeWidgetItem * treeheader = treewidget_history->headerItem();
   treeheader->setText(4, QApplication::translate("HTTPRequester", "Executed in", 0));
   treeheader->setText(3, QApplication::translate("HTTPRequester", "Size", 0));
   treeheader->setText(2, QApplication::translate("HTTPRequester", "Date", 0));
   treeheader->setText(1, QApplication::translate("HTTPRequester", "Response", 0));
   treeheader->setText(0, QApplication::translate("HTTPRequester", "Request", 0));

   QTreeWidgetItem *treedata = treewidget_history->topLevelItem(0);
   treedata->setExpanded(true);
   treedata->setText(4, QApplication::translate("HTTPRequester", "70 ms", 0));
   treedata->setText(3, QApplication::translate("HTTPRequester", "60B", 0));
   treedata->setText(2, QApplication::translate("HTTPRequester", "21 Feb 2017 09:26:59 GMT", 0));
   treedata->setText(1, QApplication::translate("HTTPRequester", "200 OK", 0));
   treedata->setText(0, "http://localhost:9890/api/client/firsttime");
}

void MainWindow::setup_mwidget()
{
   mwidget->setup_url_widget();
   mwidget->setup_request_widget();
   mwidget->setup_response_widget();
   mwidget->setup_ui();
   mwidget->retranslateUi();
}



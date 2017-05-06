
#include <QMainWindow>
#include "mwidget.h"
#include "http_client.h"

class MainWindow : public QMainWindow
{
   public:
      MainWindow(QWidget * = nullptr);

      void connections();

      void setup_mwidget();
      void setup_dock_widget();
      void setup_treewidget_history();

      void go();

   private:
      MWidget*     mwidget = new MWidget;
      QDockWidget* mdock   = new QDockWidget;
      QTreeWidget* treewidget_history  = new QTreeWidget;
      QTreeWidgetItem*  t2 = new QTreeWidgetItem(treewidget_history);
      QWidget* w = new QWidget;
      rest_interface::server srv;
};



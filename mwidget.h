#ifndef mwidget_h
#define mwidget_h

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QDockWidget>
#include <QGridLayout>
#include <QGroupBox>
#include <QTreeWidget>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>
#include <QSpacerItem>
#include <QTabWidget>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>

class MWidget : public QWidget
{
   public:
      MWidget(QWidget *p = nullptr);

   public:
      QGridLayout *gridLayout_2;
      QComboBox *combo_http_method, *combo_url;
      QPushButton *button_go;
      QGroupBox *groupbox_request;
      QGridLayout *gridLayout_13;
      QTabWidget *tab_request;
      QWidget *tab_req_content;
      QGridLayout *gridLayout_8;
      QLabel *label_header_content_type;
      QComboBox *combo_header_content_type;
      QLabel *label_header_content_options;
      QComboBox *combo_header_content_options;
      QRadioButton *radio_header_content_body, *radio_header_content_file;
      QComboBox *combo_header_content_file;
      QPushButton *button_content_file_browse;
      QTextEdit *textedit_req_header_content_body;
      QWidget *tab_req_headers;
      QGridLayout *gridLayout_9;
      QSpacerItem *horizontalSpacer_3;
      QLabel *label_request_header_name, *label_request_header_value;
      QGridLayout *gridLayout_10;
      QComboBox *combo_request_header_name,   *combo_request_header_value;
      QTreeWidget *treewidget_req_headers;
      QPushButton *button_request_header_add, *button_request_header_down, *button_request_header_delete;
      QSpacerItem *verticalSpacer_2;
      QPushButton *button_request_header_up,  *button_request_header_clear;
      QWidget *tab_req_urlparam;
      QGridLayout *gridLayout_11;
      QLabel *label_request_url_name;
      QSpacerItem *horizontalSpacer_4;
      QLabel *label_request_url_value;
      QGridLayout *gridLayout_12;
      QComboBox *combobox_req_url_name,    *combobox_req_url_value;
      QTreeWidget *treewidget_req_url;
      QPushButton *button_request_url_add, *button_request_url_delete;
      QSpacerItem *verticalSpacer_5;
      QPushButton *button_request_url_up,  *button_request_url_down;
      QWidget *tab_req_misc;
      QGroupBox *groupbox_auth;
      QGridLayout *gridLayout_3;
      QLabel *label_uname;
      QComboBox *combo_req_misc_uname;
      QLabel *label_pword;
      QLineEdit *lineedit_req_misc_;
      QLabel *label_timeout;
      QComboBox *combo_req_misc_timeout;
      QGroupBox *groupbox_response;
      QGridLayout *gridLayout_7;
      QTabWidget *tab_response;
      QWidget *tab_resp_body;
      QGridLayout *gridLayout;
      QTextEdit *textedit_resp_body;
      QPushButton *button_json, *button_xml, *button_browser, *button_plain, *button_raw;
      QWidget *tab_resp_headers;
      QSizePolicy sizePolicy = QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

      //void add_header();

      void connection();
      void retranslateUi();
      void setup_ui();

      void setup_request_tabs();
      void setup_request_widget();
      void setup_response_widget();
      void setup_treewidget();
      void setup_url_widget();
};


#endif//mwidget_h

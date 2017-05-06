
#include "mwidget.h"


MWidget::MWidget(QWidget *p) : QWidget(p), groupbox_request(new QGroupBox(this))
{
   resize(926, 576);
}

void MWidget::connection()
{
   connect(button_request_header_add, &QPushButton::clicked, [&](){});
}

void MWidget::setup_request_tabs()
{

}

void MWidget::setup_request_widget()
{
   QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
   sizePolicy1.setHorizontalStretch(0);
   sizePolicy1.setVerticalStretch(0);
   sizePolicy1.setHeightForWidth(groupbox_request->sizePolicy().hasHeightForWidth());

   groupbox_request->setSizePolicy(sizePolicy1);
   groupbox_request->setMinimumSize(QSize(0, 0));
   gridLayout_13 = new QGridLayout(groupbox_request);
   tab_request = new QTabWidget(groupbox_request);
   tab_request->setFocusPolicy(Qt::TabFocus);
   tab_req_content = new QWidget();
   gridLayout_8 = new QGridLayout(tab_req_content);
   label_header_content_type = new QLabel(tab_req_content);
   label_header_content_type->setObjectName(QStringLiteral("label_header_content_type"));

   gridLayout_8->addWidget(label_header_content_type, 0, 0, 1, 2);

   combo_header_content_type = new QComboBox(tab_req_content);
   combo_header_content_type->setObjectName(QStringLiteral("combo_header_content_type"));
   combo_header_content_type->setEditable(true);

   gridLayout_8->addWidget(combo_header_content_type, 0, 2, 1, 3);

   label_header_content_options = new QLabel(tab_req_content);
   label_header_content_options->setObjectName(QStringLiteral("label_header_content_options"));

   gridLayout_8->addWidget(label_header_content_options, 1, 0, 1, 2);

   combo_header_content_options = new QComboBox(tab_req_content);
   combo_header_content_options->setObjectName(QStringLiteral("combo_header_content_options"));
   combo_header_content_options->setEditable(true);

   gridLayout_8->addWidget(combo_header_content_options, 1, 2, 1, 3);

   radio_header_content_body = new QRadioButton(tab_req_content);
   radio_header_content_body->setObjectName(QStringLiteral("radio_header_content_body"));

   gridLayout_8->addWidget(radio_header_content_body, 2, 0, 1, 1);

   radio_header_content_file = new QRadioButton(tab_req_content);
   radio_header_content_file->setObjectName(QStringLiteral("radio_header_content_file"));

   gridLayout_8->addWidget(radio_header_content_file, 2, 1, 1, 2);

   combo_header_content_file = new QComboBox(tab_req_content);
   combo_header_content_file->setObjectName(QStringLiteral("combo_header_content_file"));
   QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
   sizePolicy2.setHorizontalStretch(0);
   sizePolicy2.setVerticalStretch(0);
   sizePolicy2.setHeightForWidth(combo_header_content_file->sizePolicy().hasHeightForWidth());
   combo_header_content_file->setSizePolicy(sizePolicy2);
   combo_header_content_file->setEditable(true);
   combo_header_content_file->setFrame(true);

   gridLayout_8->addWidget(combo_header_content_file, 2, 3, 1, 1);

   button_content_file_browse = new QPushButton(tab_req_content);
   button_content_file_browse->setObjectName(QStringLiteral("button_content_file_browse"));

   gridLayout_8->addWidget(button_content_file_browse, 2, 4, 1, 1);

   textedit_req_header_content_body = new QTextEdit(tab_req_content);
   textedit_req_header_content_body->setObjectName(QStringLiteral("textedit_req_header_content_body"));

   gridLayout_8->addWidget(textedit_req_header_content_body, 3, 0, 1, 5);

   tab_request->addTab(tab_req_content, QString());
   tab_req_headers = new QWidget();
   tab_req_headers->setObjectName(QStringLiteral("tab_req_headers"));
   gridLayout_9 = new QGridLayout(tab_req_headers);
   gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
   horizontalSpacer_3 = new QSpacerItem(128, 17, QSizePolicy::Maximum, QSizePolicy::Minimum);

   gridLayout_9->addItem(horizontalSpacer_3, 0, 1, 1, 1);

   label_request_header_name = new QLabel(tab_req_headers);
   label_request_header_name->setObjectName(QStringLiteral("label_request_header_name"));

   gridLayout_9->addWidget(label_request_header_name, 0, 0, 1, 1);

   label_request_header_value = new QLabel(tab_req_headers);
   label_request_header_value->setObjectName(QStringLiteral("label_request_header_value"));
   sizePolicy.setHeightForWidth(label_request_header_value->sizePolicy().hasHeightForWidth());
   label_request_header_value->setSizePolicy(sizePolicy);

   gridLayout_9->addWidget(label_request_header_value, 0, 2, 1, 1);

   gridLayout_10 = new QGridLayout();
   gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
   gridLayout_10->setSizeConstraint(QLayout::SetMinimumSize);
   combo_request_header_name = new QComboBox(tab_req_headers);
   combo_request_header_name->setObjectName(QStringLiteral("combo_request_header_name"));
   combo_request_header_name->setEditable(true);

   gridLayout_10->addWidget(combo_request_header_name, 0, 0, 1, 1);

   combo_request_header_value = new QComboBox(tab_req_headers);
   combo_request_header_value->setEditable(true);

   gridLayout_10->addWidget(combo_request_header_value, 0, 1, 1, 1);

   treewidget_req_headers = new QTreeWidget(tab_req_headers);
   QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
   __qtreewidgetitem->setText(0, QStringLiteral("Name"));
   treewidget_req_headers->setHeaderItem(__qtreewidgetitem);
   new QTreeWidgetItem(treewidget_req_headers);

   gridLayout_10->addWidget(treewidget_req_headers, 1, 0, 1, 2);


   gridLayout_9->addLayout(gridLayout_10, 1, 0, 6, 3);

   button_request_header_add = new QPushButton(tab_req_headers);
   sizePolicy.setHeightForWidth(button_request_header_add->sizePolicy().hasHeightForWidth());
   button_request_header_add->setSizePolicy(sizePolicy);

   gridLayout_9->addWidget(button_request_header_add, 1, 3, 1, 1);

   button_request_header_down = new QPushButton(tab_req_headers);
   button_request_header_down->setObjectName(QStringLiteral("button_request_header_down"));
   sizePolicy.setHeightForWidth(button_request_header_down->sizePolicy().hasHeightForWidth());
   button_request_header_down->setSizePolicy(sizePolicy);

   gridLayout_9->addWidget(button_request_header_down, 6, 3, 1, 1);

   button_request_header_delete = new QPushButton(tab_req_headers);
   button_request_header_delete->setObjectName(QStringLiteral("button_request_header_delete"));
   sizePolicy.setHeightForWidth(button_request_header_delete->sizePolicy().hasHeightForWidth());
   button_request_header_delete->setSizePolicy(sizePolicy);

   gridLayout_9->addWidget(button_request_header_delete, 2, 3, 1, 1);

   verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

   gridLayout_9->addItem(verticalSpacer_2, 4, 3, 1, 1);

   button_request_header_up = new QPushButton(tab_req_headers);
   sizePolicy.setHeightForWidth(button_request_header_up->sizePolicy().hasHeightForWidth());
   button_request_header_up->setSizePolicy(sizePolicy);

   gridLayout_9->addWidget(button_request_header_up, 5, 3, 1, 1);

   button_request_header_clear = new QPushButton(tab_req_headers);
   sizePolicy.setHeightForWidth(button_request_header_clear->sizePolicy().hasHeightForWidth());
   button_request_header_clear->setSizePolicy(sizePolicy);

   gridLayout_9->addWidget(button_request_header_clear, 3, 3, 1, 1);

   tab_request->addTab(tab_req_headers, QString());
   tab_req_urlparam = new QWidget();
   gridLayout_11 = new QGridLayout(tab_req_urlparam);
   label_request_url_name = new QLabel(tab_req_urlparam);
   label_request_url_name->setObjectName(QStringLiteral("label_request_url_name"));

   gridLayout_11->addWidget(label_request_url_name, 0, 0, 1, 1);

   horizontalSpacer_4 = new QSpacerItem(128, 17, QSizePolicy::Maximum, QSizePolicy::Minimum);

   gridLayout_11->addItem(horizontalSpacer_4, 0, 1, 1, 1);

   label_request_url_value = new QLabel(tab_req_urlparam);
   label_request_url_value->setObjectName(QStringLiteral("label_request_url_value"));
   sizePolicy.setHeightForWidth(label_request_url_value->sizePolicy().hasHeightForWidth());
   label_request_url_value->setSizePolicy(sizePolicy);

   gridLayout_11->addWidget(label_request_url_value, 0, 2, 1, 1);

   gridLayout_12 = new QGridLayout();
   gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
   gridLayout_12->setSizeConstraint(QLayout::SetMinimumSize);
   combobox_req_url_name = new QComboBox(tab_req_urlparam);
   combobox_req_url_name->setObjectName(QStringLiteral("combobox_req_url_name"));
   combobox_req_url_name->setEditable(true);

   gridLayout_12->addWidget(combobox_req_url_name, 0, 0, 1, 1);

   combobox_req_url_value = new QComboBox(tab_req_urlparam);
   combobox_req_url_value->setObjectName(QStringLiteral("combobox_req_url_value"));
   combobox_req_url_value->setEditable(true);

   gridLayout_12->addWidget(combobox_req_url_value, 0, 1, 1, 1);

   treewidget_req_url = new QTreeWidget(tab_req_urlparam);
   QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
   __qtreewidgetitem1->setText(0, QStringLiteral("1"));
   treewidget_req_url->setHeaderItem(__qtreewidgetitem1);
   treewidget_req_url->setObjectName(QStringLiteral("treewidget_req_url"));

   gridLayout_12->addWidget(treewidget_req_url, 1, 0, 1, 2);


   gridLayout_11->addLayout(gridLayout_12, 1, 0, 5, 3);

   button_request_url_add = new QPushButton(tab_req_urlparam);
   button_request_url_add->setObjectName(QStringLiteral("button_request_url_add"));
   sizePolicy.setHeightForWidth(button_request_url_add->sizePolicy().hasHeightForWidth());
   button_request_url_add->setSizePolicy(sizePolicy);

   gridLayout_11->addWidget(button_request_url_add, 1, 3, 1, 1);

   button_request_url_delete = new QPushButton(tab_req_urlparam);
   button_request_url_delete->setObjectName(QStringLiteral("button_request_url_delete"));
   sizePolicy.setHeightForWidth(button_request_url_delete->sizePolicy().hasHeightForWidth());
   button_request_url_delete->setSizePolicy(sizePolicy);

   gridLayout_11->addWidget(button_request_url_delete, 2, 3, 1, 1);

   verticalSpacer_5 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

   gridLayout_11->addItem(verticalSpacer_5, 3, 3, 1, 1);

   button_request_url_up = new QPushButton(tab_req_urlparam);
   button_request_url_up->setObjectName(QStringLiteral("button_request_url_up"));
   sizePolicy.setHeightForWidth(button_request_url_up->sizePolicy().hasHeightForWidth());
   button_request_url_up->setSizePolicy(sizePolicy);

   gridLayout_11->addWidget(button_request_url_up, 4, 3, 1, 1);

   button_request_url_down = new QPushButton(tab_req_urlparam);
   button_request_url_down->setObjectName(QStringLiteral("button_request_url_down"));
   sizePolicy.setHeightForWidth(button_request_url_down->sizePolicy().hasHeightForWidth());
   button_request_url_down->setSizePolicy(sizePolicy);

   gridLayout_11->addWidget(button_request_url_down, 5, 3, 1, 1);

   tab_request->addTab(tab_req_urlparam, QString());
   tab_req_misc = new QWidget();
   tab_req_misc->setObjectName(QStringLiteral("tab_req_misc"));
   groupbox_auth = new QGroupBox(tab_req_misc);
   groupbox_auth->setObjectName(QStringLiteral("groupbox_auth"));
   groupbox_auth->setGeometry(QRect(0, 20, 361, 134));
   QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
   sizePolicy3.setHorizontalStretch(0);
   sizePolicy3.setVerticalStretch(0);
   sizePolicy3.setHeightForWidth(groupbox_auth->sizePolicy().hasHeightForWidth());
   groupbox_auth->setSizePolicy(sizePolicy3);
   groupbox_auth->setMinimumSize(QSize(361, 0));
   gridLayout_3 = new QGridLayout(groupbox_auth);
   gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
   label_uname = new QLabel(groupbox_auth);
   label_uname->setObjectName(QStringLiteral("label_uname"));

   gridLayout_3->addWidget(label_uname, 0, 0, 1, 1);

   combo_req_misc_uname = new QComboBox(groupbox_auth);
   combo_req_misc_uname->setObjectName(QStringLiteral("combo_req_misc_uname"));
   sizePolicy2.setHeightForWidth(combo_req_misc_uname->sizePolicy().hasHeightForWidth());
   combo_req_misc_uname->setSizePolicy(sizePolicy2);
   combo_req_misc_uname->setEditable(true);

   gridLayout_3->addWidget(combo_req_misc_uname, 0, 1, 1, 2);

   label_pword = new QLabel(groupbox_auth);
   label_pword->setObjectName(QStringLiteral("label_pword"));

   gridLayout_3->addWidget(label_pword, 1, 0, 1, 1);

   lineedit_req_misc_ = new QLineEdit(groupbox_auth);
   lineedit_req_misc_->setObjectName(QStringLiteral("lineedit_req_misc_"));
   sizePolicy2.setHeightForWidth(lineedit_req_misc_->sizePolicy().hasHeightForWidth());
   lineedit_req_misc_->setSizePolicy(sizePolicy2);

   gridLayout_3->addWidget(lineedit_req_misc_, 1, 1, 1, 2);

   label_timeout = new QLabel(groupbox_auth);
   label_timeout->setObjectName(QStringLiteral("label_timeout"));
   QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
   sizePolicy4.setHorizontalStretch(0);
   sizePolicy4.setVerticalStretch(0);
   sizePolicy4.setHeightForWidth(label_timeout->sizePolicy().hasHeightForWidth());
   label_timeout->setSizePolicy(sizePolicy4);

   gridLayout_3->addWidget(label_timeout, 2, 0, 1, 1);

   combo_req_misc_timeout = new QComboBox(groupbox_auth);
   combo_req_misc_timeout->setObjectName(QStringLiteral("combo_req_misc_timeout"));
   sizePolicy2.setHeightForWidth(combo_req_misc_timeout->sizePolicy().hasHeightForWidth());
   combo_req_misc_timeout->setSizePolicy(sizePolicy2);
   combo_req_misc_timeout->setEditable(true);
   combo_req_misc_timeout->setFrame(true);

   gridLayout_3->addWidget(combo_req_misc_timeout, 2, 1, 1, 1);

   tab_request->addTab(tab_req_misc, QString());

   gridLayout_13->addWidget(tab_request, 0, 0, 1, 1);


   gridLayout_2->addWidget(groupbox_request, 1, 0, 1, 2);

}

void MWidget::setup_url_widget()
{
   gridLayout_2 = new QGridLayout(this);
   combo_http_method = new QComboBox(this);
   sizePolicy.setHorizontalStretch(0);
   sizePolicy.setVerticalStretch(0);
   sizePolicy.setHeightForWidth(combo_http_method->sizePolicy().hasHeightForWidth());
   combo_http_method->setSizePolicy(sizePolicy);
   combo_http_method->setEditable(true);

   gridLayout_2->addWidget(combo_http_method, 0, 0, 1, 1);

   combo_url = new QComboBox(this);
   combo_url->setEditable(true);

   gridLayout_2->addWidget(combo_url, 0, 1, 1, 2);

   button_go = new QPushButton(this);
   sizePolicy.setHeightForWidth(button_go->sizePolicy().hasHeightForWidth());
   button_go->setSizePolicy(sizePolicy);

   gridLayout_2->addWidget(button_go, 0, 3, 1, 1);
}

void MWidget::setup_response_widget()
{
   groupbox_response = new QGroupBox(this);
   QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
   sizePolicy5.setHorizontalStretch(0);
   sizePolicy5.setVerticalStretch(0);
   sizePolicy5.setHeightForWidth(groupbox_response->sizePolicy().hasHeightForWidth());
   groupbox_response->setSizePolicy(sizePolicy5);
   groupbox_response->setMinimumSize(QSize(0, 0));
   gridLayout_7 = new QGridLayout(groupbox_response);
   tab_response = new QTabWidget(groupbox_response);
   tab_resp_body = new QWidget();
   gridLayout = new QGridLayout(tab_resp_body);
   textedit_resp_body = new QTextEdit(tab_resp_body);

   gridLayout->addWidget(textedit_resp_body, 0, 0, 1, 5);

   button_json = new QPushButton(tab_resp_body);
   button_json->setFlat(true);

   gridLayout->addWidget(button_json, 1, 0, 1, 1);

   button_xml = new QPushButton(tab_resp_body);
   button_xml->setFlat(true);

   gridLayout->addWidget(button_xml, 1, 1, 1, 1);

   button_browser = new QPushButton(tab_resp_body);
   button_browser->setFlat(true);

   gridLayout->addWidget(button_browser, 1, 2, 1, 1);

   button_plain = new QPushButton(tab_resp_body);
   button_plain->setFlat(true);

   gridLayout->addWidget(button_plain, 1, 3, 1, 1);

   button_raw = new QPushButton(tab_resp_body);

   gridLayout->addWidget(button_raw, 1, 4, 1, 1);

   tab_response->addTab(tab_resp_body, QString());
   tab_resp_headers = new QWidget();
   tab_response->addTab(tab_resp_headers, QString());

   gridLayout_7->addWidget(tab_response, 0, 0, 1, 1);
   gridLayout_2->addWidget(groupbox_response, 1, 2, 1, 2);

}

void MWidget::setup_treewidget()
{

}

void MWidget::retranslateUi()
{
   setWindowTitle(QApplication::translate("Form", "HTTP Requester", 0));
   combo_http_method->clear();
   combo_http_method->insertItems(0, QStringList()
                                  << QApplication::translate("Form", "POST", 0)
                                  << QApplication::translate("Form", "GET", 0)
                                  << QApplication::translate("Form", "DELETE", 0)
                                 );
   combo_http_method->setCurrentText(QApplication::translate("Form", "POST", 0));
   combo_url->clear();
   combo_url->insertItems(0, QStringList()
                          << QApplication::translate("Form", "http://localhost:9890/api/firsttime", 0)
                         );
   button_go->setText(QApplication::translate("Form", "GO", 0));
   groupbox_request->setTitle(QApplication::translate("Form", "Request", 0));
   label_header_content_type->setText(QApplication::translate("Form", "Content Type:", 0));
   label_header_content_options->setText(QApplication::translate("Form", "Content Options:", 0));
   radio_header_content_body->setText(QApplication::translate("Form", "Body", 0));
   radio_header_content_file->setText(QApplication::translate("Form", "Fi&le", 0));
   button_content_file_browse->setText(QApplication::translate("Form", "Browse...", 0));
   tab_request->setTabText(tab_request->indexOf(tab_req_content), QApplication::translate("Form", "Content to Send", 0));
   label_request_header_name->setText(QApplication::translate("Form", "Name", 0));
   label_request_header_value->setText(QApplication::translate("Form", "Value", 0));
   combo_request_header_name->clear();
   combo_request_header_name->insertItems(0, QStringList()
                                          << QApplication::translate("Form", "id", 0)
                                         );
   combo_request_header_name->setCurrentText(QApplication::translate("Form", "id", 0));
   combo_request_header_value->clear();
   combo_request_header_value->insertItems(0, QStringList()
                                           << QApplication::translate("Form", "XLM112", 0)
                                          );
   QTreeWidgetItem *___qtreewidgetitem = treewidget_req_headers->headerItem();
   ___qtreewidgetitem->setText(1, QApplication::translate("Form", "Value", 0));

   const bool __sortingEnabled = treewidget_req_headers->isSortingEnabled();
   treewidget_req_headers->setSortingEnabled(false);
   QTreeWidgetItem *___qtreewidgetitem1 = treewidget_req_headers->topLevelItem(0);
   ___qtreewidgetitem1->setText(1, QApplication::translate("Form", "XLM112", 0));
   ___qtreewidgetitem1->setText(0, QApplication::translate("Form", "id", 0));
   treewidget_req_headers->setSortingEnabled(__sortingEnabled);

   button_request_header_add->setText(QApplication::translate("Form", "Add", 0));
   button_request_header_down->setText(QApplication::translate("Form", "Move Down", 0));
   button_request_header_delete->setText(QApplication::translate("Form", "Delete", 0));
   button_request_header_up->setText(QApplication::translate("Form", "Move UP", 0));
   button_request_header_clear->setText(QApplication::translate("Form", "Clear", 0));
   tab_request->setTabText(tab_request->indexOf(tab_req_headers), QApplication::translate("Form", "Headers", 0));
   label_request_url_name->setText(QApplication::translate("Form", "Name", 0));
   label_request_url_value->setText(QApplication::translate("Form", "Value", 0));
   combobox_req_url_name->setCurrentText(QString());
   button_request_url_add->setText(QApplication::translate("Form", "Add", 0));
   button_request_url_delete->setText(QApplication::translate("Form", "Delete", 0));
   button_request_url_up->setText(QApplication::translate("Form", "UP", 0));
   button_request_url_down->setText(QApplication::translate("Form", "Down", 0));
   tab_request->setTabText(tab_request->indexOf(tab_req_urlparam), QApplication::translate("Form", "URL Parameters", 0));
   groupbox_auth->setTitle(QApplication::translate("Form", "Authentication", 0));
   label_uname->setText(QApplication::translate("Form", "Username:", 0));
   label_pword->setText(QApplication::translate("Form", "Password:", 0));
   label_timeout->setText(QApplication::translate("Form", "Timeout:", 0));
   tab_request->setTabText(tab_request->indexOf(tab_req_misc), QApplication::translate("Form", "Misc", 0));
   groupbox_response->setTitle(QApplication::translate("Form", "Response", 0));
   textedit_resp_body->setHtml(QApplication::translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
                               "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
                               "p, li { white-space: pre-wrap; }\n"
                               "</style></head><body style=\" font-family:'Droid Naskh Shift Alt'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
                               "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">{&quot;status&quot;: 200, &quot;message&quot;: &quot;Device successfully registered&quot;}</p></body></html>", 0));
   button_json->setText(QApplication::translate("Form", "JSON", 0));
   button_xml->setText(QApplication::translate("Form", "XML", 0));
   button_browser->setText(QApplication::translate("Form", "Browser", 0));
   button_plain->setText(QApplication::translate("Form", "Plain", 0));
   button_raw->setText(QApplication::translate("Form", "Raw", 0));
   tab_response->setTabText(tab_response->indexOf(tab_resp_body), QApplication::translate("Form", "Body", 0));
   tab_response->setTabText(tab_response->indexOf(tab_resp_headers), QApplication::translate("Form", "Headers", 0));
   /*

   const bool __sortingEnabled1 = treeWidget->isSortingEnabled();
   treeWidget->setSortingEnabled(false);

   treeWidget->setSortingEnabled(__sortingEnabled1);*/
} // retranslateUi

void MWidget::setup_ui()
{
   tab_request->setCurrentIndex(0);
   tab_response->setCurrentIndex(0);

   QMetaObject::connectSlotsByName(this);
} // setupUi


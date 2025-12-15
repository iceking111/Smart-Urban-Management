/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_main;
    QTabWidget *tabWidget;
    QWidget *tab_string;
    QVBoxLayout *verticalLayout_string;
    QGroupBox *groupBox_string_input;
    QVBoxLayout *verticalLayout_string_input;
    QLineEdit *lineEdit_string_input;
    QTextEdit *textEdit_string_input;
    QGroupBox *groupBox_string_operations;
    QGridLayout *gridLayout_string_ops;
    QPushButton *pushButton_reverse;
    QPushButton *pushButton_upper;
    QPushButton *pushButton_lower;
    QPushButton *pushButton_trim;
    QPushButton *pushButton_count_chars;
    QPushButton *pushButton_count_words;
    QPushButton *pushButton_unicode_info;
    QPushButton *pushButton_encoding;
    QGroupBox *groupBox_string_result;
    QVBoxLayout *verticalLayout_string_result;
    QTextEdit *textEdit_string_result;
    QWidget *tab_numeric;
    QVBoxLayout *verticalLayout_numeric;
    QGroupBox *groupBox_numeric_input;
    QGridLayout *gridLayout_numeric_input;
    QLabel *label_int_input;
    QSpinBox *spinBox_int_input;
    QLabel *label_double_input;
    QDoubleSpinBox *doubleSpinBox_input;
    QGroupBox *groupBox_numeric_operations;
    QGridLayout *gridLayout_numeric_ops;
    QPushButton *pushButton_add;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_to_hex;
    QPushButton *pushButton_to_binary;
    QPushButton *pushButton_length_convert;
    QPushButton *pushButton_temp_convert;
    QGroupBox *groupBox_numeric_result;
    QVBoxLayout *verticalLayout_numeric_result;
    QTextEdit *textEdit_numeric_result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_main = new QVBoxLayout(centralwidget);
        verticalLayout_main->setObjectName("verticalLayout_main");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab_string = new QWidget();
        tab_string->setObjectName("tab_string");
        verticalLayout_string = new QVBoxLayout(tab_string);
        verticalLayout_string->setObjectName("verticalLayout_string");
        groupBox_string_input = new QGroupBox(tab_string);
        groupBox_string_input->setObjectName("groupBox_string_input");
        verticalLayout_string_input = new QVBoxLayout(groupBox_string_input);
        verticalLayout_string_input->setObjectName("verticalLayout_string_input");
        lineEdit_string_input = new QLineEdit(groupBox_string_input);
        lineEdit_string_input->setObjectName("lineEdit_string_input");

        verticalLayout_string_input->addWidget(lineEdit_string_input);

        textEdit_string_input = new QTextEdit(groupBox_string_input);
        textEdit_string_input->setObjectName("textEdit_string_input");
        textEdit_string_input->setMaximumSize(QSize(16777215, 100));

        verticalLayout_string_input->addWidget(textEdit_string_input);


        verticalLayout_string->addWidget(groupBox_string_input);

        groupBox_string_operations = new QGroupBox(tab_string);
        groupBox_string_operations->setObjectName("groupBox_string_operations");
        gridLayout_string_ops = new QGridLayout(groupBox_string_operations);
        gridLayout_string_ops->setObjectName("gridLayout_string_ops");
        pushButton_reverse = new QPushButton(groupBox_string_operations);
        pushButton_reverse->setObjectName("pushButton_reverse");

        gridLayout_string_ops->addWidget(pushButton_reverse, 0, 0, 1, 1);

        pushButton_upper = new QPushButton(groupBox_string_operations);
        pushButton_upper->setObjectName("pushButton_upper");

        gridLayout_string_ops->addWidget(pushButton_upper, 0, 1, 1, 1);

        pushButton_lower = new QPushButton(groupBox_string_operations);
        pushButton_lower->setObjectName("pushButton_lower");

        gridLayout_string_ops->addWidget(pushButton_lower, 0, 2, 1, 1);

        pushButton_trim = new QPushButton(groupBox_string_operations);
        pushButton_trim->setObjectName("pushButton_trim");

        gridLayout_string_ops->addWidget(pushButton_trim, 0, 3, 1, 1);

        pushButton_count_chars = new QPushButton(groupBox_string_operations);
        pushButton_count_chars->setObjectName("pushButton_count_chars");

        gridLayout_string_ops->addWidget(pushButton_count_chars, 1, 0, 1, 1);

        pushButton_count_words = new QPushButton(groupBox_string_operations);
        pushButton_count_words->setObjectName("pushButton_count_words");

        gridLayout_string_ops->addWidget(pushButton_count_words, 1, 1, 1, 1);

        pushButton_unicode_info = new QPushButton(groupBox_string_operations);
        pushButton_unicode_info->setObjectName("pushButton_unicode_info");

        gridLayout_string_ops->addWidget(pushButton_unicode_info, 1, 2, 1, 1);

        pushButton_encoding = new QPushButton(groupBox_string_operations);
        pushButton_encoding->setObjectName("pushButton_encoding");

        gridLayout_string_ops->addWidget(pushButton_encoding, 1, 3, 1, 1);


        verticalLayout_string->addWidget(groupBox_string_operations);

        groupBox_string_result = new QGroupBox(tab_string);
        groupBox_string_result->setObjectName("groupBox_string_result");
        verticalLayout_string_result = new QVBoxLayout(groupBox_string_result);
        verticalLayout_string_result->setObjectName("verticalLayout_string_result");
        textEdit_string_result = new QTextEdit(groupBox_string_result);
        textEdit_string_result->setObjectName("textEdit_string_result");
        textEdit_string_result->setReadOnly(true);

        verticalLayout_string_result->addWidget(textEdit_string_result);


        verticalLayout_string->addWidget(groupBox_string_result);

        tabWidget->addTab(tab_string, QString());
        tab_numeric = new QWidget();
        tab_numeric->setObjectName("tab_numeric");
        verticalLayout_numeric = new QVBoxLayout(tab_numeric);
        verticalLayout_numeric->setObjectName("verticalLayout_numeric");
        groupBox_numeric_input = new QGroupBox(tab_numeric);
        groupBox_numeric_input->setObjectName("groupBox_numeric_input");
        gridLayout_numeric_input = new QGridLayout(groupBox_numeric_input);
        gridLayout_numeric_input->setObjectName("gridLayout_numeric_input");
        label_int_input = new QLabel(groupBox_numeric_input);
        label_int_input->setObjectName("label_int_input");

        gridLayout_numeric_input->addWidget(label_int_input, 0, 0, 1, 1);

        spinBox_int_input = new QSpinBox(groupBox_numeric_input);
        spinBox_int_input->setObjectName("spinBox_int_input");
        spinBox_int_input->setMinimum(-999999999);
        spinBox_int_input->setMaximum(999999999);

        gridLayout_numeric_input->addWidget(spinBox_int_input, 0, 1, 1, 1);

        label_double_input = new QLabel(groupBox_numeric_input);
        label_double_input->setObjectName("label_double_input");

        gridLayout_numeric_input->addWidget(label_double_input, 1, 0, 1, 1);

        doubleSpinBox_input = new QDoubleSpinBox(groupBox_numeric_input);
        doubleSpinBox_input->setObjectName("doubleSpinBox_input");
        doubleSpinBox_input->setDecimals(6);
        doubleSpinBox_input->setMinimum(-999999999.000000000000000);
        doubleSpinBox_input->setMaximum(999999999.000000000000000);

        gridLayout_numeric_input->addWidget(doubleSpinBox_input, 1, 1, 1, 1);


        verticalLayout_numeric->addWidget(groupBox_numeric_input);

        groupBox_numeric_operations = new QGroupBox(tab_numeric);
        groupBox_numeric_operations->setObjectName("groupBox_numeric_operations");
        gridLayout_numeric_ops = new QGridLayout(groupBox_numeric_operations);
        gridLayout_numeric_ops->setObjectName("gridLayout_numeric_ops");
        pushButton_add = new QPushButton(groupBox_numeric_operations);
        pushButton_add->setObjectName("pushButton_add");

        gridLayout_numeric_ops->addWidget(pushButton_add, 0, 0, 1, 1);

        pushButton_subtract = new QPushButton(groupBox_numeric_operations);
        pushButton_subtract->setObjectName("pushButton_subtract");

        gridLayout_numeric_ops->addWidget(pushButton_subtract, 0, 1, 1, 1);

        pushButton_multiply = new QPushButton(groupBox_numeric_operations);
        pushButton_multiply->setObjectName("pushButton_multiply");

        gridLayout_numeric_ops->addWidget(pushButton_multiply, 0, 2, 1, 1);

        pushButton_divide = new QPushButton(groupBox_numeric_operations);
        pushButton_divide->setObjectName("pushButton_divide");

        gridLayout_numeric_ops->addWidget(pushButton_divide, 0, 3, 1, 1);

        pushButton_to_hex = new QPushButton(groupBox_numeric_operations);
        pushButton_to_hex->setObjectName("pushButton_to_hex");

        gridLayout_numeric_ops->addWidget(pushButton_to_hex, 1, 0, 1, 1);

        pushButton_to_binary = new QPushButton(groupBox_numeric_operations);
        pushButton_to_binary->setObjectName("pushButton_to_binary");

        gridLayout_numeric_ops->addWidget(pushButton_to_binary, 1, 1, 1, 1);

        pushButton_length_convert = new QPushButton(groupBox_numeric_operations);
        pushButton_length_convert->setObjectName("pushButton_length_convert");

        gridLayout_numeric_ops->addWidget(pushButton_length_convert, 1, 2, 1, 1);

        pushButton_temp_convert = new QPushButton(groupBox_numeric_operations);
        pushButton_temp_convert->setObjectName("pushButton_temp_convert");

        gridLayout_numeric_ops->addWidget(pushButton_temp_convert, 1, 3, 1, 1);


        verticalLayout_numeric->addWidget(groupBox_numeric_operations);

        groupBox_numeric_result = new QGroupBox(tab_numeric);
        groupBox_numeric_result->setObjectName("groupBox_numeric_result");
        verticalLayout_numeric_result = new QVBoxLayout(groupBox_numeric_result);
        verticalLayout_numeric_result->setObjectName("verticalLayout_numeric_result");
        textEdit_numeric_result = new QTextEdit(groupBox_numeric_result);
        textEdit_numeric_result->setObjectName("textEdit_numeric_result");
        textEdit_numeric_result->setReadOnly(true);

        verticalLayout_numeric_result->addWidget(textEdit_numeric_result);


        verticalLayout_numeric->addWidget(groupBox_numeric_result);

        tabWidget->addTab(tab_numeric, QString());

        verticalLayout_main->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262\344\270\216\346\225\260\345\200\274\345\244\204\347\220\206\345\267\245\345\205\267", nullptr));
        groupBox_string_input->setTitle(QCoreApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262\350\276\223\345\205\245", nullptr));
        lineEdit_string_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\246\201\345\244\204\347\220\206\347\232\204\345\255\227\347\254\246\344\270\262...", nullptr));
        textEdit_string_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\244\232\350\241\214\346\226\207\346\234\254\350\276\223\345\205\245...", nullptr));
        groupBox_string_operations->setTitle(QCoreApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262\346\223\215\344\275\234", nullptr));
        pushButton_reverse->setText(QCoreApplication::translate("MainWindow", "\345\217\215\350\275\254", nullptr));
        pushButton_upper->setText(QCoreApplication::translate("MainWindow", "\350\275\254\345\244\247\345\206\231", nullptr));
        pushButton_lower->setText(QCoreApplication::translate("MainWindow", "\350\275\254\345\260\217\345\206\231", nullptr));
        pushButton_trim->setText(QCoreApplication::translate("MainWindow", "\345\216\273\351\231\244\347\251\272\346\240\274", nullptr));
        pushButton_count_chars->setText(QCoreApplication::translate("MainWindow", "\345\255\227\347\254\246\346\225\260\347\273\237\350\256\241", nullptr));
        pushButton_count_words->setText(QCoreApplication::translate("MainWindow", "\345\215\225\350\257\215\346\225\260\347\273\237\350\256\241", nullptr));
        pushButton_unicode_info->setText(QCoreApplication::translate("MainWindow", "Unicode\344\277\241\346\201\257", nullptr));
        pushButton_encoding->setText(QCoreApplication::translate("MainWindow", "\347\274\226\347\240\201\350\275\254\346\215\242", nullptr));
        groupBox_string_result->setTitle(QCoreApplication::translate("MainWindow", "\345\244\204\347\220\206\347\273\223\346\236\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_string), QCoreApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262\345\244\204\347\220\206", nullptr));
        groupBox_numeric_input->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\345\200\274\350\276\223\345\205\245", nullptr));
        label_int_input->setText(QCoreApplication::translate("MainWindow", "\346\225\264\346\225\260\350\276\223\345\205\245:", nullptr));
        label_double_input->setText(QCoreApplication::translate("MainWindow", "\346\265\256\347\202\271\346\225\260\350\276\223\345\205\245:", nullptr));
        groupBox_numeric_operations->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\345\200\274\346\223\215\344\275\234", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "\345\212\240\346\263\225", nullptr));
        pushButton_subtract->setText(QCoreApplication::translate("MainWindow", "\345\207\217\346\263\225", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "\344\271\230\346\263\225", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "\351\231\244\346\263\225", nullptr));
        pushButton_to_hex->setText(QCoreApplication::translate("MainWindow", "\350\275\254\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        pushButton_to_binary->setText(QCoreApplication::translate("MainWindow", "\350\275\254\344\272\214\350\277\233\345\210\266", nullptr));
        pushButton_length_convert->setText(QCoreApplication::translate("MainWindow", "\351\225\277\345\272\246\346\215\242\347\256\227", nullptr));
        pushButton_temp_convert->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246\346\215\242\347\256\227", nullptr));
        groupBox_numeric_result->setTitle(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\347\273\223\346\236\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_numeric), QCoreApplication::translate("MainWindow", "\346\225\260\345\200\274\345\244\204\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

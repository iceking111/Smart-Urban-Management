#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // 字符串处理槽函数
    void onStringReverse();
    void onStringToUpper();
    void onStringToLower();
    void onStringTrim();
    void onCountCharacters();
    void onCountWords();
    void onUnicodeInfo();
    void onEncodingConvert();
    
    // 数值处理槽函数
    void onAdd();
    void onSubtract();
    void onMultiply();
    void onDivide();
    void onToHex();
    void onToBinary();
    void onLengthConvert();
    void onTemperatureConvert();

private:
    Ui::MainWindow *ui;
    
    // 辅助函数
    QString getInputString();
    void appendStringResult(const QString &result);
    void appendNumericResult(const QString &result);
    QString getUnicodeInfo(const QString &text);
    QString convertEncoding(const QString &text, const QString &from, const QString &to);
};
#endif // MAINWINDOW_H

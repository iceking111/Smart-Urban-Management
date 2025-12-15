#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTextStream>
#include <QRegularExpression>
#include <QInputDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    

    connect(ui->pushButton_reverse, &QPushButton::clicked, this, &MainWindow::onStringReverse);
    connect(ui->pushButton_upper, &QPushButton::clicked, this, &MainWindow::onStringToUpper);
    connect(ui->pushButton_lower, &QPushButton::clicked, this, &MainWindow::onStringToLower);
    connect(ui->pushButton_trim, &QPushButton::clicked, this, &MainWindow::onStringTrim);
    connect(ui->pushButton_count_chars, &QPushButton::clicked, this, &MainWindow::onCountCharacters);
    connect(ui->pushButton_count_words, &QPushButton::clicked, this, &MainWindow::onCountWords);
    connect(ui->pushButton_unicode_info, &QPushButton::clicked, this, &MainWindow::onUnicodeInfo);
    connect(ui->pushButton_encoding, &QPushButton::clicked, this, &MainWindow::onEncodingConvert);
    

    connect(ui->pushButton_add, &QPushButton::clicked, this, &MainWindow::onAdd);
    connect(ui->pushButton_subtract, &QPushButton::clicked, this, &MainWindow::onSubtract);
    connect(ui->pushButton_multiply, &QPushButton::clicked, this, &MainWindow::onMultiply);
    connect(ui->pushButton_divide, &QPushButton::clicked, this, &MainWindow::onDivide);
    connect(ui->pushButton_to_hex, &QPushButton::clicked, this, &MainWindow::onToHex);
    connect(ui->pushButton_to_binary, &QPushButton::clicked, this, &MainWindow::onToBinary);
    connect(ui->pushButton_length_convert, &QPushButton::clicked, this, &MainWindow::onLengthConvert);
    connect(ui->pushButton_temp_convert, &QPushButton::clicked, this, &MainWindow::onTemperatureConvert);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::getInputString()
{
    QString lineText = ui->lineEdit_string_input->text();
    QString multiText = ui->textEdit_string_input->toPlainText();
    
    if (!multiText.isEmpty()) {
        return multiText;
    }
    return lineText;
}

void MainWindow::appendStringResult(const QString &result)
{
    ui->textEdit_string_result->append(result);
}

// 添加数值处理结果
void MainWindow::appendNumericResult(const QString &result)
{
    ui->textEdit_numeric_result->append(result);
}

// 字符串反转
void MainWindow::onStringReverse()
{
    QString input = getInputString();
    if (input.isEmpty()) {
        QMessageBox::warning(this, "警告", "请输入要处理的字符串！");
        return;
    }
    
    QString reversed;
    for (int i = input.length() - 1; i >= 0; --i) {
        reversed.append(input.at(i));
    }
    appendStringResult(QString("反转结果: %1").arg(reversed));
}

// 转大写
void MainWindow::onStringToUpper()
{
    QString input = getInputString();
    if (input.isEmpty()) {
        QMessageBox::warning(this, "警告", "请输入要处理的字符串！");
        return;
    }
    
    QString upper = input.toUpper();
    appendStringResult(QString("转大写结果: %1").arg(upper));
}

// 转小写
void MainWindow::onStringToLower()
{
    QString input = getInputString();
    if (input.isEmpty()) {
        QMessageBox::warning(this, "警告", "请输入要处理的字符串！");
        return;
    }
    
    QString lower = input.toLower();
    appendStringResult(QString("转小写结果: %1").arg(lower));
}

// 去除空格
void MainWindow::onStringTrim()
{
    QString input = getInputString();
    if (input.isEmpty()) {
        QMessageBox::warning(this, "警告", "请输入要处理的字符串！");
        return;
    }
    
    QString trimmed = input.trimmed();
    appendStringResult(QString("去除空格结果: '%1'").arg(trimmed));
}

// 字符数统计
void MainWindow::onCountCharacters()
{
    QString input = getInputString();
    if (input.isEmpty()) {
        QMessageBox::warning(this, "警告", "请输入要处理的字符串！");
        return;
    }
    
    int totalChars = input.length();
    int nonSpaceChars = input.length() - input.count(' ');
    int lines = input.count('\n') + 1;
    
    QString result = QString("字符统计:\n总字符数: %1\n非空格字符数: %2\n行数: %3")
                    .arg(totalChars).arg(nonSpaceChars).arg(lines);
    appendStringResult(result);
}

// 单词数统计
void MainWindow::onCountWords()
{
    QString input = getInputString();
    if (input.isEmpty()) {
        QMessageBox::warning(this, "警告", "请输入要处理的字符串！");
        return;
    }
    
    QStringList words = input.split(QRegularExpression("\\s+"), Qt::SkipEmptyParts);
    int wordCount = words.size();
    
    // 统计特定字符出现次数
    QMap<QChar, int> charCount;
    for (const QChar &ch : input) {
        if (ch.isLetter()) {
            charCount[ch.toLower()]++;
        }
    }
    
    QString result = QString("单词统计:\n单词数: %1").arg(wordCount);
    if (!charCount.isEmpty()) {
        result += "\n字符频率统计:";
        QList<QChar> keys = charCount.keys();
        std::sort(keys.begin(), keys.end());
        for (const QChar &ch : keys) {
            result += QString("\n'%1': %2次").arg(ch).arg(charCount[ch]);
        }
    }
    
    appendStringResult(result);
}

// Unicode信息
QString MainWindow::getUnicodeInfo(const QString &text)
{
    QString result;
    for (int i = 0; i < text.length(); ++i) {
        QChar ch = text.at(i);
        result += QString("字符: '%1'\n").arg(ch);
        result += QString("  Unicode码点: U+%1\n").arg(QString::number(ch.unicode(), 16).toUpper().rightJustified(4, '0'));
        result += QString("  类别: %1\n").arg(ch.category());
        result += QString("  方向: %1\n").arg(ch.direction());
        result += QString("  是否为字母: %1\n").arg(ch.isLetter() ? "是" : "否");
        result += QString("  是否为数字: %1\n").arg(ch.isDigit() ? "是" : "否");
        result += QString("  是否为空格: %1\n").arg(ch.isSpace() ? "是" : "否");
        result += "---\n";
    }
    return result;
}

void MainWindow::onUnicodeInfo()
{
    QString input = getInputString();
    if (input.isEmpty()) {
        QMessageBox::warning(this, "警告", "请输入要处理的字符串！");
        return;
    }
    
    QString unicodeInfo = getUnicodeInfo(input);
    appendStringResult(QString("Unicode信息:\n%1").arg(unicodeInfo));
}

// 编码转换
QString MainWindow::convertEncoding(const QString &text, const QString &from, const QString &to)
{
    // 在Qt 6中，我们使用QStringConverter进行编码转换
    // 这里简化实现，主要展示UTF-8转换
    if (from == "UTF-8" && to == "UTF-8") {
        return text;
    } else if (from == "UTF-8" && to == "UTF-16") {
        // UTF-8 to UTF-16
        QByteArray utf8Data = text.toUtf8();
        return QString::fromUtf8(utf8Data);
    } else if (from == "UTF-16" && to == "UTF-8") {
        // UTF-16 to UTF-8
        return text.toUtf8();
    } else {
        // 对于其他编码，我们返回原始文本并显示提示
        return QString("编码转换: %1 -> %2\n原始文本: %3\n注意: 某些编码转换在Qt 6中需要额外配置")
               .arg(from, to, text);
    }
}

void MainWindow::onEncodingConvert()
{
    QString input = getInputString();
    if (input.isEmpty()) {
        QMessageBox::warning(this, "警告", "请输入要处理的字符串！");
        return;
    }
    
    QStringList encodings = {"UTF-8", "UTF-16", "Latin1", "GBK", "Big5"};
    
    bool ok;
    QString fromEncoding = QInputDialog::getItem(this, "编码转换", "源编码:", encodings, 0, false, &ok);
    if (!ok) return;
    
    QString toEncoding = QInputDialog::getItem(this, "编码转换", "目标编码:", encodings, 0, false, &ok);
    if (!ok) return;
    
    QString converted = convertEncoding(input, fromEncoding, toEncoding);
    appendStringResult(QString("编码转换 (%1 -> %2):\n%3").arg(fromEncoding, toEncoding, converted));
}

// 数值处理函数
void MainWindow::onAdd()
{
    int intVal = ui->spinBox_int_input->value();
    double doubleVal = ui->doubleSpinBox_input->value();
    double result = intVal + doubleVal;
    appendNumericResult(QString("加法: %1 + %2 = %3").arg(intVal).arg(doubleVal).arg(result));
}

void MainWindow::onSubtract()
{
    int intVal = ui->spinBox_int_input->value();
    double doubleVal = ui->doubleSpinBox_input->value();
    double result = intVal - doubleVal;
    appendNumericResult(QString("减法: %1 - %2 = %3").arg(intVal).arg(doubleVal).arg(result));
}

void MainWindow::onMultiply()
{
    int intVal = ui->spinBox_int_input->value();
    double doubleVal = ui->doubleSpinBox_input->value();
    double result = intVal * doubleVal;
    appendNumericResult(QString("乘法: %1 × %2 = %3").arg(intVal).arg(doubleVal).arg(result));
}

void MainWindow::onDivide()
{
    int intVal = ui->spinBox_int_input->value();
    double doubleVal = ui->doubleSpinBox_input->value();
    
    if (qAbs(doubleVal) < 1e-10) {
        QMessageBox::warning(this, "错误", "除数不能为零！");
        return;
    }
    
    double result = intVal / doubleVal;
    appendNumericResult(QString("除法: %1 ÷ %2 = %3").arg(intVal).arg(doubleVal).arg(result));
}

void MainWindow::onToHex()
{
    int intVal = ui->spinBox_int_input->value();
    QString hex = QString::number(intVal, 16).toUpper();
    appendNumericResult(QString("十六进制: %1 (十进制) = 0x%2").arg(intVal).arg(hex));
}

void MainWindow::onToBinary()
{
    int intVal = ui->spinBox_int_input->value();
    QString binary = QString::number(intVal, 2);
    appendNumericResult(QString("二进制: %1 (十进制) = %2").arg(intVal).arg(binary));
}

void MainWindow::onLengthConvert()
{
    double value = ui->doubleSpinBox_input->value();
    
    QStringList units = {"米", "厘米", "英寸", "英尺", "码"};
    bool ok;
    QString fromUnit = QInputDialog::getItem(this, "长度换算", "源单位:", units, 0, false, &ok);
    if (!ok) return;
    
    QString toUnit = QInputDialog::getItem(this, "长度换算", "目标单位:", units, 0, false, &ok);
    if (!ok) return;
    
    // 转换为米
    double meters = value;
    if (fromUnit == "厘米") meters = value / 100.0;
    else if (fromUnit == "英寸") meters = value * 0.0254;
    else if (fromUnit == "英尺") meters = value * 0.3048;
    else if (fromUnit == "码") meters = value * 0.9144;
    
    // 从米转换为目标单位
    double result = meters;
    if (toUnit == "厘米") result = meters * 100.0;
    else if (toUnit == "英寸") result = meters / 0.0254;
    else if (toUnit == "英尺") result = meters / 0.3048;
    else if (toUnit == "码") result = meters / 0.9144;
    
    appendNumericResult(QString("长度换算: %1 %2 = %3 %4").arg(value).arg(fromUnit).arg(result).arg(toUnit));
}

void MainWindow::onTemperatureConvert()
{
    double value = ui->doubleSpinBox_input->value();
    
    QStringList units = {"摄氏度", "华氏度", "开尔文"};
    bool ok;
    QString fromUnit = QInputDialog::getItem(this, "温度换算", "源单位:", units, 0, false, &ok);
    if (!ok) return;
    
    QString toUnit = QInputDialog::getItem(this, "温度换算", "目标单位:", units, 0, false, &ok);
    if (!ok) return;
    
    // 转换为摄氏度
    double celsius = value;
    if (fromUnit == "华氏度") celsius = (value - 32) * 5.0 / 9.0;
    else if (fromUnit == "开尔文") celsius = value - 273.15;
    
    // 从摄氏度转换为目标单位
    double result = celsius;
    if (toUnit == "华氏度") result = celsius * 9.0 / 5.0 + 32;
    else if (toUnit == "开尔文") result = celsius + 273.15;
    
    appendNumericResult(QString("温度换算: %1 %2 = %3 %4").arg(value).arg(fromUnit).arg(result).arg(toUnit));
}

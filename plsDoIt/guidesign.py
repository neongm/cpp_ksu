# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'test.ui'
#
# Created by: PyQt5 UI code generator 5.13.2
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(316, 331)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.plustocounter = QtWidgets.QPushButton(self.centralwidget)
        self.plustocounter.setGeometry(QtCore.QRect(10, 240, 301, 41))
        self.plustocounter.setObjectName("plustocounter")
        self.clear_counter = QtWidgets.QPushButton(self.centralwidget)
        self.clear_counter.setGeometry(QtCore.QRect(10, 290, 301, 41))
        self.clear_counter.setObjectName("clear_counter")
        self.lineEdit = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit.setGeometry(QtCore.QRect(20, 130, 281, 71))
        self.lineEdit.setReadOnly(True)
        self.lineEdit.setObjectName("lineEdit")
        self.lineEdit_2 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_2.setGeometry(QtCore.QRect(80, 40, 141, 20))
        self.lineEdit_2.setReadOnly(True)
        self.lineEdit_2.setObjectName("lineEdit_2")
        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.plustocounter.setText(_translate("MainWindow", "+1 к счетчику"))
        self.clear_counter.setText(_translate("MainWindow", "Обнуление счетчика"))
        self.lineEdit_2.setText(_translate("MainWindow", "Счетчик сказанных \"ДА\""))

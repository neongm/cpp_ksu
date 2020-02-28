import sys  # sys нужен для передачи argv в QApplication
from PyQt5 import QtWidgets
import guidesign  # Это наш конвертированный файл дизайна

class ExampleApp(QtWidgets.QMainWindow, guidesign.Ui_MainWindow):
    def __init__(self):
        # Это здесь нужно для доступа к переменным, методам
        # и т.д. в файле design.py
        super().__init__()
        self.setupUi(self)  # Это нужно для инициализации нашего дизайна
        self.plustocounter.clicked.connect(self.addtoc)
        self.clear_counter.clicked.connect(self.clearcount)
    
    def addtoc():
        x=x+1
        self.lineEdit.settext(x)


        
        


    def clearcount():
        self.lineEdit.clear()

def main():
    app = QtWidgets.QApplication(sys.argv)  # Новый экземпляр QApplication
    window = ExampleApp()  # Создаём объект класса ExampleApp
    window.show()  # Показываем окно
    app.exec_()  # и запускаем приложение
x =int(0)
if __name__ == '__main__':  # Если мы запускаем файл напрямую, а не импортируем
    main()  # то запускаем функцию main()

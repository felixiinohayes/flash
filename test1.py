from PyQt6.QtWidgets import QApplication, QWidget, QMainWindow
import sys
from PyQt6 import uic

class UI(QMainWindow):
    def __init__(self):
        super().__init__()

        uic.loadUi("calculator.ui", self)


app = QApplication(sys.argv)
window = UI()
window.show()
sys.exit(app.exec())
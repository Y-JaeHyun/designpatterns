#-*- coding: utf-8 -*-

from subject import Subject
from cpu import *
from memory import *

class ServerStateChecker(Subject):
    def __init__(self):
        self.checkModule = []

    def registerObserver(self, observer):
        self.checkModule.append(observer)

    def removeObserver(self, observer):
        self.checkModule.remove(observer)

    def notifyObserver(self):
        for m in self.checkModule:
            m.notify()

    def updateObserver(self):
        for m in self.checkModule:
            m.update()
        

if __name__ == '__main__':
    checker = ServerStateChecker()
    checker.registerObserver(Memory())
    checker.registerObserver(CPU())

    checker.updateObserver()
    checker.notifyObserver()


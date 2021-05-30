#-*- coding: utf-8 -*-

from abc import *
from observer import Observer

class Subject(metaclass=ABCMeta):

    @abstractmethod
    def registerObserver(self, observer):
        pass
    @abstractmethod
    def removeObserver(self, observer):
        pass
    @abstractmethod
    def notifyObserver(self):
        pass

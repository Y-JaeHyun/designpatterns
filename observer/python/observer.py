#-*- coding: utf-8 -*-

from abc import *

class Observer(metaclass=ABCMeta):
    @abstractmethod
    def update(self):
        pass
    @abstractmethod
    def notify(self):
        pass

#-*- coding: utf-8 -*-

from observer import Observer
import random

class Memory(Observer):
    def __init__(self):
        self.memoryUsed = 0

    def update(self):
        self.memoryUsed = random.randrange(0, 101)

    def notify(self):
        print("Memory 사용량 {}% 입니다.".format(self.memoryUsed))

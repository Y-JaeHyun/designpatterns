#-*- coding: utf-8 -*-

from observer import Observer
import random

class CPU(Observer):
    def __init__(self):
        self.cpuUsed = 0

    def update(self):
        self.cpuUsed = random.randrange(0, 101)

    def notify(self):
        print("CPU 사용량 {}% 입니다.".format(self.cpuUsed))


if __name__ == '__main__':
    cpu = CPU()
    cpu.update()
    cpu.notify()

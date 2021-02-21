#!/usr/bin/env python
# _*_ coding: utf8 _*_

from Wappalyzer import WebPage, Wappalyzer



def main():
    wap = Wappalyzer.latest()
    try:
        web = WebPage.new_from_url("https://www.example.com")
        tec = wap.analyze(web)
        for t in tec:
            print("Detectada: {}".format(t))
    except:
        print("Error 404")

if __name__ == '__main__':
    try:
        main()
    except KeyboardInterrupt:
        print("Saliendo")
        exit()
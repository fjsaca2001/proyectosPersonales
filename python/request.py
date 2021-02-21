#!/usr/bin/env python
# _*_ coding: utf8 _*_

import requests
import argparse

parser = argparse.ArgumentParser(description="Detector de cabeceras")
parser.add_argument('-t', '--target', help="Objetivo")
parser = parser.parse_args()


def main():
    if parser.target:
        print(parser.target)
        try:
            url = requests.get(url=parser.target)
            cabeceras = dict(url.headers)
            for x in cabeceras:
                print(x + ": " + cabeceras[x])
        except:
            print("Error 404.")
    else:
        print("No hay objetivo")


if __name__ == '__main__':
    main()

# -*- coding: utf-8 -*-
"""
Created on Tue Apr  9 19:57:51 2019

@author: Syed Rakin
"""

import csv

user_input = str(input("press /Enter/ to start "))
print("Hello, World!")
with open('air_quality_Nov2017.csv') as file_reader:
    readCSV = csv.reader(file_reader, delimiter=',')
    data_reader = csv.DictReader(file_reader)

    headers = data_reader.fieldnames
    print("Search data of different stations in Barcelona")
    print("1 = Station")

    print("2 = Date Generated on")
    n = input("For searching Station-wise data enter 1 an"
              "d for searching by specific date/time enter 2: ")
    print("\n")


    if int(n) == 1:
        user_input = input("Enter the Station Name")
        flines = file_reader.readline()
        print(flines.rstrip())


        search = file_reader.readlines()

        for i, sline in enumerate(search):
            if user_input.upper() in sline.upper():
                print(sline)



    elif int(n) == 2:
        user_input = input("Search by the date generated on")
        flines = file_reader.readline()

        print(flines.rstrip())
        search = file_reader.readlines()

        for i, sline in enumerate(search):
            if user_input.upper() in sline.upper():
                print(sline)



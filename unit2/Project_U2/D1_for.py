import sys

month = 0
day = 0

if __name__ == "__main__":
    for month in range(1,13):
        print(f'Month: {month}')
        if month == 2:
            for day in range(1,29):
                print(f'    Day: {day}')
        elif month == 1:
            for day in range(1,32):
                print(f'    Day: {day}')
        elif month == 3:
            for day in range(1,32):
                print(f'    Day: {day}')
        elif month == 5:
            for day in range(1,32):
                print(f'    Day: {day}')
        elif month == 7:
            for day in range(1,32):
                print(f'    Day: {day}')
        elif month == 8:
            for day in range(1,32):
                print(f'    Day: {day}')
        elif month == 10:
            for day in range(1,32):
                print(f'    Day: {day}')
        elif month == 12:
            for day in range(1,32):
                print(f'    Day: {day}')
        else:
            for day in range(1,31):
                print(f'    Day: {day}')

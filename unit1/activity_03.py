price_hour = 300
min_hours = 40
hours = 0
salary = 0
extra_hours = 0

hours = int(input("Enter number of hours: "))
if(hours > min_hours):
    extra_hours = hours - min_hours
    salary = (min_hours * price_hour) + (extra_hours * (price_hour * 1.5))
else:
    salary = hours * price_hour

print("This is the salary", salary)

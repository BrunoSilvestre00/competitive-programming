from datetime import datetime

day_start = int(input().replace('Dia ', ''))
time_start = input().split(':')
hour_start = int(time_start[0])
minute_start = int(time_start[1])
second_start = int(time_start[2])

day_end = int(input().replace('Dia ', ''))
time_end = input().split(':')
hour_end = int(time_end[0])
minute_end = int(time_end[1])
second_end = int(time_end[2])

start = datetime(2020, 1, day_start, hour_start, minute_start, second_start)
end = datetime(2020, 1, day_end, hour_end, minute_end, second_end)

delta = end - start

days = delta.days
hours = delta.seconds // 3600
minutes = (delta.seconds % 3600) // 60
seconds = delta.seconds % 60

print(f'{days} dia(s)')
print(f'{hours} hora(s)')
print(f'{minutes} minuto(s)')
print(f'{seconds} segundo(s)')





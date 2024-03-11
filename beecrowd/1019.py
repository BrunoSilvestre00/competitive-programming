secs = int(input())
hour = secs//3600
minutes = (secs - hour*3600)//60
sec = secs - minutes*60 - hour*3600
print(f'{hour}:{minutes}:{sec}')
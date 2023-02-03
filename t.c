def geometric_series_sum(a, r, n):
    return a * (1 - r**n) / (1 - r)

print(geometric_series_sum(1, 1/2, 10)) # Example: 1 + 1/2 + 1/4 + ... + 1/1024

distance = geometric_series_sum(1, 1/2, 100) # Calculating distance traveled using the sum
print(distance)

import matplotlib.pyplot as plt

speed = 5 # min/km
time = 0 # min
time_list = []
distance_list = []
distance = 1 # km

while distance > 0:
    distance = distance / 2
    time += speed
    speed = speed / 3
    distance_list.append(distance)
    time_list.append(time)
    
plt.plot(time_list, distance_list)
plt.xlabel("Time (min)")
plt.ylabel("Distance Traveled (km)")
plt.title("Distance Traveled vs Time")
plt.show()

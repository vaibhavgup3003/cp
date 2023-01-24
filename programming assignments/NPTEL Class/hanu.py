import matplotlib.pyplot as plt
# line 1 points
x1= ([10,20,30,40])
y1=([20,40,10,20])

# line 2 points
x2= [10,20,30]
y2=[40,10,30]
plt.title ("Subject Comparision",size="30", color ="b")
plt.xlabel ("x-axis")
plt.ylabel ("y-axis")

# Display the figure
plt.plot (x1,y1,color='g',linestyle='dotted',marker='*',linewidth=3,label='English')
plt.plot (x2,y2,color='b',linewidth=1,label='Hindi')

# plt.legend (_)
plt.show ()

# import matplotlib.pyplot as plt
# import numpy as np


# x = np.array([1, 2, 3, 4])
# y = x*2

# plt.plot(x, y)
# plt.xlabel("X-axis")
# plt.ylabel("Y-axis")
# plt.title("Any suitable title")
# plt.show() # show first chart

# # The figure() function helps in creating a
# # new figure that can hold a new chart in it.
# plt.figure()
# x1 = [2, 4, 6, 8]
# y1 = [3, 5, 7, 9]
# plt.plot(x1, y1, '-.')

# # Show another chart with '-' dotted line
# plt.show()

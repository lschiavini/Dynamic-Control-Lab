import matplotlib.pyplot as plt 
from math import *
import numpy as np 
import csv
from sklearn import linear_model
from scipy.ndimage.filters import gaussian_filter

filename = 'dados.csv'
delta_n = -0.02695
delta_p = 0.5449
#CUT = 750
Vk = []
Vm = []
times = []
with open(filename, 'rU') as csvfile:
	spamreader = csv.reader(csvfile, delimiter=',')
	lines_skip = 1
	for i in range(lines_skip):
		next(spamreader)
	for row in spamreader:
		if row:
			aux = float(row[-2])
			if(aux < 0):
				aux += delta_n
			elif(aux >delta_p):
				aux += delta_p
			#print aux
			times += [float(row[0])]
			Vk+= [float(row[1])]
			Vm+= [float(aux)]
sigma = 10
mypot = gaussian_filter(Vk, sigma)
plt.plot(Vk, '-')
plt.plot(mypot, '-')
plt.show()

Vk = mypot

Vk1 = Vk[1:]
Vk1 = Vk1[:-1]

Vk2 = Vk[:-2]

Vm = Vm[2:]
Vk = Vk[2:]
#dados de entrada
myx = [(a, b, c) for a,b,c in zip(Vk1,Vk2, Vm)]
#print myx


#dados de saida
myy = Vk
#print myy


hof = linear_model.LinearRegression(fit_intercept=False)
hof.fit(myx, myy)
print ('Intercept: \n', hof.intercept_)
print ('Coefficients: \n', hof.coef_)
a = hof.coef_[0]
b = hof.coef_[1]
c = hof.coef_[2]

pred = []
real = []
for la in range(len(Vk)):
	pred += [hof.predict([[Vk1[la], Vk2[la], Vm[la]]])[0]]
	real += [Vk[la]]

#lof = 50
#print Vk1[lof]*a + Vk2[lof]*b + Vm[lof]*c
#print real[lof]



#plt.plot(pred, real)
plt.plot(pred, 'bo')
plt.plot(real, 'r-')
plt.show()
print ('a', a )
print ('b', b )
print ('c', c )
T = 0.002
B = (-a/b - 2.)/T
A = (-c/b)/(T**2)
C = (-1.0/b - 1.0 - B*T)/(T**2)

print ('A= ', A)
print ('B= ', B)
print ('C= ', C)




#y = np.array()

	

%pkg load control

%A=  15161.155122739021
%B=  17.131673818287616
%C=  123.67817138470016

A=  13498.632753908936
B=  15.251540710450318
C=  112.3790377204892

s = [1 B C]
roots(s)
pause()
%read csv and get real stuff

%Z = real(Z)
myG1 = tf(0.068*[A],[1 7.6258])
k1=step(myG1)
plot(k1)
pause()
hold on;

myG = tf(1*[A],[1 B C])
k = step(myG)
%k = lsim(myG, )
plot(k)

%print -djpg image.jpg
pause()
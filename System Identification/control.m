%pkg load control


%A =  2833503.99512;
%B =  3359.82171445;
%C =  18360.920369;

%A =  -193486006.196;
%B =  -227139.064677;
%C =  -1268758.61431;


%A=  20792.397543
%B=  25.2695060487
%C= 147.029170433

%A=  31221.9101993
%B=  36.0565536834
%C=  215.379515402

A=  15161.155122739021
B=  17.131673818287616
C=  123.67817138470016


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
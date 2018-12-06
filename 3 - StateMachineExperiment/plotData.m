close all;

plot(dados(2,:))%Car Velocity
title('Car Position and Velocity')
hold on
plot(dados(3,:))%Car Position


plot(dados(5,:))%Ref


legend('Car Velocity','Car Position','Ref')

figure
title('Observer Error and Motor Voltage')

plot(dados(4,:))%Motor Volt
hold on

plot(dados(6,:))% Y -~Y(Observer)
legend( 'Motor Voltage', 'Y -~Y(Observer)')


figure
title('Car Velocity and Motor Voltage')
plot(dados(4,:))%Motor Volt
hold on
plot(dados(2,:)/100)%Car Velocity
legend('Car Velocity/100', 'Motor Voltage')%,'Motor Voltage')

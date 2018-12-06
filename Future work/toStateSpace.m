function [A,B,C,D,Ac,L,K,Kx,Ki] = toStateSpace(num, denum)
    K = 0;
    %Polos Controlador
    %  5 Vezes no mínimo mais lentos que o observador
    polo3 = -2;
    polo4 = -3;
    polo5 = -1;
    %Polos Observador
    %  devem ser mais rápidos que o controlador
    polo1 = -150;
    polo2 = -100;
    
    [A, B, C, D] = tf2ss(num, denum);
    
    %% Controlador
    Ac = [A [0;0]; -C 0];
    Bc = [B; 0];
    Kx = acker(Ac, Bc , [polo3, polo4, polo5]);
    
    %% Observador
    K = [Kx(1) Kx(2)];
    Ki = -Kx(3);
    L = acker(A', C', [polo1, polo2])';
    
    %% Save
    save stateSpaceData.mat;
    
end


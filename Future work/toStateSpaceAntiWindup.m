function [A,B,C,D,Ac,L,K,Kx,Ki] = toStateSpaceAntiWindup(num, denum)
    K = 0;
    %Polos Controlador
    %  5 Vezes no mínimo mais lentos que o observador
    polo3 = -30;
    polo4 = -40;
    polo5 = -20;
    %Polos Observador
    %  devem ser mais rápidos que o controlador
    polo1 = -200;
    polo2 = -170;
    
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
    save stateSpaceDataAntiWindup.mat;
    
end


function [A,B,C,D,Ac,L,K,Kx,Ki] = toStateSpace(num, denum)
    K = 0;
    polo1 = -40;
    polo2 = -30;
    
    polo3 = -10;
    polo4 = -20;
    polo5 = -12;
    
    [A, B, C, D] = tf2ss(num, denum);
    
    Ac = [A [0;0]; -C 0];
    Bc = [B; 0];
    Kx = acker(Ac, Bc , [polo3, polo4, polo5]);
    
    K = [Kx(1) Kx(2)];
    Ki = Kx(3);
    L = acker(A', C', [polo1, polo2])';
    save stateSpaceData.mat;
    
end


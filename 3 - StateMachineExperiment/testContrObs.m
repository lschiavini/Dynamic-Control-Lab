%Test Controlability and Observability

Co = ctrb(A,B);
unco = length(A) - rank(Co)


Ob = obsv(A,C);
% Number of unobservable states
unob = length(A)-rank(Ob)
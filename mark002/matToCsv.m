function matToCsv
    load('amp2freq05A2.mat');
    dados = dados';
    csvwrite('dados.csv', dados);
    pause();
end

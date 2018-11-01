function matToCsv
    load('./dados/amp2freq05A1.mat');
    dados = dados';
    csvwrite('dados1.csv', dados);
    %pause();
end

function matToCsv
    FileData = load('data_ident.mat');
    csvwrite('OndaQuad.csv', M);
end

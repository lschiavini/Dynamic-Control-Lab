import scipy.io
import numpy as np

data = scipy.io.loadmat("data_ident.mat")

for i in data:
    if '__' not in i and 'readme' not in i:
        np.savetxt(("dataCSV/"+i+".csv"),data[i],delimiter=',')
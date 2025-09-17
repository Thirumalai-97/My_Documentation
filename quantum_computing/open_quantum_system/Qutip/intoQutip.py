import matplotlib.pyplot as plt
import numpy as np
from qutip import *
q = "Quantum Object"
qq = Qobj([[0],[1]])
print(f'Quantum Object is {qq}')
print(f'Dimension is, {qq.dims}, Shape is, {qq.shape}')
## Evolution of Bell states in Amplitude Damping(AD) and Generalized Amplitude Damping(GAD) channel

### Overview 
   We have 2 qubit entangled states $$|\psi^-\rangle$$, shared between Alice and Bob.
   Compute fidelity, concurrence and other metrics when Alice evolved under below channels with different time and Gamma values.

   | Alice | Bob |
|-------|-----|
| AD    | AD  |
| AD    | GAD |
| GAD   | AD  |
| GAD   | GAD |


## Quantum Terms and Definitions

### Qubit
A **qubit** is the fundamental unit of quantum information, analogous to a bit in classical computing. Unlike a classical bit that can be either 0 or 1, a qubit can exist in a **superposition** of both 0 and 1 simultaneously, represented as a linear combination of these states.

### Superposition
**Superposition** refers to the quantum property where a qubit exists in a combination of multiple states at once. If a qubit is in a superposition, it can be described as a weighted combination of the basis states |0⟩ and |1⟩ until it is measured, collapsing into one of the states.

### Entanglement
**Entanglement** is a quantum phenomenon where two or more qubits become interconnected such that the state of one qubit is dependent on the state of the other(s), even when they are separated by large distances. Measuring one entangled qubit instantaneously affects the state of the other, regardless of the distance between them.

### Bell States
**Bell states** are specific maximally entangled quantum states of two qubits. There are four Bell states, which form the basis of two-qubit systems. They are key to many quantum algorithms and protocols, including quantum teleportation and superdense coding. The Bell states are:
- |Φ+⟩ = (|00⟩ + |11⟩) / √2
- |Φ−⟩ = (|00⟩ − |11⟩) / √2
- |Ψ+⟩ = (|01⟩ + |10⟩) / √2
- |Ψ−⟩ = (|01⟩ − |10⟩) / √2



### Fidelity
**Fidelity** is a measure of how close two quantum states are to each other. It is commonly used to assess the accuracy of quantum operations or the similarity between an ideal state and an experimental state. Fidelity values range from 0 to 1, where 1 indicates that the states are identical.

### Concurrence
**Concurrence** is a measure of quantum entanglement used primarily for two-qubit systems. It quantifies the degree of entanglement between qubits, with a value ranging from 0 (no entanglement) to 1 (maximum entanglement). Concurrence is especially useful for evaluating mixed quantum states.

### Open Quantum Systems
An **open quantum system** refers to a quantum system that interacts with an external environment, causing it to experience decoherence or loss of information. Unlike closed quantum systems, open systems cannot be described by a pure quantum state due to the influence of external factors.



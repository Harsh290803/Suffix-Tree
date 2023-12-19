# Suffix Trees

### Overview
We built a grocery management system by implementing three interesting data structures, namely, Suffix Trees, BK Tree and Bloom Filter. The system has mainly two ends:-

1. **Seller's End:** This is where the seller add the grocery items available at their store and search for item orders. This includes features like ensuring the grocery items entered by the seller are unique (using Bloom Filter) and fast searching of orders (using Suffix Tree).
2. **Buyer's End:** This is where the buyer enter their details and can order from the list of available grocery items. This includes features like auto-correct grocery item names (using BK Tree).

### Getting Started
1. Clone the repository.
```
git clone https://github.com/Harsh290803/Suffix-Tree.git
```
2. Compile the code using the following command.
```
g++ Suffix_tree.c PatternSearch.c main.cpp bloom.cpp BK_Tree.cpp
```
3. Follow the instructions on the terminal.

Note :-
- The buyer has to press 'Enter' after entering the name of each grocery item they need.
- The grocery items list can't contain any item whose name is a substring of the name of another item.
- Grocery item names should be between 1 and 99 characters.

### Contributors
- Alankrit Kadian ([@alankritkadian](https://github.com/alankritkadian))
- Aditya Patil ([@Nerditya](https://github.com/Nerditya))
- Harsh Raj Srivastava ([@Harsh290803](https://github.com/Harsh290803))
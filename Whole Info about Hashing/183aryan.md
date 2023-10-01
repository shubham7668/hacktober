# Hashing

### Definition
- Hashing is a technique that is used to uniquely identify a specific object from a group of similar objects. It a process of mapping keys, and values into the hash table by using a hash function. It is done for faster access to elements. The efficiency of mapping depends on the efficiency of the hash function used.
- In hashing, large keys are converted into small keys by using hash functions. The values are then stored in a data structure called hash table. The idea of hashing is to distribute entries (key/value pairs) uniformly across an array. Each element is assigned a key (converted key). By using that key you can access the element in O(1) time. Using the key, the algorithm (hash function) computes an index that suggests where an entry can be found or inserted.

### Implementation
- It can be implemented in two ways which are given below :
- 1.An element is converted into an integer by using a hash function. This element can be used as an index to store the original element, which falls into the hash table.
- 2.The element is stored in the hash table where it can be quickly retrieved using hashed key.


### Hash Function
- A hash function is any function that can be used to map a data set of an arbitrary size to a data set of a fixed size, which falls into the hash table. The values returned by a hash function are called hash values, hash codes, hash sums, or simply hashes.
- Irrespective of how good a hash function is, collisions are bound to occur. Therefore, to maintain the performance of a hash table, it is important to manage collisions through various collision resolution techniques.

### Why we need Collision resolution techniques and good hash function ?
- Let us understand the need for a good hash function. Assume that you have to store strings in the hash table by using the hashing technique {“abcdef”, “bcdefa”, “cdefab” , “defabc” }. 
- ![image](https://user-images.githubusercontent.com/76700307/193410833-e3cded0e-77c7-487b-a203-a71af111ae34.png)
- As in above image, after computing with hash function all strings are stored at same index. Therefore we need to resolve the collision using resolving techniques.

### Collision resolion techniques
#### Linear probing (open addressing or closed hashing)
- In open addressing, instead of in linked lists, all entry records are stored in the array itself. When a new entry has to be inserted, the hash index of the hashed value is computed and then the array is examined (starting with the hashed index). If the slot at the hashed index is unoccupied, then the entry record is inserted in slot at the hashed index else it proceeds in some probe sequence until it finds an unoccupied slot. The probe sequence is the sequence that is followed while traversing through entries. In different probe sequences, you can have different intervals between successive entry slots or probes. When searching for an entry, the array is scanned in the same sequence until either the target element is found or an unused slot is found. This indicates that there is no such key in the table. The name "open addressing" refers to the fact that the location or address of the item is not determined by its hash value.

- Linear probing is when the interval between successive probes is fixed (usually to 1). Let’s assume that the hashed index for a particular entry is index. The probing sequence for linear probing will be:

index = index % hashTableSize
index = (index + 1) % hashTableSize
index = (index + 2) % hashTableSize
index = (index + 3) % hashTableSize

- ![image](https://user-images.githubusercontent.com/76700307/193411147-7619b256-fcf1-49b8-b5cb-5834163c7813.png)

#### Separate chaining (open hashing)
- Separate chaining is one of the most commonly used collision resolution techniques. It is usually implemented using linked lists. In separate chaining, each element of the hash table is a linked list. To store an element in the hash table you must insert it into a specific linked list. If there is any collision (i.e. two different elements have same hash value) then store both the elements in the same linked list.
- ![image](https://user-images.githubusercontent.com/76700307/193410993-bcba430d-e037-4415-8ce9-64273480b5e1.png)

#### Quadratic Probing
- Quadratic probing is similar to linear probing and the only difference is the interval between successive probes or entry slots. Here, when the slot at a hashed index for an entry record is already occupied, you must start traversing until you find an unoccupied slot. The interval between slots is computed by adding the successive value of an arbitrary polynomial in the original hashed index.

- Let us assume that the hashed index for an entry is index and at index there is an occupied slot. The probe sequence will be as follows:

- index = index % hashTableSize
- index = (index + 12) % hashTableSize
- index = (index + 22) % hashTableSize
- index = (index + 32) % hashTableSize

- ![image](https://user-images.githubusercontent.com/76700307/193412240-70c03061-ff17-4b44-b071-cf77c97c0fb5.png)

#### Double hashing
- Double hashing is similar to linear probing and the only difference is the interval between successive probes. Here, the interval between probes is computed by using two hash functions.

- Let us say that the hashed index for an entry record is an index that is computed by one hashing function and the slot at that index is already occupied. You must start traversing in a specific probing sequence to look for an unoccupied slot. The probing sequence will be:

- index = (index + 1 * indexH) % hashTableSize;
- index = (index + 2 * indexH) % hashTableSize;

- ![image](https://user-images.githubusercontent.com/76700307/193413037-49f586dc-dc88-4b96-9c39-20c71fb3bdc3.png)

That's all from my side. Thanks for reading ❤❤.

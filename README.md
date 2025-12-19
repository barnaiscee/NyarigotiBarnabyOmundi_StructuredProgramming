The primary difference between a normal variable and a pointer lies in what they hold and how they interact with the computer's memory.

Storage: A normal variable stores a direct data value (like an integer, character, or float). A pointer stores a memory address (the location where a piece of data is kept).

Memory Access: When you use a normal variable, you access the data directly by its name. When you use a pointer, you access memory indirectly by looking at the address stored in the pointer and then jumping to that location.

Reading/Modifying: To read or change a normal variable, you use its identifier (e.g., x = 10). To read or change the value via a pointer, you must "dereference" it to reach the value residing at that address.

# vigenere.py
This is my solution to the vigenere.py challenge in problem set 6 of Harvard’s online CS50 course. 

Overall purpose: This program allows the user to encrypt text using a key.

How to use this program: The user should include a command line argument (upper or lowercase string with or without spaces but no integers or punctuation) when running this program. The string will serve as the encryption key. For example, the user could enter “python vigenere.py abc” or “python vigenere.py cd” in the command line. The program will then prompt the user to enter a plaintext string to be encrypted (the plaintext can contain punctuation marks or integers, however, those values will remain constant and not be encrypted). After the user enters the plaintext, the program will shift each letter in the plaintext according to the user’s key and produce the encrypted text or ciphertext.

How it works: The assignment assumes that the user wants to encrypt text using characters based on their index order in the alphabet. Because “A” is the first letter in the alphabet, its index value would be 0. “B” is the second letter so its index value is 1, the index value of “C” is 2, and so on, all the way to “Z” at 25, with each letter having the same uppercase and lowercase index values. Because of this parameter in the assignment, my program had to shift each letter’s normal ASCII value (65 to 90 for uppercase, 97 to 122 for lowercase) to the new index range from 0 to 25.

Once the user has entered the key and the plaintext strings, the program shifts the alphabetical index value of each plaintext character by the alphabetical index value of each key character to produce the ciphertext. So if the user enters "b" as the key and “C” as the plaintext, the ciphertext will be “D”. This is true because "b" is at index 1 and “C” is at index 2. 1 plus 2 equals 3, therefore, the program produces “D” as the ciphertext since “D” is at index 3 in the alphabet. Note that the case of the plaintext is preserved in the ciphertext.

Keys with multiple characters also work in this program. For keys with multiple characters, the first character in the plaintext is shifted according to the first character in the key, the second plaintext character shifts by the second key character, and so on. If the plaintext is longer than the key, the key will loop back to its first character and the program will continue with the same process until the entire plaintext has been encrypted. Also, spaces both in the key and plaintext are skipped and do not throw off the encryption process.

Note on previous version: Earlier in the course, I created a program in C that produced the same effect. In this assignment, I translated into Python the code I had previously written in C.

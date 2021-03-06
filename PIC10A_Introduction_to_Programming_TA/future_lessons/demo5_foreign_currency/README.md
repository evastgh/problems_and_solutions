# Demo 6 - Foreign currency calculator

Write a program that calculates the equivalent amount in USD from a portfolio consisting of Taiwanese dollars (TWD), Canadian dollars (CAD), and Mexican Pesos (MXN). 

## In class challenge
Write a chat bot that will converse some gibberish with the user and after exchanging 3 sentences, output the **total amount of characters** inputed by the user. The conversation will look like:

> "Hello, I'm your sincere chat bot. "<br />
(user reply something)<br />
"Oh, I'm glad to hear that. "<br />
(user reply something)<br />
"This is a good conversation. "<br />
(user reply something)<br />
"You have so far sent me (some number) characters. It has been nice to chat with you!"

I hope you'll notice ```cin``` doesn't do a good job for our purpose. In order to make your program actually take in **everything in the sentence** until the user hits enter (including spaces and special characters etc.), read [this](http://www.cplusplus.com/reference/string/string/getline/).

To have more fun, try to abuse your program by inputting emojis, characters from other languages, etc. 

## Side Note
Don't forget to append ```system("pause")``` at the end of your program! Visual Studio closes the console when the main function returns; you don't want your printed result be wiped out due to that. For alternatives for ```system("pause")```, see [this](http://www.cplusplus.com/forum/windows/55426/).

[This](http://www.cplusplus.com/forum/beginner/13507/) explains why you can't add two string literals together; you might not be able to fully understand since you haven't learnd the concept of pointers yet. 

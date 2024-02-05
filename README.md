# M1OEP-hschoppe

## Summary 

This project is a recreation of the New York Times game, Connections. The game features a 4x4 grid of sixteen words that fit into four different groups. The player is tasked with guessing which words fit together. In addition to the basic gameplay, there is a scramble method, so that if the player is ever stuck they can move the words around to hopefully generate new ideas.

This game incorporates the following module one concepts:
- Class: This game features a class, titled Connections, that has modules declared within the header file and defined within the Connections.cpp file. It features multiple fields and methods that relate to the verification, storage, and deletion of words from the grid.
- Overloaded Operators: To verify that two words are members of the same group, I use an overloaded == operator. Each member of an enum is labeled 1-4, depending on which of the four groups it is a member of. The overload operator accepts strings, converts them into the enum type, and then confirms whether or not the words are members of the same group by seeing if the enum values are equal.
- Enumeration: As mentioned above, we have an enum of strings that are valued 1-4 and are used to determine which group words are in.
- Input validation: This program utilizes sstream to separate strings of multiple words into multiple strings, each of one word.

## Known Bugs and Moving Forward

While I have not had time for extensive testing, in my few trial runs I am yet to come across any major bugs. 

In terms of moving forwards, there are a lot of features I would like to add to this project. For starters, I would like to add the "one off!" feature that New York Times has, where if you have three of the four words in a group correct you are informed that you are only off by one (though you still have to figure out which one that is.) While not major features, I would also like to make input validation more lenient in the future, as well as cleaning up the console so that it is not so flooded with text.

## Citations 

Citations are listed throughout the program where they are used, but will also be listed below:
- https://stackoverflow.com/questions/7163069/c-string-to-enum this was very helpful in helping me figure out how to make the overloaded operator convert strings into enum types and use their values.
- https://www.simplilearn.com/tutorials/cpp-tutorial/string-stream-in-cpp#:~:text=StringStream%20in%20C%2B%2B%20is,defined%20in%20the%20StringStream%20class This was helpful for me in terms of splitting the user response into multiple words.

## What grade I deserved

I am proud of what I accomplished with this project while also navigating work from other classes and am fairly confident that my efforts will be shown in my grade. I believe, based on the work that I put into this project, that I will get around a 66/70. I have outlined my thinking by going through the rubric below:

#### Main program complexity and usability : 40/40

I believe that my project incorporates all of the listed module one concepts, features strict but documented and effective input validation, and is sufficiently difficult. I spent roughly a dozen hours on this project if I had to guess, and had to teach myself multiple new things about C++ to create it in the way I envisioned.

#### Concept: C++ Class: 18/20

I believe that my class is designed and documented fairly well, but could probably be used slightly more efficiently within the main program.

#### Concepts: Overloaded operator, enum : 8/10 (4/5 each)

I believe that I incorporated both overloaded operators and enumeration in unique ways, and implemented them fairly well. My only potential loss of points, I believe, is that there may have been more efficient methods both of using them to validate responses, and of using them in general within the program.

#### Style/Documentation, Video, Lifespan of Project

I followed the style given to us in previous projects and examples as closely as I could, and included ample inline comments to help readers quickly judge what each block of code does.

The video features input runs showing both winning and losing the game, with multiple guesses in each, as well as a brief outline of the code.

The project was started, if I am not mistaken, on 26th January and has featured nearly daily commits. 
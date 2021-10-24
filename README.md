# investmentSimulator

Q1: What is this? 

This was a project for Professor Bill Chan's Programming Languages course at Southern New Hampshire University. Briefly, it allows the user to input several financial variables on the command line, such as an initial investment and monthly deposit, and uses that information to calculate the amount of money one would generate over a user-defined period of time. It models both the overall returns including and without the monthly deposit, as to allow the user to more intuitively understand the power of routine small investments over time. 

Q2: What did you do well?

I think the program is well-organized, readable and easily adaptable. I also think my design choices were, broadly speaking, appropriate and efficient. Whitespace is applied well, comments are helpful yet not overwhelming, and most things are segregated into distinct functions rather than crammed in the main function. 

Q3: What could you have done better?

I certainly could have implemented the chunks of code responsible for running the math on interest rates and whatnot better. That entire part of the program was somewhat clunky, and given more time, I would have gone back and tried to a.) figure out more elegant calculations and b.) ran the appropriate calculations and stored them in discrete variables rather than just calculating them as I displayed the chart and iterating through different years. 

Q4: What parts did you find difficult, and how did you overcome them?

I was still fairly new to using C++ when I built this project, and I found it (and frankly still find it) a difficult language to work with. This is ultimately only overcome through persistence - completing this project helped to solidify my grasp of C++ and set me up for success over the rest of the course, and hopefully over the rest of my programming life. Liberal use of free resources on the internet, such as StackOverflow, was tremendously helpful. As was regularly consulting C++ documentation. 

Q5: What skills from this project will be particularly transferable to other projects or course work?

This project really enabled me to grasp object-oriented programming a little bit more intuitively. I chose to model the investment as an object that is acted upon using methods, and while I struggled a little with the implementation, I did get it working nice and cleanly. Moving forward, I intend to lean into OOP more and try to become increasingly proficient in it as a programming paradigm. As weird as it is, most of my programming background is in functional programming (econometrics!). 

Q6: How did you make this program maintainable, readable, and adaptable?

I separated the investment class from the core of the program, helping keep things clean and stored away in different files. I also tried to use comments where appropriate by clarifying things that might be difficult to grasp in the program while not overloading the reader with superflous comments. 

# Math Tutor V2

<b>Table of Contents</b>
- [Summary](#summary)
- [Program Flowchart](#program-flowchart)
- [Maintainers](#maintainers)
- [New Concepts Used](#new-concepts-used)
- [Console Output Examples](#console-output-examples)

## Summary
This program is a Silly Simple Math Tutor designed for young children. Version 2 introduces dynamic elements to the quiz:
- Displays a user-friendly program header and fun math facts.
- Gets the user's full name (handling spaces) and welcomes them to the game.
- Generates a random math question (addition, subtraction, multiplication, or division) using random numbers between 1 and 10.
- Evaluates the user's answer and provides appropriate feedback (congratulations for correct answers, or displaying the correct answer if incorrect).
- Gracefully handles invalid mathematical operation types with specific error outputs.

## Program Flowchart
![Math Tutor V2 Flowchart](diagram.ppg)

## Maintainers
[@MalachiByrd](https://github.com/MalachiByrd) Malachi Byrd  
[@NETtlSimrox](https://github.com/NETtlSimrox) Md Mahbubur Rahman Siam

## New Concepts Used
- `<cstdlib>` and `<ctime>` libraries for random number generation
- `srand()` and `time(0)` to seed the random method
- `rand()` function with modulus arithmetic to generate numbers within a specific range
- `switch` and `case` statements for control flow
- `getline()` for capturing string input containing spaces

## Console Output Examples

**1. Correct Answer Example**
```text
***************************************
 _   _      _ _       _
| | | |    | | |     | |
| |_| | ___| | | ___ | |
|  _  |/ _ \ | |/ _ \| |
| | | |  __/ | | (_) |_|
\_| |_/\___|_|_|\___/(_))

***************************************
Welcome to the Silly Simple MathTutorV2
***************************************

Math Fun Facts:

**********************************************************
  *Math teachers have problems.
  *Math is the only subject that counts.
  *If it seems easy, your doing it wrong.
  *It's all fun and games until someone divides by zero.
**********************************************************
What is your name? Siam
Siam, what is 5 * 3 =15
Correct! Great job, Siam!
End of the program.
```

**2. Incorrect Answer Example**
```text
***************************************
 _   _      _ _       _
| | | |    | | |     | |
| |_| | ___| | | ___ | |
|  _  |/ _ \ | |/ _ \| |
| | | |  __/ | | (_) |_|
\_| |_/\___|_|_|\___/(_))

***************************************
Welcome to the Silly Simple MathTutorV2
***************************************

Math Fun Facts:

**********************************************************
  *Math teachers have problems.
  *Math is the only subject that counts.
  *If it seems easy, your doing it wrong.
  *It's all fun and games until someone divides by zero.
**********************************************************
What is your name? Malachi
Malachi, what is 8 - 2 =4
Sorry, that's incorrect. The correct answer is 6.
End of the program.
```

**3. Invalid Math Type Example**
```text
***************************************
 _   _      _ _       _
| | | |    | | |     | |
| |_| | ___| | | ___ | |
|  _  |/ _ \ | |/ _ \| |
| | | |  __/ | | (_) |_|
\_| |_/\___|_|_|\___/(_))

***************************************
Welcome to the Silly Simple MathTutorV2
***************************************

Math Fun Facts:

**********************************************************
  *Math teachers have problems.
  *Math is the only subject that counts.
  *If it seems easy, your doing it wrong.
  *It's all fun and games until someone divides by zero.
**********************************************************
What is your name? Siam
Invalid question type: 5
Program ended with an error -1
Please report this error to the system administrator.
```





```

[Back to Top](#math-tutor-v1)

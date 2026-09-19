# Robotics-movement
This is my first Git Repository.
<br>
Author-Bkash tripura
how work as:
🤖 Robot Movement Simulator

A simple C++ console-based Robot Movement Simulator that allows a robot to move on a 2D coordinate plane using commands.

📌 Project Overview

In this project, the robot starts at position (0, 0) and its initial direction is North (N).

The user can give four types of commands:

F → Forward

L → Turn Left

R → Turn Right

Q → Quit

After processing all commands, the program displays the robot's final position and final direction.

🎯 Features

Tracks the robot's current position

Supports North, East, South, and West directions

Supports forward movement

Supports left and right turns

Allows multiple commands

Displays the final position and direction

🧠 How It Works

The robot's position is stored using two variables:

int x = 0, y = 0;

Here:

x → Horizontal position

y → Vertical position

The robot's direction is stored using:

char direction = 'N';

N means North.

🧭 Direction System

The robot has four possible directions:

Direction

Meaning

N

North

E

East

S

South

W

West

Forward Movement

When the robot receives the F command, it moves one step forward in its current direction.

        N
        ↑
        |
W ←──── Robot ────→ E
        |
        ↓
        S

Movement rules:

N → y++
E → x++
S → y--
W → x--

🔄 Left Turn

When the robot receives the L command, it turns 90° to the left.

N → W
W → S
S → E
E → N

For example:

Current Direction: N
Command: L
New Direction: W

🔄 Right Turn

When the robot receives the R command, it turns 90° to the right.

N → E
E → S
S → W
W → N

For example:

Current Direction: N
Command: R
New Direction: E

⌨️ Commands

Command

Action

F

Move Forward

L

Turn Left

R

Turn Right

Q

Quit

▶️ Example

Input

F F R F F L F Q

Step-by-Step

Starting position:

Position = (0,0)
Direction = N

F

Position = (0,1)
Direction = N

F

Position = (0,2)
Direction = N

R

Position = (0,2)
Direction = E

F

Position = (1,2)
Direction = E

F

Position = (2,2)
Direction = E

L

Position = (2,2)
Direction = N

F

Position = (2,3)
Direction = N

Q

The program stops.

Output

Final Position: (2, 3)
Final Direction: N

⚙️ Main Logic

The main logic of the program is:

Start
  ↓
Position = (0,0)
Direction = N
  ↓
Take Command
  ↓
Is command Q?
  ├── Yes → Stop
  │
  └── No
       ↓
    F / L / R?
       ↓
   Update Position
   or Direction
       ↓
   Take Next Command
       ↓
      Repeat

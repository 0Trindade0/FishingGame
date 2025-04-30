# 🎣 Fishing Game (C++ Console Game)

A simple console-based fishing game built in C++. The player tries to guess the hidden positions of fish inside a lake by typing X and Y coordinates.

## 🕹️ How It Works

- The lake is a 10x5 grid.
- A random number of fish (defined by the user) are hidden at random positions.
- Some fish may be **golden** (this can be extended).
- You have **10 attempts** to find as many fish as possible.
- Each coordinate guess reveals if there's a fish or not.

## 📂 Project Structure

- `FishingGame.cpp`: Main game loop and player interaction.
- `Fish.h / Fish.cpp`: Fish class and the fish generator function.
- `Lake.h / Lake.cpp`: Lake class which manages grid logic, tracking hits and misses.
- `Random.h / Random.cpp`: Utility class for random number generation.

## 🧠 Concepts Used

- Object-Oriented Programming (classes, encapsulation)
- 2D vector grids
- Input/output via `std::cin` and `std::cout`
- Random number generation using `std::mt19937`
- Basic game loop structure

## ▶️ How to Run

You can compile and run the game using a C++ compiler like `g++`:

```bash
g++ FishingGame.cpp Fish.cpp Lake.cpp Random.cpp -o fishing_game
./fishing_game

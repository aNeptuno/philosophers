# Dining Philosophers Problem 🍽️🧠

## Description

A solution to the Dining Philosophers Problem, where multiple philosophers are represented as threads. The philosophers alternate between thinking, eating, and waiting for forks to share. This project demonstrates multithreading, synchronization, and resource sharing.

## Base Features

- **Multithreading**: Philosophers are implemented as separate threads that simulate their actions (thinking, eating, and waiting for forks) 🧵.
- **Mutexes for Synchronization**: Ensures that only one philosopher can use a fork at a time, preventing race conditions and deadlocks 🔒.
- **Philosophers' Actions**: Philosophers alternate between thinking 🤔 and eating 🍴 in a continuous cycle 🔄.

## Bonus Features

- **Time Management**: Allows setting a time limit for each philosopher to eat, die, and sleep. Philosophers are monitored to prevent starvation ⏳.
- **Number of Times to Eat**: Philosophers can be set to eat a specific number of times before the simulation ends 🍽️.
- **Multiple Philosophers**: The system can handle any number of philosophers and will scale appropriately 👥.
- **Visual Feedback**: The program prints updates on the philosophers' status (thinking, eating, sleeping, dead) in real-time 📊.

## Tech Stack

- **Programming Language**: C 💻
- **Multithreading**: pthreads (POSIX Threads) 🧵
- **Synchronization**: Mutexes and Condition Variables 🔒

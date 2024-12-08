# Bubble Sort Visualization

## Introduction
This project visualizes the Bubble Sort algorithm using SFML in C++. It creates a graphical representation of the sorting process, showing the step-by-step progress of the algorithm.

## Features
- Visual representation of the Bubble Sort algorithm.
- Real-time updates to show the sorting process.
- Customizable number of elements and their heights.

## Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/UmarlyPoeta/bubble_sort_visualisation.git
    ```
2. Navigate to the project directory:
    ```sh
    cd bubble_sort_visualisation
    ```
3. Install SFML:
    - On Ubuntu:
        ```sh
        sudo apt-get install libsfml-dev
        ```
    - On Windows or other systems, follow the [SFML installation guide](https://www.sfml-dev.org/tutorials/2.5/).

4. Compile the project:
    ```sh
    g++ -o bubble_sort_visualisation main.cpp -lsfml-graphics -lsfml-window -lsfml-system
    ```
    or
   ```sh
    zsh run.zsh
    ```

## Usage
Run the compiled executable:
```sh
./bubble_sort_visualisation
```
A window will open showing the bars representing the elements being sorted using the Bubble Sort algorithm.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

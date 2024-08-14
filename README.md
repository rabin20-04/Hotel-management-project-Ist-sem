
#  Hotel Management System


This is a C program that simulates a hotel room booking system for ERC Hotel. It allows users to view available rooms, book a room, and view details of booked rooms. The system is designed to manage 36 rooms, categorized into VVIP, VIP, and Normal rooms.

## Features

- **View Available Rooms:** Check the availability of VVIP, VIP, and Normal rooms.
- **Book a Room:** Users can book a room by providing their details, including name, address, phone number, check-in date, and check-out date.
- **View Booked Rooms:** Display the details of all booked rooms from a file.


# Clone to this repository
`
https://github.com/rabin20-04/Hotel-management-project-Ist-sem.git

`


## Prerequisites

- A C compiler (e.g., GCC)
- A terminal or command prompt to run the program

## How to Compile

To compile the program, use the following command in the terminal:

```sh
gcc -o erc_hotel erc_hotel.c
```

## How to Run

After compiling, run the program with:

```sh
./erc_hotel
```

## Program Flow

1. **Welcome Screen:** The program starts by displaying a welcome message and a menu with the following options:
   - View the number of rooms
   - View booked room details
   - Exit the program

2. **View Rooms:** When you select the option to view rooms, it displays the categories of rooms available: VVIP, VIP, and Normal. It then prompts you to book a room or exit.

3. **Book a Room:** If you choose to book a room, the program displays the available rooms in each category. After selecting a room, you need to enter your details. These details are saved to a file named `filedata.txt`.

4. **View Booked Room Details:** You can view the details of all booked rooms by selecting this option. The details are read from `filedata.txt`.


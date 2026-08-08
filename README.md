# 📚 Library Management System

A **console-based Library Management System** developed using **C++** and **Object-Oriented Programming (OOP)** concepts.

This project provides a complete solution for managing books, users, issue and return operations. It also uses **file handling** to store and retrieve data permanently.

---

# 🚀 Features

## 🔐 Admin Module

- Admin login authentication
- Secure username and password verification
- Admin dashboard

---

# 📖 Book Management

The system provides complete book management functionality:

- Add new books
- Remove books
- Update book details
- Search books by Book ID
- Display all available books
- Search books by author name
- Search books by category
- Maintain book availability status

---

# 👤 User Management

User-related operations include:

- Add new users
- Display user details
- Search users by User ID
- Store user information permanently
- Track issued books of users

---

# 🔄 Issue & Return Management

The system supports:

- Issue books to registered users
- Return issued books
- Automatically update book quantity
- Maintain book availability
- Track issued book details
- Store issue information permanently

---

# 💾 File Handling

The project uses file handling for data persistence.

Implemented files:

```
data/
│
├── books.txt
│
└── users.txt
```

Features:

- Save book records automatically
- Load book records when the program starts
- Save user records automatically
- Load user records automatically

---

# 🛠️ Technologies Used

- C++
- Object-Oriented Programming (OOP)
- File Handling
- STL Vector
- Modular Programming

---

# 📂 Project Structure

```
Library-Management-System
│
├── main.cpp
│
├── include
│   ├── Book.h
│   ├── User.h
│   ├── Admin.h
│   └── Library.h
│
├── src
│   ├── Book.cpp
│   ├── User.cpp
│   ├── Admin.cpp
│   └── Library.cpp
│
├── data
│   ├── books.txt
│   └── users.txt
│
└── README.md
```

---

# ⚙️ How to Run the Project

## Step 1: Clone Repository

```bash
git clone <repository-url>
```

## Step 2: Navigate to Project Folder

```bash
cd Library-Management-System
```

## Step 3: Compile the Project

```bash
g++ main.cpp src/*.cpp -Iinclude -o library
```

## Step 4: Run the Application

### Windows:

```bash
.\library.exe
```

---

# 📌 Application Workflow

```
Start Program

      ↓

Admin Login

      ↓

Library Dashboard

      ↓

Book Management
(Add / Remove / Update / Search)

      ↓

User Management
(Add / Search Users)

      ↓

Issue & Return Books

      ↓

Save Data Automatically

      ↓

Exit
```

---

# 🧠 OOP Concepts Implemented

This project demonstrates:

### Encapsulation
- Data members are kept private
- Access through getter and setter functions

### Classes and Objects
Implemented classes:

- Book
- User
- Admin
- Library

### Constructors
- Default constructors
- Parameterized constructors

### Modular Programming
Separate header and source files are used for better organization.

---

# ✨ Bonus Features Implemented

⭐ Search books by author  
⭐ Search books by category  
⭐ Persistent data storage  
⭐ User-book tracking  
⭐ Automatic availability management  

---

# 🔮 Future Improvements

Possible future enhancements:

- Multiple book issue support
- Due date management
- Fine calculation system
- Database integration
- GUI-based application
- Online library portal

---

# 👨‍💻 Author

**Aradhya Awasthi**

B.Tech Computer Science Engineering

---

# 📄 License

This project is developed for educational purposes.
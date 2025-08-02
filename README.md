
# 📝 Quiz Management System (C Language)

A console-based **Quiz Management System** developed using **C language**, designed for administering quizzes, managing questions, evaluating answers, and displaying scores.

---

## 📌 Features

- ➕ Add new quiz questions
- 🗑️ Delete existing questions
- ✏️ Modify quiz questions
- 🎮 Take quiz
- 📊 View score and summary
- 🔐 Admin access for managing the system

---

## 💻 Technologies Used

| Technology | Description |
|-----------|-------------|
| C | Core programming language |
| File Handling | Used for storing and retrieving quiz questions and results |
| GCC | Recommended compiler |
| Terminal/Console | User Interface |

---

## 🏁 Getting Started

### 1. Clone or Download the Project
```bash
git clone https://github.com/Mehsan-Ali/Quiz-Management.git
cd quiz-management-system-c
```

### 2. Compile the Code
Use GCC to compile:
```bash
gcc quiz_system.c -o quiz_system
```

### 3. Run the Program
```bash
./quiz_system
```

---

## 🔐 Admin Access

To manage questions, log in as admin (if implemented). Example credentials:

```
Username: admin
Password: admin123
```

*(You can change credentials in the source code if needed.)*

---

## 📂 Project Structure

```
quiz-management-system-c/
├── quiz_system.c          # Main source code
├── questions.txt          # Stored quiz questions (optional)
├── scores.txt             # Score log file (optional)
└── README.md              # Project documentation
```

---

## 🛠️ Future Improvements

- GUI interface using C graphics or GTK
- Categorized quizzes (by subject, difficulty)
- Timer-based quiz sessions
- High score tracking

---

## 📄 License

This project is licensed under the MIT License.

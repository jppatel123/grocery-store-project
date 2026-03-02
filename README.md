# 🛒 Grocery Store Management System

![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Linux%20%2F%20Windows-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge)

A **terminal-based grocery store management system** written in C, featuring full inventory management, billing, and persistent file storage.

---

## 📋 Features

- ➕ **Add** new products with name, price, and quantity
- 📋 **View** full inventory with formatted display
- ✏️ **Update** product price or stock quantity
- ❌ **Delete** products from inventory
- 🛍️ **Billing system** — generate itemized customer bills
- 💾 **Persistent storage** — data saved to file, survives program restart
- 🔍 **Search** products by name

---

## 🛠️ Built With

<p>
  <img src="https://skillicons.dev/icons?i=c,linux,vscode" />
</p>

- **Language:** C (Standard C99)
- **Storage:** File I/O (`fread` / `fwrite`)
- **IDE:** VS Code / Code Composer Studio

---

## 🚀 How to Run

### Prerequisites
- GCC compiler installed
- Linux / macOS / Windows (with MinGW)

### Compile & Run
```bash
# Clone the repo
git clone https://github.com/jppatel123/grocery-store-project.git
cd grocery-store-project/grocery-store-project

# Compile
gcc grocey_store_project.c -o grocery_store

# Run
./grocery_store
```

---

## 📁 Project Structure

```
grocery-store-project/
│
├── grocery-store-project/
│   └── grocey_store_project.c    # Main source file
│
├── grocey_store_project          # Compiled binary
├── grocey_store_project.c        # Source (root copy)
└── README.md
```

---

## 📸 Demo

```
========================================
     GROCERY STORE MANAGEMENT SYSTEM    
========================================
  1. Add Product
  2. View All Products
  3. Update Product
  4. Delete Product
  5. Generate Bill
  6. Search Product
  7. Exit
========================================
Enter your choice: 
```

---

## 💡 What I Learned

- **Structs** for modeling real-world data (products, inventory)
- **File I/O** in C for persistent data storage
- **Modular programming** with functions for each operation
- **Memory management** and pointer handling in C

---

## 👤 Author

**Jay Patel** — [@jppatel123](https://github.com/jppatel123)

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=flat&logo=linkedin&logoColor=white)](https://linkedin.com/in/jayprakashbhai-patel)
[![Email](https://img.shields.io/badge/Email-D14836?style=flat&logo=gmail&logoColor=white)](mailto:jayppatel5078@gmail.com)

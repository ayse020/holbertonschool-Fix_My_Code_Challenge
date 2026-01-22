#!/usr/bin/env node

// 1-print_square.js
// Script to print a square of size passed as argument

// Get the size from command line argument and force base 10
const size = parseInt(process.argv[2], 10);

// If no argument or invalid size, do nothing
if (!size || size <= 0) {
  process.exit(0);
}

// Loop to print the square
for (let i = 0; i < size; i++) {
  console.log('X'.repeat(size));
}

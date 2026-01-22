#!/usr/bin/env node
// 1-print_square.js

// Komanda xəttindən ölçünü oxuyuruq
const size = parseInt(process.argv[2]);

// Əgər ölçü düzgün deyilsə, xəbərdarlıq veririk
if (isNaN(size) || size <= 0) {
  console.log('Size must be a positive number');
  process.exit(1);
}

// Kvadratı çap edirik
for (let i = 0; i < size; i++) {
  console.log('X'.repeat(size));
}

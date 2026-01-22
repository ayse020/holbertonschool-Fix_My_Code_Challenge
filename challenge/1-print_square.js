#!/usr/bin/node

// Alınan ölçünü oxuyuruq
const size = parseInt(process.argv[2], 10);

// Əgər ölçü düzgün deyilsə, heç nə çap etməyək
if (isNaN(size) || size <= 0) {
  // Heç nə etmə
} else {
  // Hər sətri çap edirik
  for (let i = 0; i < size; i++) {
    console.log("#".repeat(size));
  }
}

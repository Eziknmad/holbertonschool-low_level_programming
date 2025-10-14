#!/usr/bin/env bash

# remove_duplicates.sh
# This script removes duplicate files (by content) and keeps only one copy.

set -euo pipefail

# Directory to scan – default to current directory if not provided
DIR="${1:-.}"

# Use an associative array to track hashes
declare -A seen

# Function to hash file content using SHA-256
file_hash() {
  sha256sum "$1" | cut -d ' ' -f1
}

echo "🔍 Scanning directory: $DIR"

# Find all files recursively
while IFS= read -r -d '' file; do
  # Skip if not a regular file
  [[ -f "$file" ]] || continue

  # Calculate the hash
  hash=$(file_hash "$file")

  # Check if we've seen this hash before
  if [[ -n "${seen[$hash]:-}" ]]; then
    echo "🗑️  Duplicate found: $file (same as ${seen[$hash]})"
    rm -f "$file"
  else
    # First time seeing this content
    seen["$hash"]="$file"
    echo "✅ Keeping: $file"
  fi
done < <(find "$DIR" -type f -print0)

echo "✅ Done. Duplicate files removed."

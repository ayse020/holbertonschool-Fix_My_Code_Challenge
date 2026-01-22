# 2-sort.rb

# 1. Get command-line arguments
args = ARGV

# 2. Separate numbers and non-number strings
numbers = args.select { |a| a.match?(/^-?\d+$/) }.map(&:to_i)
strings = args.reject { |a| a.match?(/^-?\d+$/) }

# 3. Sort numbers ascending
sorted_numbers = numbers.sort

# 4. Sort strings alphabetically
sorted_strings = strings.sort

# 5. Print numbers first
sorted_numbers.each { |num| puts num }

# 6. Print strings next
sorted_strings.each { |str| puts str }

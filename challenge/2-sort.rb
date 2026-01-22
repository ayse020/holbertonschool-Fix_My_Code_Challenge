# 2-sort.rb

# 1. Get command-line arguments
args = ARGV

# 2. Select only numbers and convert to integers
numbers = args.select { |a| a.match?(/^-?\d+$/) }.map(&:to_i)

# 3. Sort numbers ascending
sorted_numbers = numbers.sort

# 4. Print numbers only
sorted_numbers.each { |num| puts num }


#! /usr/bin/ruby

arguments = []

100000.times do |i|
  arguments << 'hi' + i.to_s
end

# Getting (Errno::E2BIG)
puts `./a.out #{arguments}`

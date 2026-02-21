-- In This Lesson We're learning Logical Operators and some Lua Idioms!

x = 1
y = 0


-- AND & OR
xAndY = x and y
xOrY = x or y

print("X and y =", xAndY)
print("x or y =", xOrY)


-- Negate
print("(true)`", true and false)

answer = nil and 10
print("What is your Rating of Stranger Things Final Season?", answer)



-- Condition with idioms!

-- if not x then 
--     x = v
-- end

-- We can write this if like this!
o = o or v
print("To be or not be?", o)
-- We will learn a lot more about conditions soon!